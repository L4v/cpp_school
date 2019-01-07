package z02;

/**
 * Apstraktna klasa za Component
 * @author Jovan Ivosevic RA30/17
 *
 */
public abstract class Component {
	protected double X, Y;
	
	/**
	 * Vraca X koordinatu Component-a
	 * @return X koordinata
	 */
	public double getX() {
		return this.X;
	}

	/**
	 * Vraca Y koordinatu Component-a
	 * @return Y koordinata
	 */
	public double getY() {
		return this.Y;
	}
	
	// U Javi, sve non-static, non-private i metode koje nemaju final su virtualne
	/**
	 * Ispisuje (X, Y) koordinate Component-a
	 */
	public void printComponent() {
		System.out.println("(X, Y): (" + X + ", " + Y + ")");
	}
	
	/**
	 * Apstraktna metoda koja vraca naziv tipa Component-a
	 * @return typeName Component-a
	 */
	public abstract String getTypeName();
	
}
