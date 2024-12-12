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
	int input = 0;
	do
	{
		system("cls");
		printf("*用户：%s\n", Account);
		printf("********************************************\n");
		printf("***********      查询菜单     **************\n");
		printf("********************************************\n");
		printf("***********  1. 查询借书记录  **************\n");
		printf("***********  2. 查询还书记录  **************\n");
		printf("***********  3. 查询未还书籍  **************\n");
		printf("***********  0. 返回          **************\n");
		printf("********************************************\n");
		printf("请输入：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			Borrow_information(Account);
			break;

		case 2:
			break;
		case 3:
			break;
		case 0:

			break;

		default:

			printf("输入错误！！请重输\a\n");
			input = 1;
			break;

		}
	} while (input);
}





void Borrow_information(char Account[User_Account_Length])
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
		printf("********************************************\n");
		printf("**********   用户名：%s\n", Account);
		printf("**********   借书记录： ********************\n");
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
			printf("********************************************\n");
			j++;
		}
		printf("**********   返回输入0  ********************\n");
		printf("********************************************\n");
		scanf("%d", &input);
	} while (input);
}





void Check_Books()
{
	int input = 1;
	do
	{
		int i = 0;
		system("cls");
		printf("id 名称                作者              分类号               出版单位        出版时间  库存数量 价格\n");
		printf("---------------------------------------------------------------------------------------------------------\n");
		while (books[i].Id != 0)
		{
			printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			i++;
		}
		printf("---------------------------------------------------------------------------------------------------------\n");
		printf("返回请输入0\n");
		scanf("%d", &input);
		if (input != 0)
		{
			printf("输入错误！！请重输\a\n");
			Sleep(1500);
			input = 1;
		}
	} while (input);
}





int Is_Timeout(char book_name[Book_Name_Length], int Num_User_Account)
{
	//获取现在的时间
	time_t Now_Time = time(NULL);

	//获取当前书本对应借书记录中的下标
	int i = 0;
	while (1)
	{
		if (borrow[Num_User_Account].borrow_book[i].time == 0)//如果未找到，下标i返回为-1
		{
			i = -1;
			break;
		}
		else if (strcmp(borrow[Num_User_Account].borrow_book[i].name, book_name) == 0)//如果找到了，即返回i
			break;
		else
			i++;
	}

	//获取用户以及对应借阅的书本时间
	time_t Borrow_Time = borrow[Num_User_Account].borrow_book[i].time;

	//比较现在的时间与借书时间的差值是否超过预设值
	if (Now_Time - Borrow_Time > Timeout)//如果超时了
		return 1;//返回值为1
	else//若没有超时
		return 0;//返回值为0
}