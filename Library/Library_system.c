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





void Query_Information(char Account[User_Account_Length])
{
	int input = 1;
	do
	{
		int i = 0;
		while (1)
		{
			if (strcmp(Account, borrow[i].Account) == 0)
				break;//找到用户账号下标
			else
				i++;
		}

		system("cls");
		printf("**************************************\n");
		printf("**********   用户名：%s\n", Account);
		printf("**********   借书记录： **************\n");
		int j = 0;
		while (borrow[i].borrow_book[j].time != 0)
		{
			time_t Time = borrow[i].borrow_book[j].time;
			struct tm* TIME = localtime(&Time);
			printf("**********   借书时间：%d-%02d-%02d %02d:%02d:%02d\n",
				TIME->tm_year + 1900,  //年
				TIME->tm_mon + 1,      //月 
				TIME->tm_mday,         //日
				TIME->tm_hour,         //时
				TIME->tm_min,          //分
				TIME->tm_sec);         //秒
			printf("**********   借书名称：%s\n", borrow[i].borrow_book[j].name);
			printf("**************************************\n");
			j++;
		}
		printf("**********   返回输入0  **************\n");
		printf("**************************************\n");

	} while (input);
}