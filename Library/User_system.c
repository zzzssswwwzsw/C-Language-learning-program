#include "library.h"




int User_choose(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account)
{
	int input = 0;
	do
	{
		system("cls");
		printf("*用户*********************************\n");
		printf("**********   欢迎来到图书馆  *********\n");
		printf("**************************************\n");
		printf("**********      1. 登录     **********\n");
		printf("**********      0. 返回     **********\n");
		printf("**************************************\n");
		printf("**************************************\n");
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:

			return -1;//选择失败，返回值为-1

		case 1:

			//判断是否登录成功
			if (User_login(User_Account, Num_User_Account) != -1)//登录成功
				return 1;//登录成功，返回值为1
			else//登录失败，重新循环
				input = 0;
			break;

		default:

			printf("选择错误！！请重新输入\a\n");
			input = 0;
			break;

		}
	} while (!input);
}





int User_login(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account)
{
	char Account[User_Account_Length] = { 0 };
	char Password[User_Account_Length] = { 0 };

	while (1)
	{
		system("cls");
		printf("*用户*********************************\n");
		printf("********** 请输入账号和密码 **********\n");
		printf("**************************************\n");
		printf("**********    返回请输入0   **********\n");
		printf("**************************************\n");
		printf("********** 请输入账号：");
		scanf("%s", Account);
		printf("********** 请输入密码：");
		scanf("%s", Password);

		if (strcmp(Account, "0") == 0 || strcmp(Password, "0") == 0)//判断是否返回
		{
			return -1;//登录失败，返回值为-1
		}

		//查询账号数量
		int i = 0;
		while (User_Account[i][0][0] != '\0')
			i++;
		//查询账户是否存在
		for (i; i >= 0; i--)
		{
			//查询账户
			if (strcmp(Account, User_Account[i][0]) == 0)
			{
				//查询密码
				if (strcmp(Password, User_Account[i][1]) == 0)
				{
					printf("登录成功！！\n");
					Sleep(1500);
					*Num_User_Account = i;
					return 1;//登陆成功，返回值为1
				}
			}
		}
		//未查询到
		printf("账号或密码错误！！请重新输入\a\n");
		Sleep(1500);
	}
}





void User_menu(char User_own_Account[User_Account_Length], int Num_User_Account)
{
	int input = 0;
	do
	{
		system("cls");
		printf("*用户 %s ，你好！\n", User_own_Account);
		printf("**************************************\n");
		printf("**********  1. 借书         **********\n");
		printf("**********  2. 还书         **********\n");
		printf("**********  3. 查询个人信息 **********\n");
		printf("**********  4. 查看书籍列表 **********\n");
		printf("**********  0. 退出登录     **********\n");
		printf("**************************************\n");
		printf("请选择：");
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

			Query_Information(User_own_Account);
			break;

		case 4:

			Check_Books();
			break;

		case 0://退出登录

			break;

		default:

			printf("输入错误！！请重输\a\n");
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
		printf("****     输入CHECK查看书籍列表     ***\n");
		printf("****           输入0返回           ***\n");
		printf("**************************************\n");
		printf("**************************************\n");
		printf("***    请输入你要借阅的书籍名称    ***\n");
		printf("**************************************\n");
		printf("请输入：");
		scanf("%s", &input);


		//判断是否退出
		if (strcmp(input, "0") == 0)
			break;


		//判断是否要进行查看书籍列表
		if (strcmp(input, "CHECK") == 0)
			Check_Books();

		else
		{
			//统计书的数量
			int books_count = 0;
			while (books[books_count].Id != 0)
				books_count++;

			//查询该书是否存在
			int i = 0;
			int find_flag = -1;//未找到为-1, 找到了为该书名的下标
			for (i; i < books_count; i++)
			{
				if (strcmp(input, books[i].Name) == 0)
					find_flag = i;
			}
			if (find_flag != -1)//find_flag不为-1，找到了
			{
				int input1 = 0;
				do
				{
					//查询书籍存货是否足够
					if (books[find_flag].Inventory_quantity != 0)
					{
						system("cls");
						printf("**************************************\n");
						printf("***         您要找的是否为：       ***\n");
						printf("**************************************\n");
						printf("*** id : %d\n", books[find_flag].Id);
						printf("*** 名称 : %s\n", books[find_flag].Name);
						printf("*** 作者 : %s\n", books[find_flag].author);
						printf("*** 分类号 : %s\n", books[find_flag].Classification);
						printf("*** 出版单位 : %s\n", books[find_flag].Publisher);
						printf("*** 出版时间 : %d\n", books[find_flag].Year);
						printf("*** 库存数量 : %d\n", books[find_flag].Inventory_quantity);
						printf("*** 价格 : %f\n", books[find_flag].Price);
						printf("**************************************\n");
						printf("***     1. 确认  ***  0. 取消      ***\n");
						printf("**************************************\n");
						printf("请输入：");
						scanf("%d", &input1);

						switch (input1)
						{
						case 1://确认借书
						{
							//修改个人借书记录
							int j = 0;
							while (1)
							{
								if (borrow[Num_User_Account].borrow_book[j].time == 0)//如果该位置为空位
								{
									borrow[Num_User_Account].borrow_book[j].time = time(NULL);  //记录借阅时间
									strcpy(borrow[Num_User_Account].borrow_book[j].name, books[find_flag].Name);  //记录书本名称
									break;
								}
								else//查找下一个位置
									j++;
							}

							//修改图书馆库存数量
							books[find_flag].Inventory_quantity--;

							printf("借书成功！！\n");
							Sleep(1500);
							input1 = 0;//退出标识
							break;

						}
						case 0://取消返回

							break;

						default:

							printf("输入错误！！请重输\a\n");
							Sleep(1500);
							input1 = 1;
							break;

						}
					}
					else//书籍存货不足
					{
						system("cls");
						printf("**************************************\n");
						printf("***         您要找的书籍：         ***\n");
						printf("**************************************\n");
						printf("*** id : %d\n", books[find_flag].Id);
						printf("*** 名称 : %s\n", books[find_flag].Name);
						printf("*** 作者 : %s\n", books[find_flag].author);
						printf("*** 分类号 : %s\n", books[find_flag].Classification);
						printf("*** 出版单位 : %s\n", books[find_flag].Publisher);
						printf("*** 出版时间 : %d\n", books[find_flag].Year);
						printf("*** 库存数量 : %d\n", books[find_flag].Inventory_quantity);
						printf("*** 价格 : %f\n", books[find_flag].Price);
						printf("**************************************\n");
						printf("***       目前暂未存货，抱歉！     ***\a\n");
						Sleep(1500);
						input1 = 1;
					}
				} while (input1);
			}
			else//find_flag为-1，未找到
			{
				printf("很抱歉，我们暂时没有此书籍！！\a\n");
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
		printf("****    请输入您要归还的书籍名称：    ****\n");
		printf("**** 重复借阅的书籍将会优先归还先借的 ****\n");
		printf("******************************************\n");
		printf("****             输入0返回            ****\n");
		printf("******************************************\n");
		printf("请输入：");
		scanf("%s", input);

		if (strcmp(input, "0") == 0)//为0时返回
			break;

		//查询是否存在记录
		
		//查询该书是否超时
		Is_Timeout(input, Num_User_Account);
	}
}