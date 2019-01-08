package hashmap_print;

import java.util.HashMap;

public class Hasher {

	private HashMap<Integer, Character> h1 = new HashMap<Integer, Character>(),
			h2 = new HashMap<Integer, Character>();
	
	public Hasher() {
		for(int i = 0; i < 16; i ++) {
			h1.put(i, (char)(i + 65));
			h2.put(i + 1, (char)(i+97));
		}
	}

	@Override
	public String toString() {
		return "Hasher\n[h1=" + h1 + ",\nh2=" + h2 + "]";
	}
	
}
