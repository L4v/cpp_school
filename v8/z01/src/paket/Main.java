package paket;
import paket.Pravougaonik;



public class Main {
	
	private static Pravougaonik p1 = new Pravougaonik(10, 20);
	private static Pravougaonik p2 = new Pravougaonik(20, 30);
	private static Pravougaonik p3 = new Pravougaonik(p2);
	
	public static void main(String[] args) {
		System.out.println("Prvi pravougaonik: \nObim: " + p1.getO() + "\nPovrsina: " + p1.getP());
		p1.setA(300);
		System.out.println("Prvi pravougaonik: \nObim: " + p1.getO() + "\nPovrsina: " + p1.getP());
	}
			
	
}
