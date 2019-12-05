#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
	int a;    
	printf("请输入要倒计时的时间:\n");
	scanf_s("%d", &a);      
	system("color 0a");  
	while (a >= 0)
	{
		system("cls");
		printf("%d", a);
		Sleep(1000);
		a = a - 1;
	}
	system("pause");
}