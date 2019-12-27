#include<stdio.h>
void convert(long n) {
	long i;
	if ((i = n / 10) != 0)    
		convert(i);
	putchar(n % 10 + '0');
}
int main()
{
	long number;
	scanf("%ld", &number);
	if (number<0)
	{
		putchar('-'); number = -number;
	} 
	convert (number);
}