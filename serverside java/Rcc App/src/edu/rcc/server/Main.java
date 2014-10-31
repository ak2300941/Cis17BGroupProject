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
	private static final String NEW_HEADER_TABLE = TABLE_PREPEND + "news_header";

	public static void main( String[] args ) {
//		Pl( Security.sha1( "michael" ) );
//		try{
//			Database db = new Database( DB_FILE );
//			Pl( db.checkTableExists( "news_header" ) );
//		} catch ( Exception e ){
//			e.printStackTrace();
//		}
		try {
			scalpNewsHeaders();
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
	private static void scalpNewsHeaders() throws IOException, SQLException {
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
		Database db = new Database( DB_FILE );
		makeTables( db, 0 );
		Connection conn = db.getConnection();
		ResultSet res = null;

		for ( int i = 0; i < newsList.size(); i++ ) {
			Statement state = conn.createStatement();
			res = state.executeQuery( "SELECT id FROM " + NEW_HEADER_TABLE + " WHERE hash=\"" + Database.escape( newsList.get( i ).getHash() ) + "\"" );

			if ( res.next() ) {
				Pl( "Already there (" + newsList.get( i ).getHash() + ")" );
			} else {
				String query = "INSERT INTO " + NEW_HEADER_TABLE + "( newsTitle, newsLink, imageLink, hash) VALUES(" + newsList.get( i ).toInsertString() + ")";
				state.executeUpdate( query );
			}
			state.close();
			res.close();
		}
		conn.close();
	}

	//TODO is this the best way to do this there is a lot of html that can change in here
	private static void scalpNewsArticle() throws IOException {

	}

	private static void makeTables( Database db, int id ){
		String q = "";
		String t = "";
		switch ( id ) {
			case 0 : {
				t = NEW_HEADER_TABLE;
				q = "CREATE TABLE " + t + " (" +
						"  id int(4) NOT NULL AUTO_INCREMENT," +
						"  newsTitle text NOT NULL," +
						"  newsLink text NOT NULL," +
						"  imageLink text NOT NULL," +
						"  hash varchar(40) NOT NULL," +
						"  PRIMARY KEY (id)" +
						")";
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

