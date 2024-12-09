#include "library.h"


int Administrator_login(char Administrator_Account[2][20])
{
	char Account[20] = { 0 };
	char Password[20] = { 0 };

	while(1)
	{
		system("cls");
		printf("*管理员*******************************\n");
		printf("********** 请输入账号和密码 **********\n");
		printf("**************************************\n");
		printf("**********    返回请输入0   **********\n");
		printf("**************************************\n");
		printf("********** 请输入账号：");
		scanf("%s", Account);
		printf("********** 请输入密码：");
		scanf("%s", Password);

		if (Account[0] == '0' || Password[0] == '0')//判断是否返回
		{
			return 0;//登录失败，返回值为0
		}

		if (strcmp(Account, Administrator_Account[0]) == 0 && strcmp(Password, Administrator_Account[1]) == 0)
		{
			printf("登录成功！！\n");
			Sleep(1500);
			return 1;//登录成功，返回值为1
		}
		else
		{
			printf("账号或密码错误！！请重试\a\n");
			Sleep(1500);
		}
	}
}