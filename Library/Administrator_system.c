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





void Administrator_menu()
{
	int input = 0;
	do
	{
		system("cls");
		printf("*管理员，你好！***********************\n");
		printf("**************************************\n");
		printf("**********  1. 查询图书信息  *********\n");
		printf("**********  2. 修改书籍信息  *********\n");
		printf("**********  3. 添加新用户    *********\n");
		printf("**********  4. 查看用户信息  *********\n");
		printf("**********  5. 查看借阅信息  *********\n");
		printf("**********  6. 查看归还信息  *********\n");
		printf("**********  0. 退出登录      *********\n");
		printf("**************************************\n");
		printf("请输入：");
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

			printf("输入错误！！请重输\a\n");
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
	printf("**********  1. 查询书籍列表    *******\n");
	printf("**********  2. 按书名查询      *******\n");
	printf("**********  3. 按作者查询      *******\n");
	printf("**********  4. 按分类号查询    *******\n");
	printf("**********  5. 按出版单位查询  *******\n");
	printf("**********  6. 按出版时间查询  *******\n");
	printf("**************************************\n");
}