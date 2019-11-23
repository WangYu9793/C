#include<stdio.h>
#include<Windows.h>
int f(int a)
{
	return a % 2;
}
int main()
{
	int s[8] = { 1, 3, 5, 2, 4, 6 }, i, d = 0;
	for (i = 0; f(s[i]); i++)
	{
		d += s[i];
	}
	printf("%d\n", d);
	system("pause");
	return 0;
}