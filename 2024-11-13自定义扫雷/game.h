#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//定义格子的行数
#define ROW 9
//定义格子的列数
#define COL 9
//雷的个数
#define COUNT 2

#define ROWS ROW + 2
#define COLS COL + 2


//函数的声明

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//布置雷
void SetMine(char board[ROWS][COLS], int row, int col, int count);

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
