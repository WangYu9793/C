//10��С��Χ��һȦ���ǹ�����ʦ˳�ηָ�ÿ���˵��ǿ���Ϊ
//12��2��8��22��16��4��10��6��14��20��
//Ȼ�����й����������С��ͬʱ���Լ����ǹ���һ����ұߵ�С����
//�ǿ�����Ϊ�������ˣ�������ʦ��Ҫһ�飬�ʾ������ٴε�����
//��ҵ��ǿ�һ���࣬��ÿ�˶��ٿ顣
#include<stdio.h>
#include<math.h>
void fentang(int a[],int num){
	int i = 0;
	int count = 0;
	int b[20];
	int net = a[0];
	for (; i < num; i++){
		b[i]= a[i];
	}
	for (; i < num; i++){
		net ^= a[i];
	}
	while (net){
		for (; i < num; i++){
			a[i] = b[i];
		}
     for (; i < num; i++){
		 if (i == 0){
			 b[i] = (a[i]+a[num-1])/2;
		 }
		 else{
			 b[i] = (a[i-1]+a[i])/2; }
	}
     for (; i < num; i++){
		net ^= b[i];
	}
	 count++;
	}
	printf("%d %d", count, b[0]);
}
int main(){
	int arr[] = { 12, 2, 8, 22, 16, 4, 10, 6, 14, 20 };
	int num = sizeof(arr)/sizeof(arr[0]);
	fentang(arr, num);
}