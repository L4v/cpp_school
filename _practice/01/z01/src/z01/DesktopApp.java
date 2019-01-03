package z01;

/*
 * DesktopApp klasa
 */
public class DesktopApp extends Application {
	
	//Polja
	private Computer minSysReq, optimumSysReq;
	public static int desktopCount = 0;
	
	/*
	 * Konstrutkor bez parametara
	 */
	public DesktopApp() {
		super();
		super.language = "Java";
		this.minSysReq = new Computer();
		this.optimumSysReq = new Computer();
		desktopCount ++;
	}

	/*
	 * Konstruktor sa parametrima
	 */
	public DesktopApp(Computer minSysReq, Computer optimumSysReq, String language, double sizeMB) {
		super();
		super.language = language;
		super.sizeMB = sizeMB;
		this.minSysReq = minSysReq;
		this.optimumSysReq = optimumSysReq;
		desktopCount ++;
	}

	/*
	 * Konstruktor kopije
	 */
	public DesktopApp(DesktopApp da) {
		super();
		super.language = da.language;
		super.sizeMB = da.sizeMB;
		this.minSysReq = da.minSysReq;
		this.optimumSysReq = da.optimumSysReq;
		desktopCount ++;
	}
	
	/*
	 * Ispis broja instanci
	 */
	@Override
	public int getCount() {
		return desktopCount;
	}

	/*
	 * toString za ispis
	 */
	@Override
	public String toString() {
		return "DesktopApp [minSysReq=" + minSysReq + ", optimumSysReq=" + optimumSysReq + ", language=" + language
				+ ", author=" + author + ", sizeMB=" + sizeMB + "]";
	}
}
