//Լɪ��������һ��������Ȥ�⡣
//Լɪ�������Ǹ�����������:N����Χ��һȦ���ӵ�һ����ʼ������
//��M������ɱ�������ʣ��һ���������˶�����ɱ��
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