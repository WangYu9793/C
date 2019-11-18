#include<stdio.h>
#include<windows.h>
#include<math.h>
int px(int a[], int num){
	int t=0;
         int *p = a[0];
		int *q = a[num - 1];
		while (p<q){
			if ((*q) % 2 == 0){
               q--;
			}
			if ((*p) % 2 != 0){
               p++;
			}
			if ((*q) % 2 != 0 && (*p) % 2 == 0){
		t = *q;
		*q = *p;
			*p = t;
		}	
	}
		
}
int main(){
	int i = 0;
	int a[] = { 1, 2, 3, 4, 1, 2, 3, 4 };
	int num = sizeof(a) / sizeof(a[0]);
	  px(a, num);
for (; i < num; i++){
			printf("%d", a[i]);
		}
	 system("pause");
	 return 0;
}

