class StringPattern {
public:
	int findAppearance(string A, int lena, string B, int lenb) {
		int i = 0;
		int j = 0;
		int res = -1;
		int flag = 1;
		if (A == B)
			return 0;
		if (lenb>lena)
			return -1;

		for (auto c1 : A){
			if (c1 != B[j] && j<lenb){
				j = 0;
				flag = 1;
				if (c1 != B[j]){
					i++;
					continue;
				}
			}
			if (c1 == B[j] && j<lenb){
				j++;
				if (flag == 1)
					res = i;
				i++;
				flag = 0;
			}
			if (j == lenb){
				return res;
			}
		}
		return -1;
	}
};