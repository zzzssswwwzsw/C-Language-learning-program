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
		printf("**********  1. ��ѯͼ����Ϣ  *********\n");
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

	system("cls");
	printf("**************************************\n");
	printf("**********  1. ��ѯ�鼮�б�    *******\n");
	printf("**********  2. ��������ѯ      *******\n");
	printf("**********  3. �����߲�ѯ      *******\n");
	printf("**********  4. ������Ų�ѯ    *******\n");
	printf("**********  5. �����浥λ��ѯ  *******\n");
	printf("**********  6. ������ʱ���ѯ  *******\n");
	printf("**************************************\n");
}