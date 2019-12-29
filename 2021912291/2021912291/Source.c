#include<stdio.h>
int main() {
	double sum = 0, high = 100;
	for (int i = 0; i < 10; i++) {
		sum = high + high / 2 + sum;
		high /= 2;
	}
	sum -= high;
	printf("%d %d", sum, high);
	system("pause");
	return 0;
}
	