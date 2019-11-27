 void bool is_win(const vector<vector<int>>& vv)
{
	int row = vv.size();
	for (int i = 0; i < row; i++)
	{
		int sum_row = 0;
		int sum_cow = 0;
		for (int j = 0; j < row; j++)
		{
			sum_row += vv[i][j];
			sum_cow += vv[j][i];
		}
		if (sum_row == row)
		{
			return true;
		}
		if (sum_cow == row)
		{
			return true;
		}
	}
	int first = 0;
	int second = 0;
	for (int i = 0; i < row; i++)
	{
		first += vv[i][i];
		second += vv[i][row - 1 - i];
	}
	if (first == row)
	{
		return true;
	}
	if (second == row)
	{
		return true;
	}
	return false;
}
