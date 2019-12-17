#include<stdio.h>
#pragma warning (disable:4996)
enum{SIZE=5};
int main(){
	double a[SIZE] = { 1.0, 2.0, 3.0, 4.0, 5.0 };
	double b = 0.0;
	size_t ret_code = 0;
	FILE *fp = fopen("test.bin", "wb");
	fwrite(a, sizeof(*a), SIZE, fp);
	fclose(fp);
	fp = fopen("test.bin", "rb");
	while ((ret_code = fread(&b, sizeof(double), 1, fp)) >= 1){
		printf("%lf\n", b);
	}
	if (ferror(fp)){
		puts("I/O error when reading");
	}
	else if (feof(fp)){
		puts("End of file reached successfully");
	}
	fclose(fp);
	fp = NULL;
}