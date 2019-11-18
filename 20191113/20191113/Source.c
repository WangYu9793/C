#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<Assert.h>
void levo(char *pstr, int SZ, int key)
{
	assert(pstr != 0);
	int i = 0;
	int j = 0;
	for (; i < key; i++){
		char temp = pstr[0];
		for (; j < SZ-1; j++){
			pstr[j] = pstr[j + 1];
		}
		pstr[SZ - 1] = temp;
	}
}
int main()
{
	char str[] = "ABCDEFGH";
	int key = 0;
	int SZ = sizeof(str) / sizeof(str[0]) - 1;
	printf("请输入你要旋转字符的个数");
	scanf("%d", &key);
	levo(str, SZ, key);
	printf("%s\n", str);
	system("pause");
	return 0;
}