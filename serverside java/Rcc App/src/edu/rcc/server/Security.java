package edu.rcc.server;

import java.io.FileInputStream;
import java.io.IOException;
import java.security.MessageDigest;
import java.security.NoSuchAlgorithmException;

/**
 * Created by: Michael Risher
 * Date: 10/31/14
 * Time: 11:06 AM
 */
public class Security {
	public static String sha1( String str ){
		try {
			MessageDigest mDigest = MessageDigest.getInstance( "SHA1" );
			byte[] result = mDigest.digest( str.getBytes() );
			StringBuffer sb = new StringBuffer();
			for (int i = 0; i < result.length; i++){
				sb.append( Integer.toString( ( result[i] & 0xff ) + 0x100, 16 ).substring( 1 ) );
			}
			return sb.toString();
		} catch ( NoSuchAlgorithmException e ) {
			e.printStackTrace();
			return "";
		}
	}

	public static boolean verifyChecksum( String file, String testChecksum ) {
		try {
			MessageDigest sha1 = MessageDigest.getInstance( "SHA1" );
			FileInputStream fis = new FileInputStream( file );

			byte[] data = new byte[1024];
			int read = 0;
			while ( ( read = fis.read( data ) ) != -1 ) {
				sha1.update( data, 0, read );
			}
			;
			byte[] hashBytes = sha1.digest();

			StringBuffer sb = new StringBuffer();
			for ( int i = 0; i < hashBytes.length; i++ ) {
				sb.append( Integer.toString( ( hashBytes[i] & 0xff ) + 0x100, 16 ).substring( 1 ) );
			}

			String fileHash = sb.toString();

			return fileHash.equals( testChecksum );
		} catch ( NoSuchAlgorithmException | IOException e ) {
			e.printStackTrace();
			return false;
		}
	}
}
