package z02;

/**
 * Label klasa predstavlja polje sa tekstom u GUI
 * @author Jovan Ivosevic RA30/17
 *
 */
public class Label extends Component{

	private String text;
	public static String typeName = "Label";
	
	/**
	 * Konstruktor bez parametara, inicijalizuje (X, Y) na 0 i text na ""
	 */
	public Label() {
		super.X = 0;
		super.Y = 0;
		this.text = new String("");
	}
	
	/**
	 * Konstruktor sa parametrima
	 * @param X X koordinata
	 * @param Y Y koordinata
	 * @param text tekst unutar Label
	 */
	public Label(double X, double Y, String text) {
		super.X = X;
		super.Y = Y;
		this.text = new String(text);
	}
	
	@Override
	public double getX() {
		return super.getX();
	}

	@Override
	public double getY() {
		return super.getY();
	}

	/**
	 * Povratna metoda za text u Label
	 * @return text u Label
	 */
	public String getText() {
		return this.text;
	}

	/**
	 * Metoda koja postavlja vrednost teksta u Label
	 * @param text tekst za Label
	 */
	public void setText(String text) {
		this.text = text;
	}

	@Override
	public void printComponent() {
		super.printComponent();
		System.out.println("Text: " + this.text);
	}
	
	@Override
	public String getTypeName() {
		return typeName;
	}

}
