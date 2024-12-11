#include "library.h"




int User_choose(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account)
{
	int input = 0;
	do
	{
		system("cls");
		printf("*�û�*********************************\n");
		printf("**********   ��ӭ����ͼ���  *********\n");
		printf("**************************************\n");
		printf("**********      1. ��¼     **********\n");
		printf("**********      0. ����     **********\n");
		printf("**************************************\n");
		printf("**************************************\n");
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 0:

			return -1;//ѡ��ʧ�ܣ�����ֵΪ-1

		case 1:

			//�ж��Ƿ��¼�ɹ�
			if (User_login(User_Account, Num_User_Account) != -1)//��¼�ɹ�
				return 1;//��¼�ɹ�������ֵΪ1
			else//��¼ʧ�ܣ�����ѭ��
				input = 0;
			break;

		default:

			printf("ѡ����󣡣�����������\a\n");
			input = 0;
			break;

		}
	} while (!input);
}



int User_login(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account)
{
	char Account[User_Account_Length] = { 0 };
	char Password[User_Account_Length] = { 0 };

	while (1)
	{
		system("cls");
		printf("*�û�*********************************\n");
		printf("********** �������˺ź����� **********\n");
		printf("**************************************\n");
		printf("**********    ����������0   **********\n");
		printf("**************************************\n");
		printf("********** �������˺ţ�");
		scanf("%s", Account);
		printf("********** ���������룺");
		scanf("%s", Password);

		if (strcmp(Account, "0") == 0 || strcmp(Password, "0") == 0)//�ж��Ƿ񷵻�
		{
			return -1;//��¼ʧ�ܣ�����ֵΪ-1
		}

		//��ѯ�˺�����
		int i = 0;
		while (User_Account[i][0][0] != '\0')
			i++;
		//��ѯ�˻��Ƿ����
		for (i; i >= 0; i--)
		{
			//��ѯ�˻�
			if (strcmp(Account, User_Account[i][0]) == 0)
			{
				//��ѯ����
				if (strcmp(Password, User_Account[i][1]) == 0)
				{
					printf("��¼�ɹ�����\n");
					Sleep(1500);
					*Num_User_Account = i;
					return 1;//��½�ɹ�������ֵΪ1
				}
			}
		}
		//δ��ѯ��
		printf("�˺Ż�������󣡣�����������\a\n");
		Sleep(1500);
	}
}



void User_menu(char User_own_Account[User_Account_Length], int Num_User_Account)
{
	int input = 0;
	do
	{
		system("cls");
		printf("*�û� %s ����ã�*****************\n", User_own_Account);
		printf("**************************************\n");
		printf("**********  1. ����         **********\n");
		printf("**********  2. ����         **********\n");
		printf("**********  3. ��ѯ������Ϣ **********\n");
		printf("**********  4. �鿴�鼮�б� **********\n");
		printf("**********  0. �˳���¼     **********\n");
		printf("**************************************\n");
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			Book_Boorow(User_own_Account, Num_User_Account);
			break;

		case 2:
			break;
		case 3:

			Query_Information(User_own_Account);
			break;

		case 4:
			break;
		case 0://�˳���¼

			break;

		default:

			printf("������󣡣�������\a\n");
			Sleep(1500);
			input = 1;
			break;

		}
	} while (input);
}



void Book_Boorow(char User_own_Account[User_Account_Length], int Num_User_Account)
{
	char input[Book_Name_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("**************************************\n");
		printf("****     ����CHECK�鿴�鼮�б�     ***\n");
		printf("****           ����0����           ***\n");
		printf("**************************************\n");
		printf("**************************************\n");
		printf("***    ��������Ҫ���ĵ��鼮����    ***\n");
		printf("**************************************\n");
		printf("�����룺");
		scanf("%s", &input);


		//�ж��Ƿ��˳�
		if (strcmp(input, "0") == 0)
			break;


		//�ж��Ƿ�Ҫ���в鿴�鼮�б�
		if (strcmp(input, "CHECK") == 0)
		{
			//**********************
		}
		else
		{
			//ͳ���������
			int books_count = 0;
			while (books[books_count].Id != 0)
				books_count++;

			//��ѯ�����Ƿ����
			int i = 0;
			int find_flag = -1;//δ�ҵ�Ϊ-1, �ҵ���Ϊ���������±�
			for (i; i < books_count; i++)
			{
				if (strcmp(input, books[i].Name) == 0)
					find_flag = i;
			}
			if (find_flag != -1)//find_flag��Ϊ-1���ҵ���
			{
				int input1 = 0;
				do
				{
					system("cls");
					printf("**************************************\n");
					printf("***         ��Ҫ�ҵ��Ƿ�Ϊ��       ***\n");
					printf("**************************************\n");
					printf("*** id : %d\n", books[find_flag].Id);
					printf("*** Name : %s\n", books[find_flag].Name);
					printf("**************************************\n");
					printf("***     1. ȷ��  ***  0. ȡ��      ***\n");
					printf("**************************************\n");
					printf("�����룺");
					scanf("%d", &input1);

					switch (input1)
					{
					case 1://ȷ�Ͻ���
					{
						//�޸ĸ��˽����¼
						int j = 0;
						while (1)
						{
							if (borrow[Num_User_Account].borrow_book[j].time == 0)//�����λ��Ϊ��λ
							{
								borrow[Num_User_Account].borrow_book[j].time = time(NULL);  //��¼����ʱ��
								strcpy(borrow[Num_User_Account].borrow_book[j].name, books[find_flag].Name);  //��¼�鱾����
								break;
							}
							else//������һ��λ��
								j++;
						}
						//�޸Ľ����ܼ�¼
						j = 0;
						while (1)
						{
							if (all_borrow[j].time == 0)
							{
								strcpy(all_borrow[j].User_Account, User_own_Account);//��¼�û���
								strcpy(all_borrow[j].name, books[find_flag].Name);//��¼����
								all_borrow[j].time = time(NULL);
								break;
							}
							else
								j++;
						}
						input1 = 0;//�˳���ʶ
						break;
					}
					case 0://ȡ������

						break;

					default:
						printf("������󣡣�������\a\n");
						Sleep(1500);
						input1 = 1;
						break;
					}
				} while (input1);
			}
			else//find_flagΪ-1��δ�ҵ�
			{
				printf("�ܱ�Ǹ��������ʱû�д��鼮����\a\n");
				Sleep(1500);
			}
		}
	}
}