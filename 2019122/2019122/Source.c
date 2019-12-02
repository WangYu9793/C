class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb) {
		// write code here
		int i, j, k;
		for (i = 0; i < lena; i++){
			k = i;
			for (j = 0; j < lenb; j++, k++)
				if (A[k] != B[j])
					break;
			if (j == lenb)
				return i;
		}
		return -1;
	}
};