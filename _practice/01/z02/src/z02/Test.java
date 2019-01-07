package z02;

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
 * Glavna test klasa
 * @author Jovan Ivosevic Ra30/17
 *
 */
public class Test {

	public static CheckBox cb1, cb2, cb3;
	public static Label l1, l2, l3;
	public static Panel p1, p2, p3;
	/**
	 * Glavna main metoda za testiranje
	 * @param args ulazni argumenti programa
	 */
	public static void main(String args[]) {
		System.out.println("Testiranje konstruktora...");
		// CheckBox
		cb1 = new CheckBox();
		cb2 = new CheckBox(10, 10, true);
		cb3 = new CheckBox(20, 16, false);
		
		// Label
		l1 = new Label();
		l2 = new Label(10, 30, "Lorem Ipsum");
		l3 = new Label(30, 42, "random tekst");
		
		// Panel
		p1 = new Panel();
		p2 = new Panel();
		p2.setCapacity(30);
		
		System.out.println("Testiranje dodavanja/uklanjanje u/iz panelu/e...");
		System.out.println(p1.addComponent(cb1) == true ? "Uspesno dodato" : "Neuspesno dodato");
		System.out.println(p1.addComponent(cb2) == true ? "Uspesno dodato" : "Neuspesno dodato");
		System.out.println(p1.addComponent(l1) == true ? "Uspesno dodato" : "Neuspesno dodato");
		System.out.println(p1.removeComponent(1) == true ? "Uspesno uklonjeno" : "Neuspesno uklonjeno");
		
		System.out.println(p2.addComponent(cb1) == true ? "Uspesno dodato" : "Neuspesno dodato");
		System.out.println(p2.addComponent(cb3) == true ? "Uspesno dodato" : "Neuspesno dodato");
		System.out.println(p2.addComponent(l2) == true ? "Uspesno dodato" : "Neuspesno dodato");

		p3 = new Panel(p2);
		
		// Test ispisa
		System.out.println("Testiranje ispisa pojedinacnih komponenata...");
		cb1.printComponent();
		cb2.printComponent();
		cb3.printComponent();
		
		l1.printComponent();
		l2.printComponent();
		l3.printComponent();
		
		System.out.println("Testiranje ispisa panela...");
		p1.printComponent();
		p2.printComponent();
		p3.printComponent();
		
		System.out.println("Testiranje upisa u txt file...");
		saveAsText("src/z02/cb2.txt", cb2);
		saveAsText("src/z02/p3.txt", p3);
		
		System.out.println("Testiranje upisa u bin file...");
		saveAsBin("src/z02/cb1.bin", cb1);
		saveAsBin("src/z02/p2.bin", p2);
		
		System.out.println("Testiranje citanja iz txt file...");
		System.out.println(loadFromText("src/z02/p3.txt"));
		
		System.out.println("Testiranje citanja iz bin file...");
		Panel test = (Panel)loadFromBin("src/z02/p2.bin");
		System.out.println(test != null ? test.toString() : "Ucitano je NULL");
	}
	
	/**
	 * Cuva Component objekat u tekstualni fajl
	 * @param path Predstavlja relativnu putanju fajla u projektu
	 * @param app Predstavlja objekat koji ce se sacuvati
	 */
	public static void saveAsText(String path, Component app) {
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
	public static void saveMultipleAsText(String path, ArrayList<Component> components) {
		BufferedWriter out = null;
		try {
			out = new BufferedWriter(new FileWriter(path));
			
			for(Component component : components) {
				out.write(component.toString() + "\n"); // Upisuje objekat u vidu stringa u novi red
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
	public static void saveAsBin(String path, Component component) {
		ObjectOutputStream out = null;
		
		try {
			out = new ObjectOutputStream(new BufferedOutputStream(new FileOutputStream((path))));
			out.writeObject(component); // Pretvara objekat u niz bajtova i upisuje u bin fajl
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
		ArrayList<String> compInfo = new ArrayList<String>(); // Ovde se cuvaju redovi fajla
		String line; // Ovo cuva pojedinacan red fajla
		BufferedReader in = null;
		try {
			in = new BufferedReader(new FileReader(path)); // Pokusava otvoriti fajl
			
			while((line = in.readLine()) != null) // Dokle god ne dodje do kraja fajla, ucitava
				compInfo.add(line);					// red u line
			
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
		
		return compInfo;
	}
	
	/**
	 * Ucitava objekat iz binarnog fajla
	 * @param path relativna putanja fajla u projektu
	 * @return povratni objekat, ako nije uspelo ucitavanje, vraca null
	 */
	public static Component loadFromBin(String path) {
		Component component = null;
		ObjectInputStream in = null;
		
		try {
			in = new ObjectInputStream(new BufferedInputStream(new FileInputStream(path)));
			component = (Component)in.readObject(); // Cast-uje ucitani objekat
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
		return component;
	}

}
