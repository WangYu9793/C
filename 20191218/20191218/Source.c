//编写一个函数，使给定的一个二维数组(N×N)行列互换(N>3)。
#include<stdio.h>
#define N 5
void hlhh(int a[N][N],int num){
	int i = 0;
	for (; i < N; i++){
		int j=i+1;
		for (; j < N; j++){
			int temp;
			if (i != j){
				temp = a[i][j];
				a[i][j] = a[j][i];
				a[j][i] = temp;
			}
		}
	}

}
int main(){
	int arr[N][N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25 };
	int num = sizeof(arr) / sizeof(arr[0][0]);
	hlhh(arr, num);
	int i = 0;
	for (; i < N; i++){
		int j = 0;
		for (; j < N; j++){
			printf("%d", arr[i][j]);
			system("pause");
			return 0;
		}
	}
}
 