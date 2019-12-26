#include<stdio.h>
int vert(char a[], int len){
	int str[256] = { 0 };
	for (int i = 0; i < len; i++)
	{str[a[i]]++; }
	for (int i = 0; i < len; i++)
	{
		if (str[a[i]] == 1){
			return i;
			break;
		}
	}
}
int main(){
	char arr[] = "abcdefdcba";
	int len = strlen(arr);
	printf("%d", arr[vert(arr, len)]);
	system("pause");
	return 0;
}