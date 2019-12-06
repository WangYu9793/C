#include<stdio.h>
#include<math.h>
#include<Windows.h>
int cmp(const void* m, const void *n){
	return  *(char *)m - *(char *)n;
}
void swap(char * p, char *q, int size){
	int i = 0;
	for (; i < size; i++){
		 *p=(*p)^(*q);
		 *p = (*p) ^ (*q);
		 *q = (*p) ^ (*q);
		 *p++;
		 *q++;
	}
}
void my_qsort(void *base, int big, int size){
	int i = 0;
	int net = 0;
	for (; i < big; i++){
		int j = 0;
		for (; j < big - i - 1; j++){
			net = cmp((char*)base + j*size, (char*)base + (j + 1)*size);
			if (net>0){
				swap((char*)base + j*size, (char*)base + (j + 1)*size, size);
			}
		}
	}
}
int main()
{
	int i = 0;
	int a[] = { 5, 4, 3, 2, 1 };
	char b[] = { 's', 'm', 'l', 'z', 'h' };
	my_qsort(a, 5, 4);
	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	my_qsort(b, 5, 1);
	for (i = 0; i < 5; i++)
	{
		printf("%c ", b[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}