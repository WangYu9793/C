#include<stdio.h>
#include<math.h>
int Binarysearch(int a[], int num, int key){
	int left = 0;
	int right = num - 1;
	while (left <= right){
		int mid = left + (right - left) / 2;
		if (key == a[mid]){
			return mid;
			break;
		}
		if (key > a[mid]){
			left = mid + 1;
		}
		else if (key < a[mid]){
			right = mid - 1;
		}
	}
	return 0;;
}
int main(){
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int key;
	scanf_s("%d", &key);
	printf("%d\n",Binarysearch(arr, num,key));
	system("pause");
	return 0;
}