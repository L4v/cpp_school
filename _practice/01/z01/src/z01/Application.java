package z01;

/*
 * Application klasa
 */
public class Application {
	
	// Polja
	protected String language, author;
	protected double sizeMB;
	public static int appCount = 0;
	
	/*
	 * Prazan konstruktor
	 */
	public Application() {
		this.language = "ASM";
		this.author = "Joe The Tech";
		this.sizeMB = 0;
		appCount ++;
	}

	/*
	 * Konstruktor sa parametrima
	 */
	public Application(String language, String author, double sizeMB) {
		this.language = language;
		this.author = author;
		this.sizeMB = sizeMB;
		appCount ++;
	}
	
	/*
	 * Konstruktor kopije
	 */
	public Application(Application a) {
		this.language = a.language;
		this.author = a.author;
		this.sizeMB = a.sizeMB;
		appCount ++;
	}

	/*
	 * Ispis broja instanci
	 */
	public int getCount() {
		return appCount;
	}
	
	/*
	 * toString za ispis
	 */
	@Override
	public String toString() {
		return "Application [language=" + language + ", author=" + author + ", sizeMB=" + sizeMB + "]";
	}
	
}
