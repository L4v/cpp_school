package z021;

import java.util.ArrayList;

public class Ucionica {
	private ArrayList<Student> studenti = new ArrayList<Student>();
	private int kapacitet = 5;
	
	public boolean addStudent(Student st) {
		if(studenti.size() < kapacitet)
			return studenti.add(st);
		else
			return false;
	}
	
	public void remStudent(int i) {
		studenti.remove(i);
	}
	
	public void isprazni() {
		studenti.clear();
	}

	@Override
	public String toString() {
		return "Ucionica [studenti=\n" + studenti + ", kapacitet=" + kapacitet + "]";
	}
	
	
}
