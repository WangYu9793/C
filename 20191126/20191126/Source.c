#include<stdio.h>
#include<string.h>
#include<math.h>
void invert(char *ch, int n){
	int i;
	char temp;
	for (i = 0; i<n / 2; i++){
		temp = ch[i];
		ch[i] = ch[n - 1 - i];
		ch[n-1-i] = temp;
	}
}
void invert1(char *ch){
	int i = 0;
	int len = strlen(ch);
	invert(ch, len);
	while (ch[i] != '0'){
		i = 0;
		while (ch[i] != ' '&&ch[i] != '0'){
			i++;
		}
		invert(ch, i);
		if (ch[i] != '\0'){
			ch = ch + i + 1;
		}
		else{
			ch = ch + i;
		}
	}
	//return ch;
}
int main(){
	char str[] = "I like beijing.";
	invert1(str);
	printf("%s", str);
}