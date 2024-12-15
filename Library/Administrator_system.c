#include "library.h"





int Administrator_login(char Administrator_Account[2][20])
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
		printf("**********  4. �鿴�û���Ϣ  *********\n");
		printf("**********  5. �鿴������Ϣ  *********\n");
		printf("**********  6. �鿴�黹��Ϣ  *********\n");
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
			break;
		case 4:
			break;
		case 5:
			break;
		case 6:
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
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 3://������

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].author, information) == 0)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 4://�������

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Classification, information) == 0)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 5://�����浥λ

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Publisher, information) == 0)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 6://������ʱ��
		{
			int year = atoi(information);
			for (int i = 0; i < Books_Num; i++)
			{
				if (books[i].Year == year)//�ҵ���
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
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

		printf("***������������");
		scanf("%s", Name);

		if (strcmp(Name, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("***���������ߣ�");
		scanf("%s", author);

		if (strcmp(author, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("***���������ţ�");
		scanf("%s", Classification);

		if (strcmp(Classification, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("***��������浥λ��");
		scanf("%s", Publisher);

		if (strcmp(Publisher, "0") == 0)//�ж��Ƿ񷵻�
			break;

		printf("**���������ʱ�䣺");
		scanf("%d", &Year);

		if (Year == 0)
			break;

		printf("**��������������");
		scanf("%d", &Inventory_quantity);

		if (Inventory_quantity == 0)
			break;

		printf("**������۸�");
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
		printf("***��������Ҫɾ����������");
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
			printf("** ������    %s\n", books[i].Name);
			printf("** ���ߣ�    %s\n", books[i].author);
			printf("** ����ţ�  %s\n", books[i].Classification);
			printf("** ���浥λ��%s\n", books[i].Publisher);
			printf("** ����ʱ�䣺%d\n", books[i].Year);
			printf("** ���������%d\n", books[i].Inventory_quantity);
			printf("** �۸�    %f\n", books[i].Price);
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
		printf("***��������Ҫ�޸ĵ�������");
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
			printf("** 1. ������    %s\n", books[i].Name);
			printf("** 2. ���ߣ�    %s\n", books[i].author);
			printf("** 3. ����ţ�  %s\n", books[i].Classification);
			printf("** 4. ���浥λ��%s\n", books[i].Publisher);
			printf("** 5. ����ʱ�䣺%d\n", books[i].Year);
			printf("** 6. ���������%d\n", books[i].Inventory_quantity);
			printf("** 7. �۸�    %f\n", books[i].Price);
			printf("** 0. ����");
			printf("**************************************\n");
			printf("�����룺");
			scanf("%d", &input1);

			if (input1 == 0)//�ж��Ƿ񷵻�
				break;

			else if (input1 >= 1 && input1 <= 7)
			{
				switch (input1)
				{
				case 1:
					break;
				case 2:
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					break;
				case 6:
					break;
				case 7:
					break;
				}
			}
			else
			{
				printf("������󣡣�������\a\n");
				Sleep(1500);
			}
		}
	}
}