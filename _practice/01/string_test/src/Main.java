
import java.io.BufferedReader;
import java.io.FileReader;
import java.util.ArrayList;

public class Main {
	public static void main(String args[]) {
		for (String s : load("src/test.txt"))
			System.out.println(s);
	}

	public static ArrayList<String> load(String path) {
		ArrayList<String> input = new ArrayList<String>();
		String line, another = new String("");
		BufferedReader in = null;
		try {
			in = new BufferedReader(new FileReader(path));
			while ((line = in.readLine()) != null) {
				//System.out.println(line);
				if(line.isEmpty())
					continue;
				input.add(line);
			}
		} catch (Exception e) {
			e.printStackTrace();
		} finally {
			if (in != null)
				try {
					in.close();
				} catch (Exception e) {
					e.printStackTrace();
				}
		}
		System.out.println(another);
		return input;
	}
}
