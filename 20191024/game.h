#ifndef _GAME_H__
#define _GAME_H__
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#define ROL 3
#define TOL 3
void menu();
void getbroad(char broad[ROL][TOL],int rol,int tol);
void outborad(char broad[ROL][TOL], int rol, int tol);
void computer(char broad[ROL][TOL], int rol, int tol);
char winner(char broad[ROL][TOL], int rol, int tol);
void game();

int isfull(char broad[ROL][TOL], int rol, int tol);
#endif