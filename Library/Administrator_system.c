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
		printf("**********  1. 查询书籍信息  *********\n");
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
	do
	{
		system("cls");
		printf("**************************************\n");
		printf("**********  1. 查询书籍列表    *******\n");
		printf("**********  2. 按书名查询      *******\n");
		printf("**********  3. 按作者查询      *******\n");
		printf("**********  4. 按分类号查询    *******\n");
		printf("**********  5. 按出版单位查询  *******\n");
		printf("**********  6. 按出版时间查询  *******\n");
		printf("**********  0. 返回            *******\n");
		printf("**************************************\n");
		printf("请输入：");
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

			printf("输入错误！！请重输\a\n");
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
		//输入特定书籍信息
		char information[Book_Name_Length] = { 0 };
		system("cls");
		printf("**************************************\n");
		printf("**********      输入0返回      *******\n");
		printf("**************************************\n");
		printf("**********   请输入查找信息：  *******\n");
		printf("**************************************\n");
		printf("请输入：");
		scanf("%s", information);

		//判断是否退出
		if (strcmp(information, "0") == 0)
			break;

		//查询书籍数量
		int Books_Num = 0;
		while (books[Books_Num].Id != 0)
			Books_Num++;

		//按特定书籍信息查找书籍并打印
		system("cls");
		printf("id 名称                作者              分类号               出版单位        出版时间  库存数量 价格\n");
		printf("---------------------------------------------------------------------------------------------------------\n");
		switch (input)
		{
		case 2://按书名

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Name, information) == 0)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 3://按作者

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].author, information) == 0)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 4://按分类号

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Classification, information) == 0)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 5://按出版单位

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Publisher, information) == 0)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;

		case 6://按出版时间
		{
			int year = atoi(information);
			for (int i = 0; i < Books_Num; i++)
			{
				if (books[i].Year == year)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", books[i].Id, books[i].Name, books[i].author, books[i].Classification, books[i].Publisher, books[i].Year, books[i].Inventory_quantity, books[i].Price);
			}
			break;
		}
		}
		printf("---------------------------------------------------------------------------------------------------------\n");
		printf("输入0返回\n");
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
		printf("**********  1. 新增书籍        *******\n");
		printf("**********  2. 删除书籍        *******\n");
		printf("**********  3. 修改书籍        *******\n");
		printf("**********  0. 返回            *******\n");
		printf("**************************************\n");
		printf("请输入：");
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

			printf("输入错误！！请重输\a\n");
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
		printf("**********      输入0返回      *******\n");
		printf("**************************************\n");

		printf("***请输入书名：");
		scanf("%s", Name);

		if (strcmp(Name, "0") == 0)//判断是否返回
			break;

		printf("***请输入作者：");
		scanf("%s", author);

		if (strcmp(author, "0") == 0)//判断是否返回
			break;

		printf("***请输入分类号：");
		scanf("%s", Classification);

		if (strcmp(Classification, "0") == 0)//判断是否返回
			break;

		printf("***请输入出版单位：");
		scanf("%s", Publisher);

		if (strcmp(Publisher, "0") == 0)//判断是否返回
			break;

		printf("**请输入出版时间：");
		scanf("%d", &Year);

		if (Year == 0)
			break;

		printf("**请输入库存数量：");
		scanf("%d", &Inventory_quantity);

		if (Inventory_quantity == 0)
			break;

		printf("**请输入价格：");
		scanf("%f", &Price);

		if (Price == 0)
			break;

		while (1)
		{
			int input1 = 1;
			system("cls");
			printf("**************************************\n");
			printf("********  确认要添加以下信息吗：******\n");
			printf("**************************************\n");
			printf("****** 书名：%s\n", Name);
			printf("****** 作者：%s\n", author);
			printf("**** 分类号：%s\n", Classification);
			printf("** 出版单位：%s\n", Publisher);
			printf("** 出版时间：%d\n", Year);
			printf("** 库存数量：%d\n", Inventory_quantity);
			printf("****** 价格：%f\n", Price);
			printf("**************************************\n");
			printf("********  1. 确认  **  0. 取消  ******\n");
			printf("**************************************\n");
			printf("请输入：");
			scanf("%d", &input1);

			if (input1 == 0)//判断是否返回
				break;

			else if (input1 == 1)//进行新增书籍
			{
				//查询书籍数量
				int Books_Num = 0;
				while (books[Books_Num].Id != 0)
					Books_Num++;

				//确认添加书籍
				books[Books_Num].Id = Books_Num + 1;
				strcpy(books[Books_Num].Name, Name);
				strcpy(books[Books_Num].author, author);
				strcpy(books[Books_Num].Classification, Classification);
				strcpy(books[Books_Num].Publisher, Publisher);
				books[Books_Num].Year = Year;
				books[Books_Num].Inventory_quantity = Inventory_quantity;
				books[Books_Num].Price = Price;

				printf("添加成功！\n");
				Sleep(1500);
				break;
			}
			else
			{
				printf("输入错误！！请重输\a\n");
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
		printf("**********      输入0返回      *******\n");
		printf("**************************************\n");
		printf("***请输入您要删除的书名：");
		scanf("%s", input);

		if (strcmp(input, "0") == 0)//判断是否返回
			break;
		
		//找到该书籍的下标
		int i = 0;
		int find_flag = -1;//未找到为-1, 找到了为该书名的下标
		while(books[i].Id != 0)
		{
			if (strcmp(input, books[i].Name) == 0)
			{
				find_flag = i;
				break;
			}
			i++;
		}

		//判断是否找到
		if (find_flag == -1)//没找到
		{
			printf("未发现该书籍！！\a\n");
			Sleep(1500);
		}

		while (find_flag != -1)//找到了
		{
			int input1 = 0;
			system("cls");
			printf("**************************************\n");
			printf("*******  确认删除以下书籍信息吗  *****\n");
			printf("**************************************\n");
			printf("** 书名：    %s\n", books[i].Name);
			printf("** 作者：    %s\n", books[i].author);
			printf("** 分类号：  %s\n", books[i].Classification);
			printf("** 出版单位：%s\n", books[i].Publisher);
			printf("** 出版时间：%d\n", books[i].Year);
			printf("** 库存数量：%d\n", books[i].Inventory_quantity);
			printf("** 价格：    %f\n", books[i].Price);
			printf("**************************************\n");
			printf("********  1. 确认  **  0. 取消  ******\n");
			printf("**************************************\n");
			printf("请输入：");
			scanf("%d", &input1);

			if (input1 == 0)//判断是否退出
				break;

			else if (input1 == 1)//进行删除书籍
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
				books[find_flag - 1].Id = 0;//删除尾部空余Id

				printf("删除成功！\n");
				Sleep(1500);
				break;
			}
			else
			{
				printf("输入错误！！请重输\a\n");
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
		printf("**********      输入0返回      *******\n");
		printf("**************************************\n");
		printf("***请输入您要修改的书名：");
		scanf("%s", input);

		if (strcmp(input, "0") == 0)//判断是否返回
			break;

		//找到该书籍的下标
		int i = 0;
		int find_flag = -1;//未找到为-1, 找到了为该书名的下标
		while (books[i].Id != 0)
		{
			if (strcmp(input, books[i].Name) == 0)
			{
				find_flag = i;
				break;
			}
			i++;
		}

		//判断是否找到
		if (find_flag == -1)//没找到
		{
			printf("未发现该书籍！！\a\n");
			Sleep(1500);
		}

		while (find_flag != -1)//找到了
		{
			int input1 = 0;
			system("cls");
			printf("**************************************\n");
			printf("*******  请问要修改以下哪些信息  *****\n");
			printf("**************************************\n");
			printf("** 1. 书名：    %s\n", books[i].Name);
			printf("** 2. 作者：    %s\n", books[i].author);
			printf("** 3. 分类号：  %s\n", books[i].Classification);
			printf("** 4. 出版单位：%s\n", books[i].Publisher);
			printf("** 5. 出版时间：%d\n", books[i].Year);
			printf("** 6. 库存数量：%d\n", books[i].Inventory_quantity);
			printf("** 7. 价格：    %f\n", books[i].Price);
			printf("** 0. 返回");
			printf("**************************************\n");
			printf("请输入：");
			scanf("%d", &input1);

			if (input1 == 0)//判断是否返回
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
				printf("输入错误！！请重输\a\n");
				Sleep(1500);
			}
		}
	}
}