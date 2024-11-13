#pragma once


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


//������ӵ�����
#define ROW 9
//������ӵ�����
#define COL 9
//�׵ĸ���
#define COUNT 2

#define ROWS ROW + 2
#define COLS COL + 2


//����������

//��ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//������
void SetMine(char board[ROWS][COLS], int row, int col, int count);

//�Ų���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
