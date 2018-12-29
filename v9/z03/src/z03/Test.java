package z03;

public class Test {
	public static void main(String args[]) {
		System.out.println(isPalindrom("Ana voli Milovana") == true ? "Jeste" : "Nije");
		System.out.println(isPalindrom("Ana voli Milova  na") == true ? "Jeste" : "Nije");
		System.out.println(isPalindrom("Ana voli Milovana.") == true ? "Jeste" : "Nije");
	}
	
	public static boolean isPalindrom(String str) {
		str = str.toLowerCase();
		str = str.replace(" ", "");
		System.out.println(str);
		for(int i = 0; i < str.length() / 2; i ++) {
			if(str.charAt(i) != str.charAt(str.length() - i  - 1))
				return false;
		}
		
		return true;
	}
	
}
