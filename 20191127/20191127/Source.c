public static String replaceSpace(String iniString, int length) {
	char str[] = iniString.toCharArray();
	char[] strR = new char[str.length + str.length * 3];
	String s = "";
	for (int i = 0; i<str.length; i++){
		if (str[i] == ' '){
			s += "%20";
		}
		else{
			s += str[i];
		}
	}
	return s;
}