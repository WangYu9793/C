#include<stdio.h>
#include<windows.h>
#include<math.h>
int find_two_number(int arr[], int num, int *p, int *q){
	int i = 0;
	int pos = 0;
	int net = arr[0];
	for (; i < num; i++){
		net ^= arr[i];
	}
	for (; i < 32; i++){
		if (((net >> i) & 1) == 1){
			pos = i;
			break;
		}
	}
	for (; i < num; i++){
       if (((arr[i] >> pos) & 1 )== 1){
		(*p) ^= arr[i];
	}
	}
	(*q) = (*p) ^ net;
	return *p, *q;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 4, 3, 2, 1, 5, 6 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int num1;
	int num2;
	find_two_number(arr, num, &num1, &num2);
	printf("num1=%d,num2=%d\n", num1, num2);
	system("pause");
	return 0;
}