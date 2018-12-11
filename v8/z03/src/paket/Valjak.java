package paket;
import paket.Krug;
import paket.Pravougaonik;

public class Valjak {
	private Krug krug;
	private Pravougaonik pr;
	
	public Valjak(Krug k, Pravougaonik p){
		this.krug = k;
		this.pr = p;
	}
	
	public Valjak(Valjak v){
		this.krug = v.krug;
		this.pr = v.pr;
	}
	
	public double getR() { return this.krug.getR(); }
	public double getH() { return this.pr.getB(); }
	public double getV() { return this.getH() * this.krug.getPovrsina(); }
	public double getP() { return this.krug.getObim() * this.getH() + 2 * krug.getPovrsina(); }
	
}
