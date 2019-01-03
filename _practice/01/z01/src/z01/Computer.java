package z01;

/*
 * Computer klasa
 */
public class Computer {
	
	// Polja
	private double hddGB, ramGB;
	private String gCard, os;
	
	/*
	 * Prazan konstruktor
	 */
	public Computer() {
		this.hddGB = 0;
		this.ramGB = 0;
		this.gCard = "VOODOO";
		this.os = "BSD";
	}
	
	/*
	 * Konstruktor sa parametrima
	 */
	public Computer(double hddGB, double ramGB, String gCard, String os) {
		this.hddGB = hddGB;
		this.ramGB = ramGB;
		this.gCard = gCard;
		this.os = os;
	}
	
	/*
	 * Konstruktor kopije
	 */
	public Computer(Computer c) {
		this.hddGB = c.hddGB;
		this.ramGB = c.hddGB;
		this.gCard = c.gCard;
		this.os = c.os;
	}

	/*
	 * toString kao operator ispisa
	 */
	@Override
	public String toString() {
		return "Computer [hddGB=" + hddGB + ", ramGB=" + ramGB + ", gCard=" + gCard + ", os=" + os + "]";
	}
}
