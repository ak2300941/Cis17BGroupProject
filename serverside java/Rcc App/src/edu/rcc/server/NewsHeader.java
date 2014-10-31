package edu.rcc.server;

/**
 * Created By: Michael Risher
 * Date: 10/27/14
 * Time: 4:06 PM
 */
public class NewsHeader {
	private String title;
	private String link;
	private String img;
	private String hash;

	/**
	 * Create new news header
	 *
	 * @param title
	 * @param link
	 * @param img
	 */
	public NewsHeader( String title, String link, String img ) {
		this.title = title;
		this.link = link;
		this.img = img;
		this.hash = Security.sha1( link );
	}

	public String getTitle() {
		return title;
	}

	public void setTitle( String title ) {
		this.title = title;
	}

	public String getLink() {
		return link;
	}

	public void setLink( String link ) {
		this.link = link;
	}

	public String getImg() {
		return img;
	}

	public void setImg( String img ) {
		this.img = img;
	}

	public String getHash() {
		return hash;
	}

	public void setHash( String hash ) {
		this.hash = hash;
	}

	public String toString() {
		String res = getTitle() + ", " + getLink() + ", " + getImg() + ", " + getHash();
		return res;
	}

	public String toInsertString() {
		String res = "\"" + Database.escape( getTitle() ) + "\", \"" + Database.escape( getLink() ) + "\", \"" + Database.escape( getImg() ) + "\", \"" + Database.escape( getHash() ) + "\"";
		return res;
	}
}
