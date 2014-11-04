package edu.rcc.server;

import org.jsoup.Jsoup;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

import java.io.IOException;
import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.sql.Statement;
import java.util.ArrayList;

/**
 * Created by: Michael Risher
 * Date: 10/24/14
 * Time: 1:05 PM
 */
public class Main {
	private static final String DB_FILE = "database.properties";
	private static final String TABLE_PREPEND = "rccapp_";
	private static final String NEWS_HEADER_TABLE = TABLE_PREPEND + "news_header";
	private static final String NEWS_ARTICLE_TABLE = TABLE_PREPEND + "news_article";
	private static final String REPORT_TABLE = TABLE_PREPEND + "scalp_error";
	private static final String MODE = "live";

	public static void main( String[] args ) {
		try {
			scalpNewsHeaders( true );
		} catch ( IOException | SQLException e ) {
			e.printStackTrace();
		}
	}

	/**
	 * Scalp the rcc news and add it to the database
	 * bugs to look forward to how to order?
	 *
	 * @throws IOException
	 */
	private static void scalpNewsHeaders( boolean follow ) throws IOException, SQLException {
		ArrayList<NewsHeader> newsList = new ArrayList<NewsHeader>();

		Document doc = Jsoup.connect( "http://www.rcc.edu/Pages/home.aspx" ).get();

		Element content = doc.getElementById( "newsList" );
		Elements recent = content.getElementsByClass( "recent" );
		Elements NewsTrs = recent.get( 0 ).getElementsByTag( "tr" );

		for ( Element NewsTd : NewsTrs ) {
			if ( NewsTd.getElementsByClass( "newsItem" ).eq( 0 ).hasClass( "newsItem" ) ) {
				Elements img = NewsTd.getElementsByClass( "rollup" ).get( 0 ).getElementsByTag( "img" );
				Elements link = NewsTd.getElementsByClass( "heading" ).get( 0 ).getElementsByTag( "a" );
				String imgSrc = img.get( 0 ).attr( "src" );

				if ( !imgSrc.matches( "^http://.+?$" ) ) {
					//there is no http://....
					imgSrc = "http://www.rcc.edu" + imgSrc;
				}
				String newsLink = link.get( 0 ).attr( "href" );
				String newsTitle = link.get( 0 ).text();
				newsList.add( new NewsHeader( newsTitle, newsLink, imgSrc ) );
			}
		}
		Database db = new Database( DB_FILE, MODE );
		makeTables( db, 0 );
		Connection conn = db.getConnection();
		ResultSet res = null;

		for ( int i = 0; i < newsList.size(); i++ ) {
			Statement state = conn.createStatement();
			res = state.executeQuery( "SELECT id FROM " + NEWS_HEADER_TABLE + " WHERE hash=\"" + Database.escape( newsList.get( i ).getHash() ) + "\"" );

			if ( res.next() ) {
				Pl( "Already there (" + newsList.get( i ).getHash() + ")" );
			} else {
				String query = "INSERT INTO " + NEWS_HEADER_TABLE + "( newsTitle, newsLink, imageLink, hash) VALUES(" + newsList.get( i ).toInsertString() + ")";
				state.executeUpdate( query );
			}
			state.close();
			res.close();
		}
		conn.close();

		if ( follow ) {
			scalpNewsArticle( newsList );
		}
	}

	/**
	 * Scalps the news articles
	 * @throws IOException
	 */
	private static void scalpNewsArticle( ArrayList<NewsHeader> newsHeaders ) throws IOException, SQLException {
		try{
			for (int i = 0; i < newsHeaders.size(); i++){
				NewsHeader newsHeader = newsHeaders.get( i );
				Pl( "reading " + newsHeader.getHash() + " " + newsHeader.getLink() );
				Document doc = Jsoup.connect( newsHeader.getLink() ).get();
				Element content = doc.getElementsByClass( "article-content" ).first();

				if ( content == null ) {
					reportError( newsHeader.getLink(), "Content null", "html parse fail", "newArticle" );
				} else {
					String contentHtml = content.html();
					contentHtml = contentHtml.replaceAll( "(src|href)=(?:\"|')(\\/.+?)(?:\"|')", "$1=\"http://rcc.edu$2\"" );
					Database db = new Database( DB_FILE, MODE );
					makeTables( db, 1 );
					Connection conn = db.getConnection();
					Statement state = conn.createStatement();
					ResultSet res = null;
					res = state.executeQuery( "SELECT id FROM " + NEWS_ARTICLE_TABLE + " WHERE hash=\"" + Database.escape( newsHeader.getHash() ) + "\"" );

					if ( res.next() ) {
						Pl( "Article already there (" + newsHeader.getHash() + ")" );
					} else {
						String query = "INSERT INTO " + NEWS_ARTICLE_TABLE + "( content, hash) VALUES(\"" + Database.escape( contentHtml ) + "\", \"" + Database.escape( newsHeader.getHash() ) + "\")";
						//Pl( query );
						state.executeUpdate( query );
					}
				}
				Pl( "sleep 1s" );
				Thread.sleep( 1000L );
			}

		}catch ( InterruptedException e ){
			e.printStackTrace();
		}
	}

	private static void reportError( String url, String msg, String type, String dataType ) throws IOException, SQLException{
		Database db = new Database( DB_FILE, MODE );
		makeTables( db, 2 );
		Connection conn = db.getConnection();
		Statement state = conn.createStatement();

		String query = "INSERT INTO " + REPORT_TABLE + "( url, msg, type, dataType ) VALUES(\"" +
			Database.escape( url ) + "\", \"" +
			Database.escape( msg ) + "\", \"" +
			Database.escape( type ) + "\", \"" +
			Database.escape( dataType ) + "\"" +
		")";
//		Pl( query);
		state.executeUpdate( query );
	}
	/**
	 * Makes db table if they dont exist yet
	 * @param db
	 * @param id
	 */
	private static void makeTables( Database db, int id ){
		String q = "";
		String t = "";
		switch ( id ) {
			case 0 : {
				t = NEWS_HEADER_TABLE;
				q = "CREATE TABLE " + t + " (" +
						"  id int(6) NOT NULL AUTO_INCREMENT," +
						"  newsTitle text NOT NULL," +
						"  newsLink text NOT NULL," +
						"  imageLink text NOT NULL," +
						"  hash varchar(40) NOT NULL," +
						"  PRIMARY KEY (id)," +
						"  INDEX (hash)" +
						")";
				break;
			}
			case 1 : {
				t = NEWS_ARTICLE_TABLE;
				q = "CREATE TABLE " + t + " (" +
						"  id int(6) NOT NULL AUTO_INCREMENT," +
						"  content text NOT NULL," +
						"  hash varchar(40) NOT NULL," +
						"  PRIMARY KEY (id)," +
						"  INDEX (hash)" +
						")";
				break;
			}
			case 2 : {
				t = REPORT_TABLE;
				q = "CREATE TABLE " + t + " (" +
						"  id int(6) NOT NULL AUTO_INCREMENT," +
						"  url text NOT NULL," +
						"  msg text NOT NULL," +
						"  type text NOT NULL," +
						"  dataType text NOT NULL," +
						"  PRIMARY KEY (id)" +
						")";
				break;
			}
		}
		db.createTable( q, true, t );
	}

	public static <T> void Pl( T... str ) {
		for ( T x : str ) {
			System.out.print( x + ", " );
		}
		System.out.println();
		System.out.flush();
	}

	public static <T> void Pl( T str ) {
		System.out.println( str );
		System.out.flush();
	}
}

