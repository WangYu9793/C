#include<stdio.h>
#include<math.h>
#include<windows.h>
unsigned int reverse_bit(unsigned int value){
	int sum = 0;
	int num = sizeof(value) * 8;
	int i;
	int t;
	for (i = 0; i < num; i++){
		t = (( value >> i)&1)*pow(2, num-1- i);
			sum += t;
			if ((value >> i) & 1){ sum |= 1 << (num - 1 - i); }
	}
	return sum;
}

int avg(int a, int b){
	return (a&b) +((a^b)>>1);
}
int find_data(int s[], int num){
	int result = s[0];
	int i = 1;
	for (; i < num; i++){
		result ^= s[i];
	}
	return result;
}

int main()
{

	int a = 25;
	int ret = 0;
	ret = reverse_bit(a);
	int c = avg(10, 20);
	int s[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 9 };
	int num = sizeof(s) / sizeof(s[0]);
	int data = find_data(s, num);
	printf("%d\n", c);
	printf("%u\n", ret);
	printf("%d\n", data);
	system("pause");
	return 0;
}