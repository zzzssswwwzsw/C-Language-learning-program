#include "library.h"





int Administrator_login()
{
	char Account[20] = { 0 };
	char Password[20] = { 0 };

	while(1)
	{
		system("cls");
		printf("*����Ա*******************************\n");
		printf("********** �������˺ź����� **********\n");
		printf("**************************************\n");
		printf("**********    ����������0   **********\n");
		printf("**************************************\n");
		printf("********** �������˺ţ�");
		scanf("%s", Account);
		printf("********** ���������룺");
		scanf("%s", Password);

		if (Account[0] == '0' || Password[0] == '0')//�ж��Ƿ񷵻�
		{
			return 0;//��¼ʧ�ܣ�����ֵΪ0
		}

		if (strcmp(Account, Administrator_Account[0]) == 0 && strcmp(Password, Administrator_Account[1]) == 0)
		{
			printf("��¼�ɹ�����\n");
			Sleep(1500);
			return 1;//��¼�ɹ�������ֵΪ1
		}
		else
		{
			printf("�˺Ż�������󣡣�������\a\n");
			Sleep(1500);
		}
	}
}





void Administrator_menu()
{
	int input = 0;
	do
	{
		system("cls");
		printf("*����Ա����ã�***********************\n");
		printf("**************************************\n");
		printf("**********  1. ��ѯ�鼮��Ϣ  *********\n");
		printf("**********  2. �޸��鼮��Ϣ  *********\n");
		printf("**********  3. ������û�    *********\n");
		printf("**********  4. ɾ���û�      *********\n");
		printf("**********  5. �鿴�û���Ϣ  *********\n");
		printf("**********  6. �鿴������Ϣ  *********\n");
		printf("**********  7. �鿴�黹��Ϣ  *********\n");
		printf("**********  0. �˳���¼      *********\n");
		printf("**************************************\n");
		printf("�����룺");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			Check_Books_menu();
			break;

		case 2:

			Change_Books_menu();
			break;

		case 3:

			New_User();
			break;

		case 5:

			Check_User_information();
			break;

		case 4:

			Delete_User();
			break;

		case 6:

			Check_All_Borrow();
			break;

		case 7:

			Check_All_Return();
			break;

		case 0:

			break;

		default:

			printf("������󣡣�������\a\n");
			Sleep(1500);
			input = 1;
			break;

		}
	} while (input);
}





void Check_Books_menu()
{
	int input = 0;
	do
	{
		system("cls");
		printf("**************************************\n");
		printf("**********  1. ��ѯ�鼮�б�    *******\n");
		printf("**********  2. ��������ѯ      *******\n");
		printf("**********  3. �����߲�ѯ      *******\n");
		printf("**********  4. ������Ų�ѯ    *******\n");
		printf("**********  5. �����浥λ��ѯ  *******\n");
		printf("**********  6. ������ʱ���ѯ  *******\n");
		printf("**********  0. ����            *******\n");
		printf("**************************************\n");
		printf("�����룺");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			Check_Books();
			break;

		case 2:
		case 3:
		case 4:
		case 5:
		case 6:

			Targeted_Lookups(input);
			break;

		case 0:

			break;

		default:

			printf("������󣡣�������\a\n");
			Sleep(1500);
			input = 1;
			break;

		}
	} while (input);

}





void Targeted_Lookups(int input)
{
	int input1 = 1;
	do
	{
		//�����ض��鼮��Ϣ
		char information[Book_Name_Length] = { 0 };
		system("cls");
		printf("**************************************\n");
		printf("**********      ����0����      *******\n");
		printf("**************************************\n");
		printf("**********   �����������Ϣ��  *******\n");
		printf("**************************************\n");
		printf("�����룺");
		scanf("%s", information);

		//�ж��Ƿ��˳�
		if (strcmp(information, "0") == 0)
			break;

		//��ѯ�鼮����
		int Books_Num = 0;
		while (books[Books_Num].Id != 0)
			Books_Num++;

		//���ض��鼮��Ϣ�����鼮����ӡ
		system("cls");
		printf("id ����                ����              �����               ���浥λ        ����ʱ��  ������� �۸�\n");
		printf("---------------------------------------------------------------------------------------------------------\n");
		switch (input)
		{
		case 2://������

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Name, information) == 0)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 3://������

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].author, information) == 0)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 4://�������

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Classification, information) == 0)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 5://�����浥λ

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Publisher, information) == 0)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 6://������ʱ��
		{
			int year = atoi(information);
			for (int i = 0; i < Books_Num; i++)
			{
				if (books[i].Year == year)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;
		}
		}
		printf("---------------------------------------------------------------------------------------------------------\n");
		printf("����0����\n");
		scanf("%d", &input1);
	} while (1);
}





void Change_Books_menu()
{
	int input = 1;
	do
	{
		system("cls");
		printf("**************************************\n");
		printf("**********  1. �����鼮        *******\n");
		printf("**********  2. ɾ���鼮        *******\n");
		printf("**********  3. �޸��鼮        *******\n");
		printf("**********  0. ����            *******\n");
		printf("**************************************\n");
		printf("�����룺");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			New_Books();
			break;

		case 2:

			Delete_Books();
			break;

		case 3:

			Change_Books();
			break;

		case 0:

			break;

		default:

			printf("������󣡣�������\a\n");
			Sleep(1500);
			input = 1;
			break;

		}
	} while (input);
}





void New_Books()
{
	char Name[Book_Name_Length] = { 0 };
	char author[Author_Name_Length] = { 0 };
	char Classification[Classification_Length] = { 0 };
	char Publisher[Publisher_Length] = { 0 };
	int Year = 0;
	int Inventory_quantity = 0;
	float Price = 0;
	do
	{
		system("cls");
		printf("**************************************\n");
		printf("**********      ����0����      *******\n");
		printf("**************************************\n");

		printf("******* ������������");
		scanf("%s", Name);

		if (strcmp(Name, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("******* ���������ߣ�");
		scanf("%s", author);

		if (strcmp(author, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("***** ���������ţ�");
		scanf("%s", Classification);

		if (strcmp(Classification, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("*** ��������浥λ��");
		scanf("%s", Publisher);

		if (strcmp(Publisher, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("*** ���������ʱ�䣺");
		scanf("%d", &Year);

		if (Year == 0)
			break;

		printf("*** ��������������");
		scanf("%d", &Inventory_quantity);

		if (Inventory_quantity == 0)
			break;

		printf("******* ������۸�");
		scanf("%f", &Price);

		if (Price == 0)
			break;

		while (1)
		{
			int input1 = 1;
			system("cls");
			printf("**************************************\n");
			printf("********  ȷ��Ҫ���������Ϣ��******\n");
			printf("**************************************\n");
			printf("****** ������%s\n", Name);
			printf("****** ���ߣ�%s\n", author);
			printf("**** ����ţ�%s\n", Classification);
			printf("** ���浥λ��%s\n", Publisher);
			printf("** ����ʱ�䣺%d\n", Year);
			printf("** ���������%d\n", Inventory_quantity);
			printf("****** �۸�%f\n", Price);
			printf("**************************************\n");
			printf("********  1. ȷ��  **  0. ȡ��  ******\n");
			printf("**************************************\n");
			printf("�����룺");
			scanf("%d", &input1);

			if (input1 == 0)//�ж��Ƿ񷵻�
				break;

			else if (input1 == 1)//���������鼮
			{
				//��ѯ�鼮����
				int Books_Num = 0;
				while (books[Books_Num].Id != 0)
					Books_Num++;

				//ȷ������鼮
				books[Books_Num].Id = Books_Num + 1;
				strcpy(books[Books_Num].Name, Name);
				strcpy(books[Books_Num].author, author);
				strcpy(books[Books_Num].Classification, Classification);
				strcpy(books[Books_Num].Publisher, Publisher);
				books[Books_Num].Year = Year;
				books[Books_Num].Inventory_quantity = Inventory_quantity;
				books[Books_Num].Price = Price;

				printf("��ӳɹ���\n");
				Sleep(1500);
				break;
			}
			else
			{
				printf("������󣡣�������\a\n");
				Sleep(1500);
			}
		}
	} while (1);
}





void Delete_Books()
{
	char input[Book_Name_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("**************************************\n");
		printf("**********      ����0����      *******\n");
		printf("**************************************\n");
		printf("*** ��������Ҫɾ����������");
		scanf("%s", input);

		if (strcmp(input, "0") == 0)//�ж��Ƿ񷵻�
			break;
		
		//�ҵ����鼮���±�
		int i = 0;
		int find_flag = -1;//δ�ҵ�Ϊ-1, �ҵ���Ϊ���������±�
		while(books[i].Id != 0)
		{
			if (strcmp(input, books[i].Name) == 0)
			{
				find_flag = i;
				break;
			}
			i++;
		}

		//�ж��Ƿ��ҵ�
		if (find_flag == -1)//û�ҵ�
		{
			printf("δ���ָ��鼮����\a\n");
			Sleep(1500);
		}

		while (find_flag != -1)//�ҵ���
		{
			int input1 = 0;
			system("cls");
			printf("**************************************\n");
			printf("*******  ȷ��ɾ�������鼮��Ϣ��  *****\n");
			printf("**************************************\n");
			printf("****** ������%s\n", books[i].Name);
			printf("****** ���ߣ�%s\n", books[i].author);
			printf("**** ����ţ�%s\n", books[i].Classification);
			printf("** ���浥λ��%s\n", books[i].Publisher);
			printf("** ����ʱ�䣺%d\n", books[i].Year);
			printf("** ���������%d\n", books[i].Inventory_quantity);
			printf("****** �۸�%f\n", books[i].Price);
			printf("**************************************\n");
			printf("********  1. ȷ��  **  0. ȡ��  ******\n");
			printf("**************************************\n");
			printf("�����룺");
			scanf("%d", &input1);

			if (input1 == 0)//�ж��Ƿ��˳�
				break;

			else if (input1 == 1)//����ɾ���鼮
			{
				do
				{
					strcpy(books[find_flag].Name, books[find_flag + 1].Name);
					strcpy(books[find_flag].author, books[find_flag + 1].author);
					strcpy(books[find_flag].Classification, books[find_flag + 1].Classification);
					strcpy(books[find_flag].Publisher, books[find_flag + 1].Publisher);
					books[find_flag].Year = books[find_flag + 1].Year;
					books[find_flag].Inventory_quantity = books[find_flag + 1].Inventory_quantity;
					books[find_flag].Price = books[find_flag + 1].Price;
					find_flag++;
				} while (books[find_flag].Id != 0);
				books[find_flag - 1].Id = 0;//ɾ��β������Id

				printf("ɾ���ɹ���\n");
				Sleep(1500);
				break;
			}
			else
			{
				printf("������󣡣�������\a\n");
				Sleep(1500);
			}
		}
	}
}





void Change_Books()
{
	char input[Book_Name_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("**************************************\n");
		printf("**********      ����0����      *******\n");
		printf("**************************************\n");
		printf("*** ��������Ҫ�޸ĵ�������");
		scanf("%s", input);

		if (strcmp(input, "0") == 0)//�ж��Ƿ񷵻�
			break;

		//�ҵ����鼮���±�
		int i = 0;
		int find_flag = -1;//δ�ҵ�Ϊ-1, �ҵ���Ϊ���������±�
		while (books[i].Id != 0)
		{
			if (strcmp(input, books[i].Name) == 0)
			{
				find_flag = i;
				break;
			}
			i++;
		}

		//�ж��Ƿ��ҵ�
		if (find_flag == -1)//û�ҵ�
		{
			printf("δ���ָ��鼮����\a\n");
			Sleep(1500);
		}

		while (find_flag != -1)//�ҵ���
		{
			int input1 = 0;
			system("cls");
			printf("**************************************\n");
			printf("*******  ����Ҫ�޸�������Щ��Ϣ  *****\n");
			printf("**************************************\n");
			printf("****** 1. ������%s\n", books[find_flag].Name);
			printf("****** 2. ���ߣ�%s\n", books[find_flag].author);
			printf("**** 3. ����ţ�%s\n", books[find_flag].Classification);
			printf("** 4. ���浥λ��%s\n", books[find_flag].Publisher);
			printf("** 5. ����ʱ�䣺%d\n", books[find_flag].Year);
			printf("** 6. ���������%d\n", books[find_flag].Inventory_quantity);
			printf("****** 7. �۸�%f\n", books[find_flag].Price);
			printf("****** 0. ����\n");
			printf("**************************************\n");
			printf("�����룺");
			scanf("%d", &input1);

			char* Be_changed_str = NULL;
			char change_str[Book_Name_Length] = { 0 };
			int* Be_changed_num = NULL;
			int change_num = 0;
			float* Be_changed_float = NULL;
			float change_float = 0;

			//�ж��Ƿ񷵻صı�ʶ��,1Ϊ�޸ĳɹ���0Ϊ�޸�ʧ�ܷ���
			int change_flag = 1;

			switch (input1)
			{
			case 0://�ж��Ƿ񷵻�

				break;

			case 1:
			{
				Be_changed_str = books[find_flag].Name;
				break;
			}
			case 2:
			{
				Be_changed_str = books[find_flag].author;
				break;
			}
			case 3:
			{
				Be_changed_str = books[find_flag].Classification;
				break;
			}
			case 4:
			{
				Be_changed_str = books[find_flag].Publisher;
				break;
			}
			case 5:
			{
				Be_changed_num = &books[find_flag].Year;
				break;
			}
			case 6:
			{
				Be_changed_num = &books[find_flag].Inventory_quantity;
				break;
			}
			case 7:
			{
				Be_changed_float = &books[find_flag].Price;
				break;
			}
			default:
				
				printf("������󣡣�������\a\n");
				Sleep(1500);
				break;

			}

			if (input1 >= 1 && input1 <= 4)//�޸��ַ���
			{
				system("cls");
				printf("***************************************\n");
				printf("*******        ����-1����         *****\n");
				printf("***************************************\n");
				printf("*******       �޸�������Ϣ       ******\n");
				printf("***************************************\n");
				printf("*** �޸�ֵ��%s\n", Be_changed_str);
				printf("***************************************\n");
				printf("*** �޸�Ϊ��");
				scanf("%s", change_str);

				if (strcmp(change_str, "-1") == 0)//�˳�����
					change_flag = 0;

				if (change_flag == 1)//ȷ���޸�
				{
					strcpy(Be_changed_str, change_str);
					printf("�޸ĳɹ���\n");
					Sleep(1500);
				}
			}
			else if (input1 >= 5 && input1 <= 6)//�޸�����
			{
				system("cls");
				printf("***************************************\n");
				printf("*******        ����-1����         *****\n");
				printf("***************************************\n");
				printf("*******       �޸�������Ϣ       ******\n");
				printf("***************************************\n");
				printf("*** �޸�ֵ��%d\n", *Be_changed_num);
				printf("***************************************\n");
				printf("*** �޸�Ϊ��");
				scanf("%d", &change_num);

				if (change_num == -1)
					change_flag = 0;

				if (change_flag == 1)//ȷ���޸�
				{
					*Be_changed_num = change_num;
					printf("�޸ĳɹ���\n");
					Sleep(1500);
				}
			}
			else if (input1 == 7)//�޸ĸ�����
			{
				system("cls");
				printf("***************************************\n");
				printf("*******        ����-1����         *****\n");
				printf("***************************************\n");
				printf("*******       �޸�������Ϣ       ******\n");
				printf("***************************************\n");
				printf("*** �޸�ֵ��%f\n", *Be_changed_float);
				printf("***************************************\n");
				printf("*** �޸�Ϊ��");
				scanf("%f", &change_float);

				if (change_float == -1)
					change_flag = 0;

				if (change_flag == 1)//ȷ���޸�
				{
					*Be_changed_float = change_float;
					printf("�޸ĳɹ���\n");
					Sleep(1500);
				}
			}
			else
				break;
		}
	}
}





void New_User()
{
	while (1)
	{
		char Account[User_Account_Length] = { 0 };
		char Password[User_Account_Length] = { 0 };
		system("cls");
		printf("**************************************\n");
		printf("**********      ����0����    *********\n");
		printf("**************************************\n");
		printf("*** ����������ѧ���˻���");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//�ж��Ƿ��˳�
			break;

		int New_flag = 1;//����Ƿ�ɴ����û���־

		//��ѯ�˻�����
		int count = 0;
		while (strcmp(User_Account[count][0], "\0") != 0)//����Ϊ��λʱ
			count++;

		if (count == User_Num)//����������ͼ���ͳ���������ʱ
		{
			printf("��Ǹ����ͼ��ݿɴ����û������Ѵ�����\a\n");
			Sleep(1500);
			break;
		}

		//����˻����Ƿ��ظ�
		int i = 0;
		for (i; i < count; i++)
		{
			if (strcmp(User_Account[i][0], Account) == 0)//���ظ�
			{
				printf("���˻��Ѵ��ڣ���������\a\n");
				Sleep(1500);
				New_flag = 0;
			}
		}
		
		while (New_flag)//����־��Ϊ0���������
		{
			printf("**************************************\n");
			printf("*** ����������ѧ�����룺");
			scanf("%s", Password);

			if (strcmp(Password, "0") == 0)//�ж��Ƿ��˳�
				break;

			char Password1[User_Account_Length] = { 0 };
			printf("**************************************\n");
			printf("*** ���ٴ�����һ�����룺");
			scanf("%s", Password1);

			if (strcmp(Password1, "0") == 0)//�ж��Ƿ��˳�
				break;

			//�Ƚ���������������Ƿ���ͬ
			if (strcmp(Password, Password1) != 0)//����ͬ
			{
				printf("�������벻��ͬ����������\a\n");
				Sleep(1500);
			}
			else//��ͬ��ȷ���޸�
			{
				strcpy(User_Account[count][0], Account);
				strcpy(User_Account[count][1], Password);

				printf("**************************************\n");
				printf("�����ɹ���\n");
				Sleep(1500);
				break;
			}
		}
	}
}





void Delete_User()
{
	char Account[User_Account_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("**************************************\n");
		printf("**********     ����0�˳�     *********\n");
		printf("**************************************\n");
		printf("** ������Ҫɾ�����û�����");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//�ж��Ƿ��˳�
			break;

		//�ҵ����û�
		int count = 0;
		int i = -1;//�ҵ��û��ı�־���ҵ�Ϊ�û��±꣬û�ҵ�Ϊ-1
		while (strcmp(User_Account[count][0], "\0") != 0)
		{
			if (strcmp(User_Account[count][0], Account) == 0)//�ҵ���
			{
				i = count;
				break;
			}
			count++;
		}

		if (i == -1)//���û�ҵ�
		{
			printf("δ�ҵ����û�����������\a\n");
			Sleep(1500);
		}

		while (i != -1)//���ҵ���
		{
			system("cls");
			printf("**************************************\n");
			printf("** ȷ��Ҫɾ�����û���%s\n", User_Account[i][0]);
			printf("**************************************\n");
			printf("****** 1. ȷ��  ******* 0. ȡ�� ******\n");
			printf("**************************************\n");
			printf("�����룺");
			int input = 0;
			scanf("%d", &input);

			switch (input)
			{
			case 0:

				i = -1;//�˳���־
				break;

			case 1://ȷ��ɾ��

				do
				{
					strcpy(User_Account[i][0], User_Account[i + 1][0]);
					strcpy(User_Account[i][1], User_Account[i + 1][1]);
					i++;
				} while (strcmp(User_Account[i][0], "\0") != 0);//һֱ�滻��Ϊ��

				printf("ɾ���ɹ���\n");
				Sleep(1500);
				return;

			default:

				printf("������󣡣�������\a\n");
				Sleep(1500);
				break;

			}
		}
	}
}





void Check_User_information()
{
	int input = 1;
	do
	{
		system("cls");
		printf("******************************************\n");
		printf("**********  1. ��ѯ���û���Ϣ     ********\n");
		printf("**********  2. ��ѯ���˽軹����Ϣ ********\n");
		printf("**********  3. �޸��û�����       ********\n");
		printf("**********  0. �˳�               ********\n");
		printf("******************************************\n");
		printf("��ѡ��");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			Check_All_User_information();
			break;

		case 2:

			Check_User_Borrow_Return();
			break;

		case 3:

			Change_User_Password();
			break;

		case 0:

			break;

		default:

			printf("������󣡣�������\a\n");
			Sleep(1500);
			break;

		}
	} while (input);
}





void Check_All_User_information()
{
	//ͳ���û�����
	int count = 0;
	while (strcmp(User_Account[count][0], "\0") != 0)
		count++;

	system("cls");
	printf("******************************************\n");
	for (int i = 0; i < count; i++)
	{
		printf("****** �û�����%s\n", User_Account[i][0]);
		printf("******   ���룺%s\n", User_Account[i][1]);
		printf("******************************************\n");
	}
	printf("*********       ����0����     ************\n");
	printf("******************************************\n");
	int input1 = 0;
	scanf("%d", &input1);
}





void Check_User_Borrow_Return()
{
	char Account[User_Account_Length] = { 0 };

	//�û�������Ҳ˵���־
	int input = 1;

	//�û��±�
	int i = 0;

	do
	{
		system("cls");
		printf("******************************************\n");
		printf("**********       ����0����       *********\n");
		printf("******************************************\n");
		printf("*** ������Ҫ���ҵ��û���:");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//�ж��Ƿ��˳�
			return;

		//���Ҹ��û��Ƿ���ڲ��ҵ��±�
		i = 0;
		while (strcmp(User_Account[i][0], "\0") == 0)
		{
			if (strcmp(User_Account[i][0], Account) == 0)//�ж��Ƿ��ҵ�
				break;

			else if (strcmp(User_Account[i][0], "\0") == 0)//�ж��Ƿ�δ�ҵ�
			{
				printf("δ�ҵ����û�����������\a\n");
				input = 0;
				break;
			}
			i++;
		}
	} while (!input);//��Ϊ0����������
	
	//�����ѯ�˵�
	Query_Information(Account, i);
}





void Change_User_Password()
{
	char Account[User_Account_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("******************************************\n");
		printf("**********       ����0����        ********\n");
		printf("******************************************\n");
		printf("** ������Ҫ�޸�������û�����");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//�鿴�Ƿ��˳�
			break;

		//�ҵ����û�
		int count = 0;
		int i = -1;//�ҵ��û��ı�־���ҵ�Ϊ�û��±꣬û�ҵ�Ϊ-1
		while (strcmp(User_Account[count][0], "\0") != 0)
		{
			if (strcmp(User_Account[count][0], Account) == 0)//�ҵ���
			{
				i = count;
				break;
			}
			count++;
		}
		if (i == -1)//δ�ҵ�
		{
			printf("δ�ҵ����û�����������\a\n");
			Sleep(1500);
		}
		else if (i != -1)//�ҵ���
			Change_Password(i);
	}
}





void Check_All_Borrow()
{
	//��ѯ��������
	int count = 0;
	while (strcmp(User_Account[count][0], "\0") != 0)//����Ϊ��ʱ
		count++;

	//�������˵Ľ����¼����ͬһ���ṹ��������
	struct ALL
	{
		char account[User_Account_Length];
		time_t time;
		char name[Book_Name_Length];
	}allBorrow[Borrowing_Records];
	//�ṹ�������λ�±�,�Լ�ͳ���ܼ�¼��
	int empty = 0;
	for (int i = 0; i < count; i++)//��¼��i����
	{
		int j = 0;//��i���˵Ľ�ĵ�j����
		while (borrow[i].all_borrow_book[j].time != 0)//����Ϊ��λʱ������ṹ������
		{
			strcpy(allBorrow[empty].account, borrow[i].Account);
			allBorrow[empty].time = borrow[i].all_borrow_book[j].time;
			strcpy(allBorrow[empty].name, borrow[i].all_borrow_book[j].name);	
			empty++;
			j++;
		}
	}

	//���ṹ�������е�ÿ�������¼��ʱ����������
	for (int i = 0; i < empty - 1; i++)
	{
		for (int j = 0; j < empty - i - 1; j++)
		{
			if (allBorrow[j].time > allBorrow[j + 1].time)//�ҵ����ֵ�����ηŵ������
			{
				//�����û���
				char tmp1[User_Account_Length];
				strcpy(tmp1, allBorrow[j].account);
				strcpy(allBorrow[j].account, allBorrow[j + 1].account);
				strcpy(allBorrow[j + 1].account, tmp1);
				
				//��������ʱ��
				time_t tmp = allBorrow[j].time;
				allBorrow[j].time = allBorrow[j + 1].time;
				allBorrow[j + 1].time = tmp;

				//���������鼮
				char tmp2[Book_Name_Length];
				strcpy(tmp2, allBorrow[j].name);
				strcpy(allBorrow[j].name, allBorrow[j + 1].name);
				strcpy(allBorrow[j + 1].name, tmp2);
			}
		}
	}

	system("cls");
	printf("**************************************\n");
	printf("**********  ����Ϊ��ʱ����� *********\n");
	printf("**************************************\n");
	for (int i = 0; i < empty; i++)
	{
		printf("*** �û�����%s\n", allBorrow[i].account);
		time_t Time = allBorrow[i].time;
		struct tm* TIME = localtime(&Time);
		printf("*** ����ʱ�䣺%d-%02d-%02d %02d:%02d:%02d\n",
			TIME->tm_year + 1900,  //��
			TIME->tm_mon + 1,      //�� 
			TIME->tm_mday,         //��
			TIME->tm_hour,         //ʱ
			TIME->tm_min,          //��
			TIME->tm_sec);         //��
		printf("*** �������ƣ�%s\n", allBorrow[i].name);
		printf("**************************************\n");
	}	
	printf("**********     ����0����     *********\n");
	printf("**************************************\n");
	int input = 0;
	scanf("%d", &input);
}





void Check_All_Return()
{
	//��ѯ��������
	int count = 0;
	while (strcmp(User_Account[count][0], "\0") != 0)//����Ϊ��ʱ
		count++;

	//�������˵Ļ����¼����ͬһ���ṹ��������
	struct ALL
	{
		char account[User_Account_Length];
		time_t time;
		char name[Book_Name_Length];
	}allReturn[Borrowing_Records];
	//�ṹ�������λ�±�,�Լ�ͳ���ܼ�¼��
	int empty = 0;
	for (int i = 0; i < count; i++)//��¼��i����
	{
		int j = 0;//��i���˵Ļ��ĵ�j����
		while (borrow[i].Return_book[j].time != 0)//����Ϊ��λʱ������ṹ������
		{
			strcpy(allReturn[empty].account, borrow[i].Account);
			allReturn[empty].time = borrow[i].Return_book[j].time;
			strcpy(allReturn[empty].name, borrow[i].Return_book[j].name);
			empty++;
			j++;
		}
	}

	//���ṹ�������е�ÿ�������¼��ʱ����������
	for (int i = 0; i < empty - 1; i++)
	{
		for (int j = 0; j < empty - i - 1; j++)
		{
			if (allReturn[j].time > allReturn[j + 1].time)//�ҵ����ֵ�����ηŵ������
			{
				//�����û���
				char tmp1[User_Account_Length];
				strcpy(tmp1, allReturn[j].account);
				strcpy(allReturn[j].account, allReturn[j + 1].account);
				strcpy(allReturn[j + 1].account, tmp1);

				//��������ʱ��
				time_t tmp = allReturn[j].time;
				allReturn[j].time = allReturn[j + 1].time;
				allReturn[j + 1].time = tmp;

				//���������鼮
				char tmp2[Book_Name_Length];
				strcpy(tmp2, allReturn[j].name);
				strcpy(allReturn[j].name, allReturn[j + 1].name);
				strcpy(allReturn[j + 1].name, tmp2);
			}
		}
	}

	system("cls");
	printf("**************************************\n");
	printf("**********  ����Ϊ��ʱ����� *********\n");
	printf("**************************************\n");
	for (int i = 0; i < empty; i++)
	{
		printf("*** �û�����%s\n", allReturn[i].account);
		time_t Time = allReturn[i].time;
		struct tm* TIME = localtime(&Time);
		printf("*** ����ʱ�䣺%d-%02d-%02d %02d:%02d:%02d\n",
			TIME->tm_year + 1900,  //��
			TIME->tm_mon + 1,      //�� 
			TIME->tm_mday,         //��
			TIME->tm_hour,         //ʱ
			TIME->tm_min,          //��
			TIME->tm_sec);         //��
		printf("*** �������ƣ�%s\n", allReturn[i].name);
		printf("**************************************\n");
	}
	printf("**********     ����0����     *********\n");
	printf("**************************************\n");
	int input = 0;
	scanf("%d", &input);
}