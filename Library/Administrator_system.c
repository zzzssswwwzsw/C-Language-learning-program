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