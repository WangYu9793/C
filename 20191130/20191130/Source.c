#include <stdio.h>
#include <math.h>
int main()
{
	int i, m, sum;
	for (i = 100; i<1000; i++)
	{
		sum = 0;
		m = i;
		do
		{
			sum = sum + pow(m % 10, 3);//pow��a,b����ָa��b������double�͵�
			m = m / 10;
		} while (m != 0);
		if (sum == i)
			printf("%d ", i);
	}
	printf("\n");
	return 0;
}