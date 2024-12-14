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

			return 0;//ѡ��ʧ�ܣ�����ֵΪ0

		case 1:

			//�ж��Ƿ��¼�ɹ�
			if (User_login(User_Account, Num_User_Account))//��¼�ɹ�
				return 1;//��¼�ɹ�������ֵΪ1

		default:

			printf("ѡ����󣡣�����������\a\n");
			break;

		}
	} while (1);
	return 0;
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
			return 0;//��¼ʧ�ܣ�����ֵΪ0
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





void User_menu(char User_Account[User_Num][2][User_Account_Length], int Num_User_Account)
{
	char User_own_Account[User_Account_Length] = { 0 };
	strcpy(User_own_Account, User_Account[Num_User_Account][0]);
	int input = 0;
	do
	{
		system("cls");
		printf("*�û� %s ����ã�\n", User_own_Account);
		printf("**************************************\n");
		printf("**********  1. ����         **********\n");
		printf("**********  2. ����         **********\n");
		printf("**********  3. ��ѯ������Ϣ **********\n");
		printf("**********  4. �鿴�鼮�б� **********\n");
		printf("**********  5. �޸�����     **********\n");
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

			Book_Return(User_own_Account, Num_User_Account);
			break;

		case 3:

			Query_Information(User_own_Account, Num_User_Account);
			break;

		case 4:

			Check_Books();
			break;

		case 5:

			Change_Password(User_Account, Num_User_Account);
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
			Check_Books();

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
					//��ѯ�鼮����Ƿ��㹻
					if (books[find_flag].Inventory_quantity != 0)
					{
						system("cls");
						printf("**************************************\n");
						printf("***         ��Ҫ�ҵ��Ƿ�Ϊ��       ***\n");
						printf("**************************************\n");
						printf("*** id : %d\n", books[find_flag].Id);
						printf("*** ���� : %s\n", books[find_flag].Name);
						printf("*** ���� : %s\n", books[find_flag].author);
						printf("*** ����� : %s\n", books[find_flag].Classification);
						printf("*** ���浥λ : %s\n", books[find_flag].Publisher);
						printf("*** ����ʱ�� : %d\n", books[find_flag].Year);
						printf("*** ������� : %d\n", books[find_flag].Inventory_quantity);
						printf("*** �۸� : %f\n", books[find_flag].Price);
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
								//�޸�δ�黹�鼮��¼
								if (borrow[Num_User_Account].borrow_book[j].time == 0)//�����λ��Ϊ��λ
								{
									borrow[Num_User_Account].borrow_book[j].time = time(NULL);  //��¼����ʱ��
									strcpy(borrow[Num_User_Account].borrow_book[j].name, books[find_flag].Name);  //��¼�鱾����
									break;
								}
								else//������һ��λ��
									j++;
							}

							int k = 0;
							while (1)
							{
								//�޸��ܽ����¼
								if (borrow[Num_User_Account].all_borrow_book[k].time == 0)//�����λ��Ϊ��λ
								{
									borrow[Num_User_Account].all_borrow_book[k].time = borrow[Num_User_Account].borrow_book[j].time;//��¼����ʱ��
									strcpy(borrow[Num_User_Account].all_borrow_book[k].name, books[find_flag].Name);//��¼�鱾����
									break;
								}
								else
									k++;
							}

							//�޸�ͼ��ݿ������
							books[find_flag].Inventory_quantity--;

							printf("����ɹ�����\n");
							Sleep(1500);
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
					}
					else//�鼮�������
					{
						system("cls");
						printf("**************************************\n");
						printf("***         ��Ҫ�ҵ��鼮��         ***\n");
						printf("**************************************\n");
						printf("*** id : %d\n", books[find_flag].Id);
						printf("*** ���� : %s\n", books[find_flag].Name);
						printf("*** ���� : %s\n", books[find_flag].author);
						printf("*** ����� : %s\n", books[find_flag].Classification);
						printf("*** ���浥λ : %s\n", books[find_flag].Publisher);
						printf("*** ����ʱ�� : %d\n", books[find_flag].Year);
						printf("*** ������� : %d\n", books[find_flag].Inventory_quantity);
						printf("*** �۸� : %f\n", books[find_flag].Price);
						printf("**************************************\n");
						printf("***       Ŀǰ��δ�������Ǹ��     ***\a\n");
						Sleep(1500);
						input1 = 1;
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





void Book_Return(char User_own_Account[User_Account_Length], int Num_User_Account)
{
	char input[Book_Name_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("******************************************\n");
		printf("****    ��������Ҫ�黹���鼮���ƣ�    ****\n");
		printf("**** �ظ����ĵ��鼮�������ȹ黹�Ƚ�� ****\n");
		printf("******************************************\n");
		printf("****             ����0����            ****\n");
		printf("******************************************\n");
		printf("�����룺");
		scanf("%s", input);

		if (strcmp(input, "0") == 0)//Ϊ0ʱ����
			break;

		//��ѯ�Ƿ���ڼ�¼
		int i = 0;
		while (1)
		{
			if (borrow[Num_User_Account].borrow_book[i].time == 0)
			{
				i = -1;//δ�ҵ�������iΪ-1
				break;
			}
			else if (strcmp(borrow[Num_User_Account].borrow_book[i].name, input) == 0)
				break;//�ҵ��ˣ����ظý����¼����λ���±�i

			else
				i++;
		}

		if (i != -1)
		{
			int input1 = 1;
			time_t Now_Time = time(NULL);//��ȡ��ǰʱ��
			//��ѯ�����Ƿ�ʱ
			if (Is_Timeout(input, Num_User_Account))
			{   //�����ʱ��
				system("cls");
				printf("******************************************\n");
				printf("****       ����ʱ�ˣ�����ɷ��     ****\n");
				printf("******************************************\n");
				printf("****           1. ȷ�Ͻ���            ****\n");
				printf("****           0. ����                ****\n");
				printf("******************************************\n");
				printf("�����룺");
				scanf("%d", &input1);
			}

			if (input1 == 1)//�ѽ��ɷ����δ��ʱ
			{   //����

				//ɾ�����˽����¼�����Ҳ���
				do
				{
					strcpy(borrow[Num_User_Account].borrow_book[i].name, borrow[Num_User_Account].borrow_book[i + 1].name);
					borrow[Num_User_Account].borrow_book[i].time = borrow[Num_User_Account].borrow_book[i + 1].time;
					i++;
				} while (borrow[Num_User_Account].borrow_book[i].time != 0);

				//����������Ϣ
				int k = 0;
				while (1)//�ҵ���λ
				{
					if (borrow[Num_User_Account].Return_book[k].time == 0)
					{
						strcpy(borrow[Num_User_Account].Return_book[k].name, input);
						borrow[Num_User_Account].Return_book[k].time = Now_Time;
						break;
					}
					else
						k++;
				}

				printf("����ɹ�����\n");
				Sleep(1500);
			}
		}
		else
		{
			printf("δ�ҵ�������Ϣ����\a\n");
			Sleep(1500);
		}
	}
}