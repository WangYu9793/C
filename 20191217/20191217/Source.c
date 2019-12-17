#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)
int main(){
	int c;
	FILE*fp = fopen("test.txt", "r");
	if (!fp){
		perror("File opening failed");
		return EXIT_FAILURE;
	}
	while ((c = fgetc(fp)) != EOF){
		putchar(c);
	}
	if (ferror(fp)){
		puts("I/O error when reading");
	}
	else if (feof(fp)){
		puts("End of file reached successfully");
	}
	fclose(fp);
	system("pause");
	return 0;
}