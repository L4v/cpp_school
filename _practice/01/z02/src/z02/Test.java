package z02;

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
	}

}
