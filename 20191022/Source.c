#include<stdio.h>
#include<math.h>
int main(){
	int j;
	int i;
	int k;
	for (i = 0; i < 7; i++){
		for (j = 0; j < 6 - i; j++)
			printf(" ");
		for (k = 0; k <= 2 * i; k++)
			printf("*");
		printf("\n");
	}

	for (i = 0; i < 6; i++){
		for (j = 0; j <= i; j++)
			printf(" ");
		for (k = 0; k <= 10 - 2 * i; k++)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}