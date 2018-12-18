package z01;

public class Test {

	public static XCDStorageMap mapa;
	public static XCDStorage arhiva;
	public static CDDisk d1, d2, d3, d4;
	
	public static void main(String[] args) {
		mapa = new XCDStorageMap();
		arhiva = new XCDStorage();
		d1 = new CDDisk();
		d2 = new CDDisk(1, "Spooky", "SPoOkStEr");
		d3 = new CDDisk(0, "Spooky2", "SPOOKSTER");
		d4 = new CDDisk(42, "EVERYTHING", "EVERYONE");

		System.out.println(d1);
		System.out.println(d2);
		System.out.println(d3);
		System.out.println(d4);
		
		arhiva.addCD(d1);
		arhiva.addCD(d2);
		arhiva.addCD(d3);
		arhiva.addCD(d4);
		System.out.println(arhiva);

		mapa.addCD(d1);
		mapa.addCD(d2);
		mapa.addCD(d3);
		mapa.addCD(d4);
		System.out.println(mapa);
		
	}

}
