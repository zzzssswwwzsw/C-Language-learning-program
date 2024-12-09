#include "library.h"


int User_or_Administrator()
{
	int input = 0;
	do
	{
		system("cls");
		printf("**************************************\n");
		printf("**********   以什么身份进入  *********\n");
		printf("**************************************\n");
		printf("**********     1.  用户      *********\n");
		printf("**********     2. 管理员     *********\n");
		printf("**********     0. 退出       *********\n");
		printf("**************************************\n");
		printf("请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		case 2:
		case 0:

			return input;//返回选择的数字
			break;

		default:

			input = 0;//令input=0重复循环
			printf("输入错误！！请重输\a\n");
			Sleep(1500);
			break;

		}
	} while (!input);//当input=0时重复循环重新输入
}