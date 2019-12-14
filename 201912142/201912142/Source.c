#include<stdio.h>
#pragma warning (disable:4996)
int main(){
	FILE * pfile;
	long size;
	pfile = fopen("example.txt", "rb");
	if (pfile == NULL)perror("Error opening file");
	else {
		fseek(pfile, 0, SEEK_END);
		size = ftell(pfile);
		fclose(pfile);
		printf("size of myfile.txt:%ld bytes\n", size);
	}
	system("pause");
	return 0;
}