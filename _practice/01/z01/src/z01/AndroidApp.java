package z01;

/**
 * AndroidApp klasa
 */
public class AndroidApp extends Application{
	
	// Polja
	private double minVersion, targetVersion;
	public static int androidCount = 0;
	
	/**
	 * Konstruktor bez parametara
	 */
	public AndroidApp() {
		super();
		super.language = "Java";
		this.minVersion = 1.0;
		this.targetVersion = 1.0;
		androidCount ++;
	}

	/**
	 * Konstrutkor sa parametrima
	 */
	public AndroidApp(double minVersion, double targetVersion, double size) {
		super();
		super.sizeMB = size;
		super.language = "Java";
		this.minVersion = minVersion;
		this.targetVersion = targetVersion;
		androidCount ++;
	}
	 
	public AndroidApp(AndroidApp aa) {
		super();
		super.sizeMB = aa.sizeMB;
		super.language = aa.language;
		this.minVersion = aa.minVersion;
		this.targetVersion = aa.targetVersion;
		androidCount ++;
	}

	/**
	 * Ispis broja instanci
	 */
	@Override
	public int getCount() {
		return androidCount;
	}

	/**
	 * toString za ispis
	 */
	@Override
	public String toString() {
		return "AndroidApp [minVersion=" + minVersion + ", targetVersion=" + targetVersion + ", language=" + language
				+ ", author=" + author + ", sizeMB=" + sizeMB + "]";
	}
	
}
