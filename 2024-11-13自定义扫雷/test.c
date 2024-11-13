#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*****************************************\n");
	printf("**********       扫雷游戏       *********\n");
	printf("**********       1. play        *********\n");
	printf("**********       0. exit        *********\n");
	printf("*****************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//存放排查出的雷的信息

	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');//初始化全为0
	InitBoard(show, ROWS, COLS, '*');//初始化全为*
	//打印棋盘
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL, COUNT);
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("开始游戏\n");
			game();//扫雷游戏
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重输！\a\n");
			break;
		}
	} while (input);
	return 0;
}