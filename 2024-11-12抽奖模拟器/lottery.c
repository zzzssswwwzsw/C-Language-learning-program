#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lottery(int times, int* R, int* SR, int* SSR, int* UTR, int* empty, int* times_num)
{
	for (int i = 0; i < times; i++)
	{
		double p = (double)rand() / RAND_MAX;
		if (p <= 0.0005)                    //0.05%
		{
			printf("UTR!!!!!!!!!!!!!\n");
			(*UTR)++;
		}
		else if (p <= 0.005 && p > 0.0005)  //0.45%
		{
			printf("SSR!!!!!!\n");
			(*SSR)++;
		}
		else if (p <= 0.05 && p > 0.005)   //4.5%
		{
			printf("SR!\n");
			(*SR)++;
		}
		else if (p <= 0.5 && p > 0.05)    //45%
		{
			printf("R\n");
			(*R)++;
		}
		else
		{
			printf("��\n");              //50%
			(*empty)++;
		}
		(*times_num)++;
	}
}

int main()
{
	int input = 0;
	int UTR = 0;
	int SSR = 0;
	int SR = 0;
	int R = 0;
	int empty = 0;
	int times_num = 0;
	srand((unsigned int)time(NULL));
	while (1)
	{
		printf("�齱ģ����������\n");
		printf("��ǰ�������ܴ���: %d , empty: %d , R: %d , SR: %d , SSR: %d , UTR: %d\n", times_num, empty, R, SR, SSR, UTR);
	again:
		printf("��ѡ����Ҫ���г齱�Ĵ�����[����][ʮ����][��һ�ٴΣ���]��");

		scanf("%d", &input);
		switch (input)
		{
		case 1:
			lottery(input, &R, &SR, &SSR, &UTR, &empty, &times_num);
			break;
		case 10:
			lottery(input, &R, &SR, &SSR, &UTR, &empty, &times_num);
			break;
		case 100:
			lottery(input, &R, &SR, &SSR, &UTR, &empty, &times_num);
			break;
		case 1000:
			lottery(input, &R, &SR, &SSR, &UTR, &empty, &times_num);
			break;
		case 100000:
			lottery(input, &R, &SR, &SSR, &UTR, &empty, &times_num);
			break;
		case 0:

			goto end;
			break;
		default:
			printf("û�����ѡ�����������\a\n");
			goto again;
			break;
		}
	}
end:
	return 0;
}