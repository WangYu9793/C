#include <stdio.h>

int convert(int i)
{
	return i|=1<<31;
}
int convert1(int i)
{
	return i &= 1 << 31;
}
int convert2(int i)
{
	return i &=~( 1 << 31);
}
int convert3(int i)
{
	return i ^= 1 << 31;
}

int main()
{
	int value = 7;

	printf("%x\n", convert(value));
	printf("%x\n", convert1(value));
	printf("%x\n", convert2(value));
	printf("%x\n", convert3(value));
	system("pause");
	return 0;
}