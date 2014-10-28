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

    public static void main( String[] args ) {
        try {
            scalpNewsHeaders();
        } catch ( IOException e ) {
            e.printStackTrace();
        } catch ( SQLException e ){
            e.printStackTrace();
        }
    }

    /**
     * Scalp the rcc news and add it to the database
     * bugs to look forward to how to order?
     *
     * @throws IOException
     */
    public static void scalpNewsHeaders() throws IOException, SQLException {
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
        Connection conn = db.getConnection();
        ResultSet res = null;

        for ( int i = 0; i < newsList.size(); i++ ) {
            Statement state = conn.createStatement();
            res = state.executeQuery( "SELECT id FROM news_header WHERE newsLink=\"" + Database.escape( newsList.get( i ).getLink() ) + "\"" );
            if ( res.wasNull() ) {
                String query = "INSERT INTO news_header( newsTitle, newsLink, imageLink) VALUES(" + newsList.get( i ).toInsertString() + ")";
                state.executeUpdate( query );
            } else {
                Pl( "Already there (" + newsList.get( i ).getLink() + ")" );
            }
            state.close();
            res.close();
        }
        conn.close();
    }

    //TODO is this the best way to do this there is a lot of html that can change in here
    public static void scalpNewsArticle() throws IOException {

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

