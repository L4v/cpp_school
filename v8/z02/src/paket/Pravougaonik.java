package paket;

public class Pravougaonik {
	private double a, b;
	
	public Pravougaonik(double a, double b){
		this.a = a;
		this.b = b;
	}
	
	public Pravougaonik(Pravougaonik pr){
		pr.a = a;
		pr.b = b;
	}
	
	public double getA() { return this.a; }
	public double getB() { return this.b; }
	public double getO() { return 2*this.a + 2*this.b; }
	public double getP() { return this.a*this.b; }
	
	public void setA(double a) { this.a = a;}
	public void setB(double b) { this.b = b;}
}
