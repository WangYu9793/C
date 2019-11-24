//约瑟夫问题是一个著名的趣题。
//约瑟夫问题是个有名的问题:N个人围成一圈，从第一个开始报数，
//第M个将被杀掉，最后剩下一个，其余人都将被杀掉
#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int Getnumber(int n,int m){
	int i, j = 0, s = 0, l;
	int *a = (int *)malloc(sizeof(int));
	int *b = (int *)malloc(sizeof(int));
	for (i = 0; i<n; i++)
	{
		a[i] = i + 1;
	}
	a[n] = -1;
	for (i = 0; j != n; i++)
	{
		if (a[i] == -1)
			i = 0;
		if (a[i] != 0 && a[i] != -1)
			s++;
		if (s == m)
		{
			b[j] = a[i];
			a[i] = 0;
			j++;
			s = 0;
		}
	}
	for (i = 0; i<n; i++)
	{
		printf("%5d", b[i]);
	}
	printf("\n");
	l = b[n - 1];
	return l;
}

int main(){
	int p,q;
	scanf_s("%d %d", &p,&q);
	int result=Getnumber(p,q);
	printf("%d\n", result);
	system("pause");
	return 0;
}