public class Printer {
	public int[] printMatrix(int[][] mat, int n, int m) {
		int b[] = new int[n*m];
		int x = 0;
		for (int i = 0; i<n; i++){
			if ((i % 2) == 0){
				for (int j = 0; j<m; j++){
					b[x] = mat[i][j];
					x = x + 1;
				}
			}
			else{
				for (int j = m - 1; j >= 0; j--){
					b[x] = mat[i][j];
					x = x + 1;
				}
			}

		}
		return b;
	}
}