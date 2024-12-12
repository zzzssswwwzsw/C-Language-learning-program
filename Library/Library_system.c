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
	int input = 0;
	do
	{
		system("cls");
		printf("*�û���%s\n", Account);
		printf("********************************************\n");
		printf("***********      ��ѯ�˵�     **************\n");
		printf("********************************************\n");
		printf("***********  1. ��ѯ�����¼  **************\n");
		printf("***********  2. ��ѯ�����¼  **************\n");
		printf("***********  3. ��ѯδ���鼮  **************\n");
		printf("***********  0. ����          **************\n");
		printf("********************************************\n");
		printf("�����룺");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			Borrow_information(Account);
			break;

		case 2:
			break;
		case 3:
			break;
		case 0:

			break;

		default:

			printf("������󣡣�������\a\n");
			input = 1;
			break;

		}
	} while (input);
}





void Borrow_information(char Account[User_Account_Length])
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
		printf("********************************************\n");
		printf("**********   �û�����%s\n", Account);
		printf("**********   �����¼�� ********************\n");
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
			printf("********************************************\n");
			j++;
		}
		printf("**********   ��������0  ********************\n");
		printf("********************************************\n");
		scanf("%d", &input);
	} while (input);
}





void Check_Books()
{
	int input = 1;
	do
	{
		int i = 0;
		system("cls");
		printf("id ����                ����              �����               ���浥λ        ����ʱ��  ������� �۸�\n");
		printf("---------------------------------------------------------------------------------------------------------\n");
		while (books[i].Id != 0)
		{
			printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			i++;
		}
		printf("---------------------------------------------------------------------------------------------------------\n");
		printf("����������0\n");
		scanf("%d", &input);
		if (input != 0)
		{
			printf("������󣡣�������\a\n");
			Sleep(1500);
			input = 1;
		}
	} while (input);
}





int Is_Timeout(char book_name[Book_Name_Length], int Num_User_Account)
{
	//��ȡ���ڵ�ʱ��
	time_t Now_Time = time(NULL);

	//��ȡ��ǰ�鱾��Ӧ�����¼�е��±�
	int i = 0;
	while (1)
	{
		if (borrow[Num_User_Account].borrow_book[i].time == 0)//���δ�ҵ����±�i����Ϊ-1
		{
			i = -1;
			break;
		}
		else if (strcmp(borrow[Num_User_Account].borrow_book[i].name, book_name) == 0)//����ҵ��ˣ�������i
			break;
		else
			i++;
	}

	//��ȡ�û��Լ���Ӧ���ĵ��鱾ʱ��
	time_t Borrow_Time = borrow[Num_User_Account].borrow_book[i].time;

	//�Ƚ����ڵ�ʱ�������ʱ��Ĳ�ֵ�Ƿ񳬹�Ԥ��ֵ
	if (Now_Time - Borrow_Time > Timeout)//�����ʱ��
		return 1;//����ֵΪ1
	else//��û�г�ʱ
		return 0;//����ֵΪ0
}