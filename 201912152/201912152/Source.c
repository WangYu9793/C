#include<stdio.h>
int main() {
	int num = 0; 
	scanf_s("%d", &num);  
	int f1 = 0, f2 = 1, f3 = f1 + f2; 
	while (1)    {
		if (f2 == num)    
		{ printf("%d\n", 0);   
		break;
		} 
		else if (f2 > num)  
		{ if (fabs(f2 - num) > fabs(f1 - num))   
		{ printf("%d\n", fabs(f1 - num)); }
		else          
		{ printf("%d\n", fabs(f2 - num)); }   
		break; }            
		f1 = f2;    
		f2 = f3;   
		f3 = f1 + f2; }  
	system("pause");
	return 0; }