#include<stdio.h>
#pragma warning(disable:4996)
int main(){
	int a = 10000;
	FILE*pf = fopen("test.txt", "wb");
	fwrite(&a, 4, 1, pf);
	fclose(pf);
	pf = NULL;
	return 0;
}