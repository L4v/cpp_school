package z021;

public class Test {
	public static Student st1, st2, st3;
	public static Ucionica uc;
	public static UcionicaMap um;
	public static void main(String args []) {
		st1 = new Student("RA123", "Petar", "Petrovic");
		st2 = new Student("RA23", "Pjotr", "Pjotrovic");
		st3 = new Student("RA3", "Pjetr", "Pjetrovic");
		
		uc = new Ucionica();
		um = new UcionicaMap();

		uc.addStudent(st1);
		uc.addStudent(st2);
		uc.addStudent(st3);
		System.out.println(uc);
		
		um.addStudent(st1);
		um.addStudent(st2);
		um.addStudent(st3);
		System.out.println(um);
		
	}
}
