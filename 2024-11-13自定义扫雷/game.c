#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("-------扫雷游戏--------\n");
	printf("   ");
	for (int i = 1; i <= col; i++)
	{
		printf("%-2d", i);
	}
	printf("\n\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%-2d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("-------扫雷游戏--------\n");
}

void SetMine(char board[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		//生成随机下标
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0' && board[x][y] != '1')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

static int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void IsZero(char mine[ROWS][COLS], char show[ROWS][COLS], int mine_count, int x, int y, int* win)
{
	if (mine_count == 0)
	{
		for (int i = -1; i <= 1; i+=2)
		{
			int X = x + i;
			int Y = y;
			if (X >= 1 && X <= ROW && Y >= 1 && Y <= COL && show[X][Y] == '*')
			{
				int mine_count = get_mine_count(mine, X, Y);
				show[X][Y] = mine_count + '0';//将数字转化为字符
				IsZero(mine, show, mine_count, X, Y, &*win);//递归
				system("cls");
				//DisplayBoard(mine, ROW, COL);
				DisplayBoard(show, ROW, COL);
				(*win)++;
			}
		}
		for (int i = -1; i <= 1; i += 2)
		{
			int X = x;
			int Y = y + i;
			if (X >= 1 && X <= ROW && Y >= 1 && Y <= COL && show[X][Y] == '*')
			{
				int mine_count = get_mine_count(mine, X, Y);
				show[X][Y] = mine_count + '0';//将数字转化为字符
				IsZero(mine, show, mine_count, X, Y, &*win);//递归
				system("cls");
				//DisplayBoard(mine, ROW, COL);
				DisplayBoard(show, ROW, COL);
				(*win)++;
			}
		}
	}
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;

	while (win < row * col - COUNT)
	{
		printf("请输入坐标（行 列）：");
		scanf("%d%d", &x, &y);
	
		if (x >= 1 && x <= row && y >= 1 && y <= col && show[x][y] == '*')
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了！！！！！！！！！！！！！！！！！\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int mine_count = get_mine_count(mine, x, y);
				show[x][y] = mine_count + '0';//将数字转化为字符
				IsZero(mine, show, mine_count, x, y, &win);//判断为0，则向四周扩散
				system("cls");
				//DisplayBoard(mine, row, col);
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标错误，请重新输入！\a\n");
		}
	}

	if (win == row * col - COUNT)
	{
		printf("恭喜你！！！！！！！！游戏获胜！！！！！！\n");
		DisplayBoard(mine, row, col);
		Sleep(2000);
	}
}