#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void menu()
{
	printf("*****************************************\n");
	printf("**********       ɨ����Ϸ       *********\n");
	printf("**********       1. play        *********\n");
	printf("**********       0. exit        *********\n");
	printf("*****************************************\n");
}

void game()
{
	char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//����Ų�����׵���Ϣ

	//��ʼ������
	InitBoard(mine, ROWS, COLS, '0');//��ʼ��ȫΪ0
	InitBoard(show, ROWS, COLS, '*');//��ʼ��ȫΪ*
	//��ӡ����
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL, COUNT);
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��ʼ��Ϸ\n");
			game();//ɨ����Ϸ
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("������������䣡\a\n");
			break;
		}
	} while (input);
	return 0;
}