#include<stdio.h>
#include<math.h>
int main(){
	int i = 0;
	for (; i <= 30; i++){
		int j = 0;
		for (; j <= 30 - i; j++){
			int k = 0;
			for (; k <= 30 - i - j; k++){
				if ((i + j + k == 30) && (3 * i + 2 * j + k) == 50){
					printf("%d %d %d", i, j, k);
				}
			}
		}
	}
	system("pause");
	return 0;
}