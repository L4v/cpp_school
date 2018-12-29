package z021;

import java.util.HashMap;

public class UcionicaMap {
	private HashMap<String, Student> mapa = new HashMap<String, Student>();
	private int kapacitet = 5;
	
	public boolean addStudent(Student st) {
		if(mapa.size() < kapacitet) {
			mapa.put(st.getIndeks(), st);
			return true;
		}
		return false;
	}
	
	public void removeStudent(int i) {
		mapa.remove(i);
	}
	
	public void clear() {
		mapa.clear();
	}

	@Override
	public String toString() {
		return "UcionicaMap [mapa=\n" + mapa + ", kapacitet=" + kapacitet + "]";
	}
	
	
	
}
