#include "library.h"


int User_or_Administrator()
{
	int input = 0;
	do
	{
		system("cls");
		printf("**************************************\n");
		printf("**********   ��ʲô��ݽ���  *********\n");
		printf("**************************************\n");
		printf("**********     1.  �û�      *********\n");
		printf("**********     2. ����Ա     *********\n");
		printf("**********     0. �˳�       *********\n");
		printf("**************************************\n");
		printf("�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		case 2:
		case 0:

			return input;//����ѡ�������
			break;

		default:

			input = 0;//��input=0�ظ�ѭ��
			printf("������󣡣�������\a\n");
			Sleep(1500);
			break;

		}
	} while (!input);//��input=0ʱ�ظ�ѭ����������
}