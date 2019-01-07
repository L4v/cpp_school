package z01;
/**
 * Ovo je prepisan zadatak iz C++ -> Java
 * v06/z02
 * @author Jovan Ivosevic
 */

import java.io.BufferedInputStream;
import java.io.BufferedOutputStream;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.ObjectInputStream;
import java.io.ObjectOutputStream;
import java.util.ArrayList;

/**
 * Main klasa
 */
public class Test {

	public static Application a1, a2, a3, a4;
	public static AndroidApp aa1, aa2, aa3, aa4;
	public static DesktopApp da1, da2, da3, da4;
	public static Computer c1, c2, c3;

	/**
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
		
		System.out.println("Testiranje upisa u txt fajl...");
		saveAsText("src/z01/a2.txt", a2);
		
		System.out.println("Testiranje visestrukog upisa u txt fajl...");
		ArrayList<Application> apps = new ArrayList<Application>();
		apps.add(a2);
		apps.add(aa3);
		apps.add(da2);
		saveMultipleAsText("src/z01/mul.txt", apps);
		
		System.out.println("Testiranje upisa u bin fajl...");
		saveAsBin("src/z01/obj.bin", a2);
		
		System.out.println("Testiranje citanja iz txt fajla...");
		for(String s : loadFromText("src/z01/mul.txt")) 
			System.out.println(s);
		
		System.out.println("Testiranje citanja iz bin fajla...");
		Application loadedApp = loadFromBin("src/z01/obj.bin");
		System.out.println(loadedApp != null ? loadedApp : "Ucitan je NULL");
		
	}
	
	/**
	 * Cuva Application objekat u tekstualni fajl
	 * @param path Predstavlja relativnu putanju fajla u projektu
	 * @param app Predstavlja objekat koji ce se sacuvati
	 */
	public static void saveAsText(String path, Application app) {
		BufferedWriter out = null;
		try {
			// Pokusava otvoriti novi fajl, putanje path
			out = new BufferedWriter(new FileWriter(path));
			
			// Ako uspesno otvori, upisuje u fajl
			out.write(app.toString()); // Upisuje objekat u vidu stringa
		}catch(Exception e) {
			e.printStackTrace();
		}finally {
			if(out != null) { // Ako out nije null, tj ako je otvoren fajl, pokusava ga zatvoriti
				try {
					out.close();
				}catch(Exception e) {
					e.printStackTrace();
				}
			}
		}
	}
	
	/**
	 * Snima vise objekata u jedan fajl
	 * @param path relativna putanja fajla u projektu
	 * @param apps list objekata
	 */
	public static void saveMultipleAsText(String path, ArrayList<Application> apps) {
		BufferedWriter out = null;
		try {
			out = new BufferedWriter(new FileWriter(path));
			
			for(Application app : apps) {
				out.write(app.toString() + "\n"); // Upisuje objekat u vidu stringa u novi red
			}
			
		}catch(Exception e) {
			e.printStackTrace();
		}finally {
			if (out != null) {
				try {
					out.close();
				}catch(Exception e) {
					e.printStackTrace();
				}
			}
		}
	}
	
	/**
	 * Cuva prosledjeni objekat u binarnu datoteku
	 * @param path relativna putanja u projektu
	 * @param app objekat za cuvanje
	 */
	public static void saveAsBin(String path, Application app) {
		ObjectOutputStream out = null;
		
		try {
			out = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream((path))));
			out.writeObject(app); // Pretvara objekat u niz bajtova i upisuje u bin fajl
		} catch (Exception e) {
			e.printStackTrace();
		}finally {
			if(out != null) {
				try {
					out.close();
				}catch(Exception e) {
					e.printStackTrace();
				}
			}
		}
	}
	
	/**
	 * Ucitava viselinijski txt fajl
	 * @param path relativna putanja txt fajla
	 * @return ArrayList stringova
	 */
	public static ArrayList<String> loadFromText(String path) {
		ArrayList<String> appInfo = new ArrayList<String>(); // Ovde se cuvaju redovi fajla
		String line; // Ovo cuva pojedinacan red fajla
		BufferedReader in = null;
		try {
			in = new BufferedReader(new FileReader(path)); // Pokusava otvoriti fajl
			
			while((line = in.readLine()) != null) // Dokle god ne dodje do kraja fajla, ucitava
				appInfo.add(line);					// red u line
			
		}catch(Exception e) {
			e.printStackTrace();
		}finally {
			if (in != null) {
				try {
					in.close();
				}catch(Exception e) {
					e.printStackTrace();
				}
			}
		}
		
		return appInfo;
	}
	
	/**
	 * Ucitava objekat iz binarnog fajla
	 * @param path relativna putanja fajla u projektu
	 * @return povratni objekat, ako nije uspelo ucitavanje, vraca null
	 */
	public static Application loadFromBin(String path) {
		Application app = null;
		ObjectInputStream in = null;
		
		try {
			in = new ObjectInputStream(new BufferedInputStream(new FileInputStream(path)));
			app = (Application)in.readObject(); // Cast-uje ucitani objekat
		}catch(Exception e) {
			e.printStackTrace();
		}finally {
			if (in != null) {
				try {
					in.close();
				}catch(Exception e) {
					e.printStackTrace();
				}
			}
		}
		return app;
	}
	
}
