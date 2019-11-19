#include<stdio.h>
#include<math.h>
#include<Windows.h>
int heshui(int money){
	//int t = 0;
	int sum = 0;
	while (money > 1){
		//t = money / 2;
		if (money > 1){
			sum += money;
			money /= 2;
			}
			sum += money;
	}
	sum += money;
	return sum;
}
int main(){
	int money=20;
	return heshui(money);
	//printf("%d", sum);
	system("pause");
	return 0;
}