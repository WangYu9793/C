#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int N;
	int M;
	while (cin >> N >> M){
		vector<char> vecOp;
		vector<int> numA;
		vector<int> numB;
		vector<int> scores;
		for (int i = 0; i < N; ++i)
		{
			int num;
			cin >> num;
			scores.push_back(num);
		}
		while (M != 0)
		{
			char op;
			int a, b;
			cin >> op >> a >> b;
			vecOp.push_back(op);
			if (op == 'Q')
			{
				numA.push_back(a - 1);
				numB.push_back(b - 1);
			}
			else {
				numA.push_back(a - 1);
				numB.push_back(b);
			}

			--M;
		}
		for (int i = 0; i < vecOp.size(); ++i)
		{
			if (vecOp[i] == 'Q')
			{
				int a = numA[i];
				int b = numB[i];
				if (a > b)
				{
					int temp = a;
					a = b;
					b = temp;
				}

				int max = scores[a];
				for (int j = a; j <= b; ++j)
				{
					if (max < scores[j])
					{
						max = scores[j];
					}
				}
				cout << max << endl;
			}
			else {

				scores[numA[i]] = numB[i];
			}
		}

	}
	return 0;
};