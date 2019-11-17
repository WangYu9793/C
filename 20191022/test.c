#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<math.h>
int main()
{
	int i;
	int j;
	int n;
	printf("please rnter a number:");
	scanf_s("%d", &n);
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < 2 * i - 1; j++)
		{
			if (j < n - 1-i)
			{
				printf(" ");
			}
			else 
			{
				printf("*");
			}
		}
	}
}