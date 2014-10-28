package edu.rcc.server;

import java.io.FileInputStream;
import java.io.IOException;
import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;
import java.util.Properties;
import java.util.logging.Level;
import java.util.logging.Logger;

/**
 * Created By: Michael Risher
 * Date: 10/27/14
 * Time: 3:05 PM
 */
public class Database {
    private final String MODE = "local";
    private String url;
    private String user;
    private String password;

    /**
     * Create Database by prop file
     * @param fileIn
     */
    public Database( String fileIn ){
        try{
            Properties props = readProps( fileIn );
            this.url = props.getProperty( MODE + ".url");
            this.user = props.getProperty( MODE + ".user");
            this.password = props.getProperty( MODE + ".password");
        } catch ( IOException e  ){
            e.printStackTrace();
        }
    }

    /**
     * Create Database by passing credentials
     * @param url
     * @param user
     * @param password
     */
    public Database( String url, String user, String password ){
        this.url = url;
        this.user = user;
        this.password = password;
    }

    /**
     * Read database credentials from file
     * @param file
     * @return Properties
     * @throws IOException
     */
    public Properties readProps( String file ) throws IOException {
        Properties props = new Properties();
        FileInputStream in = new FileInputStream( file );
        props.load( in );
        in.close();
        return props;
    }

    /**
     * get database connection
     * @return Connection
     */
    public Connection getConnection(){
        try{
            return DriverManager.getConnection( url, user, password );
        } catch ( SQLException e ){
            Logger log = Logger.getLogger( Database.class.getName() );
            log.log( Level.SEVERE, e.getMessage(), e );
            return null;
        }
    }

    /**
     * Replaces the following
     * ' = @AP@
     * " = @QU@
     * @param in
     * @return String
     */
    public static String escape( String in ){
        String out = in;
        out = out.replaceAll( "\'", "@AP@" );
        out = out.replaceAll( "\"", "@QU@" );

        return out;
    }

    public static String unescape( String in ){
        String out = in;
        out = out.replaceAll( "@AP@", "\'" );
        out = out.replaceAll( "@QU@", "\"" );

        return out;
    }

    public String getUrl() {
        return url;
    }

    public void setUrl( String url ) {
        this.url = url;
    }

    public String getUser() {
        return user;
    }

    public void setUser( String user ) {
        this.user = user;
    }

    public String getPassword() {
        return password;
    }

    public void setPassword( String password ) {
        this.password = password;
    }
}
