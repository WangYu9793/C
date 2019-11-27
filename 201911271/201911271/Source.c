class Transform {
public:
	vector<vector<int> > transformImage(vector<vector<int> > mat, int n) {
		// write code here
		//��һ�л������һ��
		//���һ�л�����һ��
		vector<vector<int> > array(n); //���mһ��������
		//��ʼ��һ��m*n�Ķ�ά����
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