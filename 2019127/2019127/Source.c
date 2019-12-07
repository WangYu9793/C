#include "Contact.h"
#include <stdio.h>

void menu()
{
	printf("****************************\n");
	printf("*** 1.ADD        2.DEL   ***\n");
	printf("*** 3.SEARCH     4.MODIFY***\n");
	printf("*** 5.SHOW       6.CLEAR ***\n");
	printf("*** 7.SORT       0.EXIT  ***\n");
	printf("***       8.SAVE         ***\n");
	printf("****************************\n");
}
void test()
{
	int input = 0;
	char name[NAME_MAX] = { 0 };
	struct Contact con;
	InitContact(&con);//��ʼ��ͨѶ¼
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModdifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case CLEAR:
			ClearContact(&con);
		case SORT:
			sort_contact(&con);
		default:
			break;
		}

	} while (input);
}
int main()
{
	test();
	//system("pause");
	return 0;
}