#include<stdio.h>
#include<windows.h>

char* my_strcat(char *dest, char *cat){
	char *net = dest;
	while (*dest){
		dest++;
	}
	while (*dest++ = *cat++){
		;
	}
	return net;
}

int main(){
	char a[10] = "abcd";
	char b[] = "efgh";
	printf("%s\n", my_strcat(a, b));
	system("pause");
	return 0;
}
