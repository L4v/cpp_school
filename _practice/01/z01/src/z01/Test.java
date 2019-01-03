package z01;
/*
 * Ovo je prepisan zadatak iz C++ -> Java
 * v06/z02
 * Author: Jovan Ivosevic
 */

/*
 * Main klasa
 */
public class Test {

	/*
	 * Main metoda za testiranje
	 * Destrukcija objekata necemo testirati jer Java je "garbage collected language" i
	 * objekte cuva na heap-u, te nismo sto posto sigurni kada se koji objekat 
	 * unistava
	 * 
	 * Za razliku od C++, static polja su odmah definisana unutar svojih klasa i
	 * getteri ne vracaju "const" jer Java to nema posto drugacije funkcionise
	 * od C++, vise ovde:
	 * https://docs.oracle.com/javase/tutorial/essential/concurrency/imstrat.html
	 * 
	 * << operator je ovde toString
	 *  
	 */
	public static Application a1, a2, a3, a4;
	public static AndroidApp aa1, aa2, aa3, aa4;
	public static DesktopApp da1, da2, da3, da4;
	public static Computer c1, c2, c3;
	
	public static void main(String[] args) {
		c1 = new Computer();
		c2 = new Computer(256.5, 8, "2080Ti", "Arch");
		c3 = new Computer(c2);
		
		a1 = new Application();
		a2 = new Application("C", "Petar Petrovic", 123.2);
		a3 = new Application("RUST", "Joe Smarty", 12.3);
		a4 = new Application(a3);
		
		aa1 = new AndroidApp();
		aa2 = new AndroidApp(40.2, 42, 12);
		aa3 = new AndroidApp(1, 42.314, 3.14);
		aa4 = new AndroidApp(aa3);
		
		da1 = new DesktopApp();
		da2 = new DesktopApp(c1, c2, "C", 100);
		da3 = new DesktopApp(c1, c3, "JAVA", 123);
		da4 = new DesktopApp(da3);

		System.out.println("Broj aplikacija: " + Application.appCount);
		System.out.println("Broj android aplikacija: " + AndroidApp.androidCount);
		System.out.println("Broj desktop aplikacija: " + DesktopApp.desktopCount);

		System.out.println("Ispis kompjutera:");
		System.out.println(c1);
		System.out.println(c2);
		System.out.println(c3);
		
		System.out.println("Ispis aplikacija:");
		System.out.println(a1);
		System.out.println(a2);
		System.out.println(a3);
		System.out.println(a4);

		System.out.println("Ispis android aplikacija:");
		System.out.println(aa1);
		System.out.println(aa2);
		System.out.println(aa3);
		System.out.println(aa4);

		System.out.println("Ispis desktop aplikacija:");
		System.out.println(da1);
		System.out.println(da2);
		System.out.println(da3);
		System.out.println(da4);
	}

}
