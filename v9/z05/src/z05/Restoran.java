package z05;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.FileReader;
import java.io.FileWriter;
import java.util.ArrayList;


/*
 * Klasa Restoran
 */
public class Restoran {
	private String naziv = "", adresa = "";
	private ArrayList<Stavka> jelovnik;
	
	
	/*
	 * Konstruktor
	 */
	public Restoran(String naziv, String adresa) {
		this.naziv = naziv;
		this.adresa = adresa;
		this.jelovnik = new ArrayList<Stavka>();
	}
	
	/*
	 * Getteri i setteri
	 */
	public String getNaziv() {
		return naziv;
	}
	public void setNaziv(String naziv) {
		this.naziv = naziv;
	}
	public String getAdresa() {
		return adresa;
	}
	public void setAdresa(String adresa) {
		this.adresa = adresa;
	}
	
	/*
	 * Metoda za ucitavanje iz fajla
	 */
	public void load(String s){
		
		// BufferedReader za ucitavanje
		BufferedReader in = null;
		
		// Privremena Stavka za upis u jelovnik
		Stavka temp = null;
		
		// Privremeni String za pamcenje linije
		String line;
		
		// Lista svih linija
		ArrayList<String> lajne = new ArrayList<String>();
		
		// Pokusava da ucita po liniju iz fajla i sacuva u lajne
		try{
			in = new BufferedReader(new FileReader(s));
			while((line = in.readLine()) != null)
				lajne.add(line);
		}catch(Exception e){
			e.printStackTrace();
		}finally{
			if(in != null){
				try{
					in.close();
				}catch(Exception e){
					e.printStackTrace();
				}
			}
		}
		
		for (String l : lajne) {
			String[] tokens = l.split("\\|");
			temp = new Stavka(tokens[0], Double.parseDouble(tokens[1]));
			if(!this.jelovnik.contains(temp)) {
				this.jelovnik.add(temp);
			}
		}
		
		/* BITNO JE BITI LAGAN !!!
		// "Tokeni", delovi split-ovanog String-a
		String[] tokens;;
		
		// Predstavlja privremenu za listanje kroz lajne, nepotrebno, moglo se
		// iskoristiti line iznad
		String st;
		for (int i = 0; i < lajne.size(); i ++) {
			st = lajne.get(i);
			
			// Prvo trazi rec "Restoran"
			if(st.contains("Restoran")){
				
				// Zatim kada je naslo "Restoran", znaci da posle " karaktera,
				// ce slediti naziv restorana. Trimuju se "
				this.setNaziv(st.substring(st.indexOf("\"")).replace("\"", ""));
			
			// Isto i za rec "Adresa"
			}else if(st.contains("Adresa")){
				this.setAdresa(st.replace("Adresa: ", ""));
				
			// Trazi pocetak jelovnika, oznacen zvezdicama, mogla je samo jedna zvezdica,
			// nije bitno
			}else if(st.contains("******************")){
				
				// Kada je naisao prvi put na zvezdice, ici ce while petljom
				// do sledeceg trenut
				do{
					if(st == "******************")
						continue;
					tokens = st.split(" ");
					double cena = Double.parseDouble(tokens[tokens.length]);
					String naziv = st.substring(0, st.indexOf(tokens[tokens.length]));
					temp = new Stavka(naziv, cena);
					if(!jelovnik.contains(temp))
						jelovnik.add(temp);
				}while((st = lajne.get(i)) != "******************");
				break; // Break-uje iz glavne for petlje
			}
		}// for */
		
		
		
	}
	
	/*
	 * Metoda za upis u fajl
	 */
	public void export(String file) {
		BufferedWriter out = null;
		try {
			// BufferedWriter za ispis
			out = new BufferedWriter(new FileWriter(file));
			
			// Ispisuje gornji deo jelovnika
			out.write("Restoran " + this.getNaziv() + "\nAdresa: " + this.getAdresa() + "\n\nJelovnik\n******************\n");
			
			// Ispisuje sam jelovnik
			for (Stavka stavka : this.jelovnik) {
				out.write(stavka.getNaziv() + " " + stavka.getCena() + "\n");
			}
			out.write("******************\n");
			
		}catch(Exception e) {
			e.printStackTrace();
		} finally {
			if(out != null) {
				try {
					out.close();
				}catch(Exception e) {
					e.printStackTrace();
				}
			}
		}
	}
	
	/*
	 * Metoda za sortiranje jelovnika, sortira pomocu BubbleSort-a
	 */
	public void sortiraj() {
		Stavka s1, s2;
		for(int i = 0; i < jelovnik.size() - 1; i ++) {
			for(int j = 0; j < jelovnik.size() - i - j; j ++) {
				if(jelovnik.get(j).getCena() > jelovnik.get(j + 1).getCena()) {
					s1 = jelovnik.get(j);
					s2 = jelovnik.get(j+1);
					jelovnik.remove(j);
					jelovnik.add(j, s2);
					jelovnik.remove(j+1);
					jelovnik.add(j+1, s1);
				}
			}
		}
	}
	
	
	
}
