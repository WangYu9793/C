#include"game.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

char broad[ROL][TOL];
void getbroad(char broad[ROL][TOL], int rol, int tol){
	int i;
	for (i = 0; i < rol; i++){
		int j;
		for (j = 0; j < tol; j++){
			broad[i][j] = ' ';
		}
		printf("%d", broad[i][j]);
	}
}

void outborad(char broad[ROL][TOL], int rol, int tol){
	int i;
	for (i = 0; i < rol; i++){
		printf(" %c | %c | %c \n", broad[i][0], broad[i][1], broad[i][2]);
		printf("---|---|---\n");
	}
}

void computer(char broad[ROL][TOL], int rol, int tol){
	printf("�������ӣ�\n");
	while (1){
		int x;
		int y;
		x = rand() % 3;
		y = rand() % 3;
		if (broad[x-1][y-1] = ' '){
			broad[x-1][y-1] = 'c';
		break;
		}

		
	}
}

int isfull(char broad[ROL][TOL], int rol, int tol){
	int i;
	for (i = 0; i < rol; i++){
		int j;
		for (j = 0; j < tol; j++){
			if (broad[i][j] ==' '){
				return 0;
			}
		}

	}
	return 1;}
char winner(char broad[ROL][TOL], int rol, int tol){
	for (int i = 0; i < rol; ++i) {
			if (broad[i][0] == broad[i][1]
				&& broad[i][0] == broad[i][2]
				&& broad[i][0] != ' ') {
				return broad[i][0];
			}
		}
		//���������
		for (int j = 0; j < tol; ++j) {
			if (broad[0][j] == broad[1][j]
				&& broad[0][j] == broad[2][j]
				&& broad[0][j] != ' ') {
				return broad[0][j];
			}
		}
		//���Խ���
		if (broad[0][0] == broad[1][1]
			&& broad[0][0] == broad[2][2]
			&& broad[0][0] != ' ') {
			return broad[0][0];
		}
		if (broad[2][0] == broad[1][1]
			&& broad[2][0] == broad[0][2]
			&& broad[2][0] != ' ') {
			return broad[2][0];
		}
		//�ж��Ƿ����
		if (isfull(broad, rol,  tol)) {
			return'H';
		}
		return'J';
	}
void game(){
	char broad[ROL][TOL];
	getbroad(broad,ROL,TOL);
	char win;
//	srand(unsigned long)time(NULL));
     int k = rand() % 2;
		int x;
		printf("enter a number<0,1>");
		scanf_s("%d", &x);
	while (1){
 		outbroad(broad, ROL, TOL);
		int stemp;
		if (x == k){
			stemp = 1;
		}
		else stemp = 0;
		switch (stemp){
		case 1:
			while (1){
				printf("���������ˣ�\n");
				int x;
				int y;
				printf("please enter your <x,y>");
				scanf_s("%d %d", &x, &y);
				if (x <= 0 || x>ROL || y <= 0 || y>TOL){
					printf("����λ����������������");
					continue;
				}
				if (broad[x - 1][y - 1] != ' '){
					printf("����λ�������ӣ�����������");
					continue;
				}
				broad[x - 1][y - 1] = 'p';
				win = winner(broad,ROL,TOL);
             if (win != 'J'){
				break;
			}
         stemp = 0;
			}
			
			break;
		case 0:
			computer(broad, ROL, TOL);
			win = winner(broad, ROL, TOL);
			stemp = 1;
			break;
         
		}
       if (win != 'J') {
			break;
		}
		if (win == 'p') {
			printf("���ʤ��\n");
		}
		else if (win == 'c') {
			printf("����ʤ��\n");
		}
		else if (win == 'H') {
			printf("���壡\n");
		}
		else continue;
	}
	//return 0;
}
	

