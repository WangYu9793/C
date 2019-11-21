#include<stdio.h>
#include<assert.h>
#include<Windows.h>
void my_strlen3(const char* string)
{
	assert(string != null);
	const char* prt = string;
	while (*prt != '\0')
	{
		prt++;
	}
	return prt - string;
}
int main()
{
	char string[] = "hello world";
	printf("%lu\n", my_strlen1(string));
	printf("%lu\n", my_strlen2(string));
	printf("%lu\n", my_strlen3(string));
	system("pause");
	return 0;
}