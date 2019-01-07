package z02;

/**
 * CheckBox klasa koja predstavlja GUI element za cekiranje
 * @author Jovan Ivosevic RA30/17
 *
 */
public class CheckBox extends Component {
	private boolean pressed;
	public static String typeName = "CheckBox";
	
	/**
	 * Konstruktor bez parametara, inicijalizuje (X, Y) na 0 i pressed na false
	 */
	public CheckBox() {
		super.X = 0;
		super.Y = 0;
		this.pressed = false;
	}
	
	/**
	 * Konstruktor sa parametrima
	 * @param X X koordinata
	 * @param Y Y koordinata
	 * @param pressed definise da li je CheckBox pritisnut
	 */
	public CheckBox(double X, double Y, boolean pressed) {
		super.X = X;
		super.Y = Y;
		this.pressed = pressed;
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
		System.out.println("Pressed: " + this.pressed);
	}

	@Override
	public String getTypeName() {
		return typeName;
	}

	@Override
	public String toString() {
		return "CheckBox [pressed=" + pressed + ", X=" + X + ", Y=" + Y + "]";
	}
	

}
