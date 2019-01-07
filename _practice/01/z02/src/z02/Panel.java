package z02;

import java.util.ArrayList;

/**
 * Klasa Panel predstavlja GUI objekat koji sadrzi druge GUI objekte
 * 
 * @author Jovan Ivosevic RA30/17
 *
 */
public class Panel extends Component {

	private int capacity;
	private ArrayList<Component> components = new ArrayList<Component>();
	private String typeName = "Panel";

	/**
	 * Konstruktor bez parametara, postavlja kapacitet na 10
	 */
	public Panel() {
		super.X = 0;
		super.Y = 0;
		this.capacity = 10;
	}

	public Panel(Panel p) {
		super.X = p.X;
		super.Y = p.Y;
		this.capacity = p.capacity;
		this.components = p.components;
	}

	/**
	 * Pokusa ukloniti komponentu sa prosledjenog indeksa, ako uspe, vraca true, inace false
	 * @param i indeks sa kojeg se uklanja komponenta
	 * @return true ako ukloni komponentu, inace false
	 */
	public boolean removeComponent(int i) {
		if(components.remove(i) != null)
			return true;
		
		return false;
	}
	
	/**
	 * Dodaje komponentu u Panel ako kapacitet dozvoljava i vraca true, inace false
	 * @param c komponenta za dodavanje
	 * @return true ako uspesno, inace false
	 */
	public boolean addComponent(Component c) {
		if(components.size() < this.capacity) 
			return components.add(c);
		
		return false;
	}
	
	/**
	 * Vraca kapacitet Panel
	 * @return kapacitet
	 */
	public int getCapacity() {
		return this.capacity;
	}
	
	/**
	 * Postavlja kapacitet Panel
	 * @param cap zeljeni kapacitet
	 */
	public void setCapacity(int cap) {
		this.capacity = cap;
	}
	
	@Override
	public double getX() {
		return super.getX();
	}

	@Override
	public double getY() {
		return super.getY();
	}

	@Override
	public void printComponent() {
		super.printComponent();
		System.out.println("Sadrzaj panele: ");
		for (Component c : components) {
			System.out.println(c.getTypeName());
			c.printComponent();
		}
	}

	@Override
	public String getTypeName() {
		return typeName;
	}

	@Override
	public String toString() {
		return "Panel [capacity=" + capacity + ", components=" + components + ", typeName=" + typeName + ", X=" + X
				+ ", Y=" + Y + "]";
	}

}
