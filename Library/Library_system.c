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





void Query_Information(char Account[User_Account_Length])
{
	int input = 1;
	do
	{
		int i = 0;
		while (1)
		{
			if (strcmp(Account, borrow[i].Account) == 0)
				break;//�ҵ��û��˺��±�
			else
				i++;
		}

		system("cls");
		printf("**************************************\n");
		printf("**********   �û�����%s\n", Account);
		printf("**********   �����¼�� **************\n");
		int j = 0;
		while (borrow[i].borrow_book[j].time != 0)
		{
			time_t Time = borrow[i].borrow_book[j].time;
			struct tm* TIME = localtime(&Time);
			printf("**********   ����ʱ�䣺%d-%02d-%02d %02d:%02d:%02d\n",
				TIME->tm_year + 1900,  //��
				TIME->tm_mon + 1,      //�� 
				TIME->tm_mday,         //��
				TIME->tm_hour,         //ʱ
				TIME->tm_min,          //��
				TIME->tm_sec);         //��
			printf("**********   �������ƣ�%s\n", borrow[i].borrow_book[j].name);
			printf("**************************************\n");
			j++;
		}
		printf("**********   ��������0  **************\n");
		printf("**************************************\n");

	} while (input);
}