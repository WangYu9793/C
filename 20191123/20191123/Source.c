#include<stdio.h>
#include<Windows.h>
#include<math.h>
//�����һ���㷨������һ��δ���������������
//����Ԫ�ص�����ֵ��
//����һ����������A������Ĵ�Сn���뷵������ֵ��
//����������
//[9, 3, 1, 10], 4
//���أ�6
int getchazhi(int arr[], int num){
	int max=0;
	for (int i = 0; i < num-1; i++){
		for (int j = 0; j < num -1-i; j++){
			if (arr[i] > arr[i + 1]){
				arr[i] ^= arr[i + 1];
				arr[i+1] ^= arr[i];
				arr[i] ^= arr[i + 1];
			}
		}
	}
	for (int i = 0; i < num; i++)
	{
		printf("%d,", arr[i]);
	}
	max = arr[1] - arr[0];
	for (int i = 0; i < num-2; i++){
		if (max < (arr[i + 1] - arr[i])){
			max = (arr[i + 1] - arr[i]);
		}
	}
	return max;
}
int main(){
	int arr[] = { 9, 3, 1, 10 };
	int num = sizeof(arr) / sizeof(arr[0]);
	int net=getchazhi(arr, num);
	printf("%d\n", net);
	system("pause");
	return 0;
}