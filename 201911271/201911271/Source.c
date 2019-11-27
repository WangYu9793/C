class Transform {
public:
	vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
		// write code here
		//第一行换到最后一列
		//最后一行换到第一列
		vector<vector<int> > array(n); //这个m一定不能少
		//初始化一个m*n的二维数组
		for (int i = 0; i<n; i++)
		{
			array[i].resize(n);
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				int m = mat[i][j];
				for (int jj = n - 1 - i; jj >= 0; jj--)
				{
					for (int ii = j; ii < n; ii++)
					{
						array[ii][jj] = m;
					}
				}
			}
		}
		return array;
	}
}