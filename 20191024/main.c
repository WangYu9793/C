#include"game.h"
#include<stdio.h>
void menu(){
	printf("#######################\n");
	printf("###欢迎来到我的三子棋##\n");
	printf("#######################\n");
	printf("####1.player  2.exit###\n");
	printf("#######################\n");
	printf("#####please select!####\n");
}
int main(){
	menu();
	int quit=0;
	int select;
	while (!quit){
		printf("please enter your select:");
	scanf_s("%d", &select);
	switch (select){
	case 1:
		game();
	case 2:
		quit = 1;
		break;
	}
	}
}

 