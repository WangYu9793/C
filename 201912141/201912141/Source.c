#include<stdio.h>
#pragma warning (disable:4996)
int main() {
	FILE * pfile;
	pfile = fopen("example.txt", "wb");
	fputs("this is an apple", pfile);
	fseek(pfile, 9, SEEK_CUR);
	fputs(" sam", pfile);
	fclose(pfile);
	system("pause");
	return 0;

}