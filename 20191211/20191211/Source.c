//10个小孩围成一圈分糖果，老师顺次分给每个人的糖块数为
//12，2，8，22，16，4，10，6，14，20。
//然后按下列规则调整所有小孩同时把自己的糖果分一半给右边的小孩，
//糖块数变为奇数的人，再向老师补要一块，问经过多少次调整后，
//大家的糖块一样多，且每人多少块。
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