#include<stdio.h>
#include<Windows.h>
#include<math.h>


char * my_strcpy(char *dest, char *cpy){
	char *net = dest;
	while ((*dest++ = *cpy++) ){
		;
	}
	return net;
}

int main(){
	char a[10] = "abcd";
	char b[] = "efgh";
	printf("%s\n", my_strcopy(a, b));
	system("pause");
	return 0;
}