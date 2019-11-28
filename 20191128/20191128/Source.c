struct NODE

{

	int left;

	int right;

	int up;

	int bottom;

	NODE() :left(1), right(1), up(1), bottom(1){}

};

class SubMatrix {

public:

	void count(vector> &num, vector>& mat, int n)

	{

		for (int i = 1; i

		{

			if (mat[0][i] == mat[0][i - 1])

			num[0][i].left = num[0][i - 1].left + 1;

			if (mat[i][0] == mat[i - 1][0])

				num[i][0].up = num[i - 1][0].up + 1;

		}

		for (int i = n - 2; i >= 0; i--)

		{

			if (mat[n - 1][i] == mat[n - 1][i + 1])

				num[n - 1][i].right = num[n - 1][i + 1].right + 1;

			if (mat[i][n - 1] == mat[i + 1][n - 1])

				num[i][n - 1].bottom = num[i + 1][n - 1].bottom + 1;

		}

		for (int i = 1; i

		{

			for (int j = 1; j

			{

				if (mat[i][j] == mat[i - 1][j])

				num[i][j].up = num[i - 1][j].up + 1;

				if (mat[i][j] == mat[i][j - 1])

					num[i][j].left = num[i][j - 1].left + 1;

			}

		}

		for (int i = n - 2; i >= 0; i--)

		{

			for (int j = n - 2; j >= 0; j--)

			{

				if (mat[i][j] == mat[i + 1][j])

					num[i][j].bottom = num[i + 1][j].bottom + 1;

				if (mat[i][j] == mat[i][j + 1])

					num[i][j].right = num[i][j + 1].right + 1;

			}

		}

	}

	int getmax(vector> &num, vector> &mat, int n)

	{

		int res = 1;

		for (int i = 1; i

		{

			for (int j = 1; j

			{

				int cur_min = min(num[i][j].up, num[i][j].left);

				if (cur_min <= res)

					continue;

				int fence = cur_min;

				int nr, nc;

				while (--fence)

				{

					nr = i - fence;

					nc = j - fence;

					if (mat[nr][nc] != mat[i][j])

						continue;

					int cur_min2 = min(num[nr][nc].right, num[nr][nc].bottom);

					if (cur_min2 >= fence + 1)

					{

						res = max(res, fence + 1);

						break;

					}

				}

			}

		}

		return res;

	}

	int maxSubMatrix(vector > mat, int n) {

		if (n < 2)

			return 1;

		vector> node(n, vector(n));

		count(node, mat, n);

		return getmax(node, mat, n);

	}

};