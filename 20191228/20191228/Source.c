#include<stdio.h> 
#include"conio.h"
int removeElement(int array[], int numsSize, int val){
	int count = 1;
	int cur = 0;
	while (cur < numsSize){
		if (array[cur] != val)
			array[cur - count] = array[cur];
		else count++;
	}
	return numsSize - count;
}
int main(){
	int a[] = { 0, 1, 2, 2, 3, 0, 4, 2 };
	int val = 2;
	int num = sizeof(a) / sizeof(a[0]);
	printf("%d",removeElement(a, num, val));
	system("pause");
	return 0;
}