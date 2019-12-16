#include<stdio.h>
#include<math.h>
int main(){
	int N;
	int a = 0;
	int b = 1;
	int c;
	int min;
	scanf_s("%d", &N);
	min = N - a;
	while (1){
		c = a + b;
		a = b;
		b = c;
		if ((N - c) < min && (N - c) >= 0){
			min = N - c;
		}
		if ((N - c) < 0){
			if (fabs(N - c) < min){
				min = fabs(N - c);
			}
			break;
		}
	}
	printf("%d\n", min);
	system("pause");
	return 0;
}