#include<stdio.h>
#include<math.h>
int getstep(int n){
	int sum;
	if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 2;
	}
	else  if (n >= 3) {
		sum = getstep(n - 1) + getstep(n - 2);
	}
	return sum;
}
int main(){
	int n ;
	printf("please enter your number:\n");
	scanf_s("%d", &n);
	int sum = getstep(n);
	printf("%d\n", sum);
	system("pause");
	return 0;
}