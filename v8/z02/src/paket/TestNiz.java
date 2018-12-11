package paket;
import paket.Pravougaonik;

public class TestNiz {
	public static int[] celi;
	public static double[] realni;
	public static Pravougaonik[] pravougaonici = new Pravougaonik[4];
	
	public static void main(String[] args) {

		pravougaonici[0] = new Pravougaonik(10, 20);
		pravougaonici[1] = new Pravougaonik(20, 20);
		pravougaonici[2] = new Pravougaonik(30, 20);
		pravougaonici[3] = new Pravougaonik(100, 200);
		
		System.out.println("Pravougaonici (povrsine): ");
		for(Pravougaonik p : pravougaonici){
			System.out.println(p.getP());
		}
		System.out.println("Najveca povrsina: " + najveci(pravougaonici).getP());
	}

	public static Pravougaonik najveci(Pravougaonik[] pravougaonici){
		Pravougaonik najveci = pravougaonici[0];
		for(Pravougaonik p : pravougaonici){
			if(p.getP() > najveci.getP())
				najveci = p;
		}
		
		
		return najveci;
	}
	
}
