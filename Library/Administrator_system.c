#include "library.h"





int Administrator_login()
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
		printf("**********  4. 删除用户      *********\n");
		printf("**********  5. 查看用户信息  *********\n");
		printf("**********  6. 查看借阅信息  *********\n");
		printf("**********  7. 查看归还信息  *********\n");
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

			New_User();
			break;

		case 5:

			Check_User_information();
			break;

		case 4:

			Delete_User();
			break;

		case 6:

			Check_All_Borrow();
			break;

		case 7:

			Check_All_Return();
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
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 3://按作者

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].author, information) == 0)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 4://按分类号

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Classification, information) == 0)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 5://按出版单位

			for (int i = 0; i < Books_Num; i++)
			{
				if (strcmp(books[i].Publisher, information) == 0)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
			}
			break;

		case 6://按出版时间
		{
			int year = atoi(information);
			for (int i = 0; i < Books_Num; i++)
			{
				if (books[i].Year == year)//找到了
					printf("%-3d%-20s%-18s%-20s%-20s%-8d%-8d%-6.2f\n", 
						books[i].Id, 
						books[i].Name, 
						books[i].author, 
						books[i].Classification, 
						books[i].Publisher, 
						books[i].Year, 
						books[i].Inventory_quantity, 
						books[i].Price);
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

		printf("******* 请输入书名：");
		scanf("%s", Name);

		if (strcmp(Name, "0") == 0)//判断是否返回
			break;

		printf("******* 请输入作者：");
		scanf("%s", author);

		if (strcmp(author, "0") == 0)//判断是否返回
			break;

		printf("***** 请输入分类号：");
		scanf("%s", Classification);

		if (strcmp(Classification, "0") == 0)//判断是否返回
			break;

		printf("*** 请输入出版单位：");
		scanf("%s", Publisher);

		if (strcmp(Publisher, "0") == 0)//判断是否返回
			break;

		printf("*** 请输入出版时间：");
		scanf("%d", &Year);

		if (Year == 0)
			break;

		printf("*** 请输入库存数量：");
		scanf("%d", &Inventory_quantity);

		if (Inventory_quantity == 0)
			break;

		printf("******* 请输入价格：");
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
		printf("*** 请输入您要删除的书名：");
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
			printf("****** 书名：%s\n", books[i].Name);
			printf("****** 作者：%s\n", books[i].author);
			printf("**** 分类号：%s\n", books[i].Classification);
			printf("** 出版单位：%s\n", books[i].Publisher);
			printf("** 出版时间：%d\n", books[i].Year);
			printf("** 库存数量：%d\n", books[i].Inventory_quantity);
			printf("****** 价格：%f\n", books[i].Price);
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
		printf("*** 请输入您要修改的书名：");
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
			printf("****** 1. 书名：%s\n", books[find_flag].Name);
			printf("****** 2. 作者：%s\n", books[find_flag].author);
			printf("**** 3. 分类号：%s\n", books[find_flag].Classification);
			printf("** 4. 出版单位：%s\n", books[find_flag].Publisher);
			printf("** 5. 出版时间：%d\n", books[find_flag].Year);
			printf("** 6. 库存数量：%d\n", books[find_flag].Inventory_quantity);
			printf("****** 7. 价格：%f\n", books[find_flag].Price);
			printf("****** 0. 返回\n");
			printf("**************************************\n");
			printf("请输入：");
			scanf("%d", &input1);

			char* Be_changed_str = NULL;
			char change_str[Book_Name_Length] = { 0 };
			int* Be_changed_num = NULL;
			int change_num = 0;
			float* Be_changed_float = NULL;
			float change_float = 0;

			//判断是否返回的标识符,1为修改成功，0为修改失败返回
			int change_flag = 1;

			switch (input1)
			{
			case 0://判断是否返回

				break;

			case 1:
			{
				Be_changed_str = books[find_flag].Name;
				break;
			}
			case 2:
			{
				Be_changed_str = books[find_flag].author;
				break;
			}
			case 3:
			{
				Be_changed_str = books[find_flag].Classification;
				break;
			}
			case 4:
			{
				Be_changed_str = books[find_flag].Publisher;
				break;
			}
			case 5:
			{
				Be_changed_num = &books[find_flag].Year;
				break;
			}
			case 6:
			{
				Be_changed_num = &books[find_flag].Inventory_quantity;
				break;
			}
			case 7:
			{
				Be_changed_float = &books[find_flag].Price;
				break;
			}
			default:
				
				printf("输入错误！！请重输\a\n");
				Sleep(1500);
				break;

			}

			if (input1 >= 1 && input1 <= 4)//修改字符串
			{
				system("cls");
				printf("***************************************\n");
				printf("*******        输入-1返回         *****\n");
				printf("***************************************\n");
				printf("*******       修改以下信息       ******\n");
				printf("***************************************\n");
				printf("*** 修改值：%s\n", Be_changed_str);
				printf("***************************************\n");
				printf("*** 修改为：");
				scanf("%s", change_str);

				if (strcmp(change_str, "-1") == 0)//退出返回
					change_flag = 0;

				if (change_flag == 1)//确认修改
				{
					strcpy(Be_changed_str, change_str);
					printf("修改成功！\n");
					Sleep(1500);
				}
			}
			else if (input1 >= 5 && input1 <= 6)//修改整形
			{
				system("cls");
				printf("***************************************\n");
				printf("*******        输入-1返回         *****\n");
				printf("***************************************\n");
				printf("*******       修改以下信息       ******\n");
				printf("***************************************\n");
				printf("*** 修改值：%d\n", *Be_changed_num);
				printf("***************************************\n");
				printf("*** 修改为：");
				scanf("%d", &change_num);

				if (change_num == -1)
					change_flag = 0;

				if (change_flag == 1)//确认修改
				{
					*Be_changed_num = change_num;
					printf("修改成功！\n");
					Sleep(1500);
				}
			}
			else if (input1 == 7)//修改浮点型
			{
				system("cls");
				printf("***************************************\n");
				printf("*******        输入-1返回         *****\n");
				printf("***************************************\n");
				printf("*******       修改以下信息       ******\n");
				printf("***************************************\n");
				printf("*** 修改值：%f\n", *Be_changed_float);
				printf("***************************************\n");
				printf("*** 修改为：");
				scanf("%f", &change_float);

				if (change_float == -1)
					change_flag = 0;

				if (change_flag == 1)//确认修改
				{
					*Be_changed_float = change_float;
					printf("修改成功！\n");
					Sleep(1500);
				}
			}
			else
				break;
		}
	}
}





void New_User()
{
	while (1)
	{
		char Account[User_Account_Length] = { 0 };
		char Password[User_Account_Length] = { 0 };
		system("cls");
		printf("**************************************\n");
		printf("**********      输入0返回    *********\n");
		printf("**************************************\n");
		printf("*** 请输入新增学生账户：");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//判断是否退出
			break;

		int New_flag = 1;//检测是否可创建用户标志

		//查询账户数量
		int count = 0;
		while (strcmp(User_Account[count][0], "\0") != 0)//当不为空位时
			count++;

		if (count == User_Num)//当人数大于图书馆统计最大人数时
		{
			printf("抱歉！！图书馆可创建用户数量已达上限\a\n");
			Sleep(1500);
			break;
		}

		//检查账户名是否重复
		int i = 0;
		for (i; i < count; i++)
		{
			if (strcmp(User_Account[i][0], Account) == 0)//有重复
			{
				printf("该账户已存在！！请重输\a\n");
				Sleep(1500);
				New_flag = 0;
			}
		}
		
		while (New_flag)//若标志不为0则进入新增
		{
			printf("**************************************\n");
			printf("*** 请输入新增学生密码：");
			scanf("%s", Password);

			if (strcmp(Password, "0") == 0)//判断是否退出
				break;

			char Password1[User_Account_Length] = { 0 };
			printf("**************************************\n");
			printf("*** 请再次输入一次密码：");
			scanf("%s", Password1);

			if (strcmp(Password1, "0") == 0)//判断是否退出
				break;

			//比较两次输入的密码是否相同
			if (strcmp(Password, Password1) != 0)//不相同
			{
				printf("两次密码不相同！！请重输\a\n");
				Sleep(1500);
			}
			else//相同，确认修改
			{
				strcpy(User_Account[count][0], Account);
				strcpy(User_Account[count][1], Password);

				printf("**************************************\n");
				printf("新增成功！\n");
				Sleep(1500);
				break;
			}
		}
	}
}





void Delete_User()
{
	char Account[User_Account_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("**************************************\n");
		printf("**********     输入0退出     *********\n");
		printf("**************************************\n");
		printf("** 请输入要删除的用户名：");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//判断是否退出
			break;

		//找到该用户
		int count = 0;
		int i = -1;//找到用户的标志，找到为用户下标，没找到为-1
		while (strcmp(User_Account[count][0], "\0") != 0)
		{
			if (strcmp(User_Account[count][0], Account) == 0)//找到了
			{
				i = count;
				break;
			}
			count++;
		}

		if (i == -1)//如果没找到
		{
			printf("未找到该用户！！请重输\a\n");
			Sleep(1500);
		}

		while (i != -1)//若找到了
		{
			system("cls");
			printf("**************************************\n");
			printf("** 确认要删除此用户吗：%s\n", User_Account[i][0]);
			printf("**************************************\n");
			printf("****** 1. 确认  ******* 0. 取消 ******\n");
			printf("**************************************\n");
			printf("请输入：");
			int input = 0;
			scanf("%d", &input);

			switch (input)
			{
			case 0:

				i = -1;//退出标志
				break;

			case 1://确认删除

				do
				{
					strcpy(User_Account[i][0], User_Account[i + 1][0]);
					strcpy(User_Account[i][1], User_Account[i + 1][1]);
					i++;
				} while (strcmp(User_Account[i][0], "\0") != 0);//一直替换到为空

				printf("删除成功！\n");
				Sleep(1500);
				return;

			default:

				printf("输入错误！！请重输\a\n");
				Sleep(1500);
				break;

			}
		}
	}
}





void Check_User_information()
{
	int input = 1;
	do
	{
		system("cls");
		printf("******************************************\n");
		printf("**********  1. 查询总用户信息     ********\n");
		printf("**********  2. 查询个人借还书信息 ********\n");
		printf("**********  3. 修改用户密码       ********\n");
		printf("**********  0. 退出               ********\n");
		printf("******************************************\n");
		printf("请选择：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:

			Check_All_User_information();
			break;

		case 2:

			Check_User_Borrow_Return();
			break;

		case 3:

			Change_User_Password();
			break;

		case 0:

			break;

		default:

			printf("输入错误！！请重输\a\n");
			Sleep(1500);
			break;

		}
	} while (input);
}





void Check_All_User_information()
{
	//统计用户数量
	int count = 0;
	while (strcmp(User_Account[count][0], "\0") != 0)
		count++;

	system("cls");
	printf("******************************************\n");
	for (int i = 0; i < count; i++)
	{
		printf("****** 用户名：%s\n", User_Account[i][0]);
		printf("******   密码：%s\n", User_Account[i][1]);
		printf("******************************************\n");
	}
	printf("*********       输入0返回     ************\n");
	printf("******************************************\n");
	int input1 = 0;
	scanf("%d", &input1);
}





void Check_User_Borrow_Return()
{
	char Account[User_Account_Length] = { 0 };

	//用户进入查找菜单标志
	int input = 1;

	//用户下标
	int i = 0;

	do
	{
		system("cls");
		printf("******************************************\n");
		printf("**********       输入0返回       *********\n");
		printf("******************************************\n");
		printf("*** 请输入要查找的用户名:");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//判断是否退出
			return;

		//查找该用户是否存在并找到下标
		i = 0;
		while (strcmp(User_Account[i][0], "\0") == 0)
		{
			if (strcmp(User_Account[i][0], Account) == 0)//判断是否找到
				break;

			else if (strcmp(User_Account[i][0], "\0") == 0)//判断是否未找到
			{
				printf("未找到该用户！！请重输\a\n");
				input = 0;
				break;
			}
			i++;
		}
	} while (!input);//若为0则重新输入
	
	//进入查询菜单
	Query_Information(Account, i);
}





void Change_User_Password()
{
	char Account[User_Account_Length] = { 0 };
	while (1)
	{
		system("cls");
		printf("******************************************\n");
		printf("**********       输入0返回        ********\n");
		printf("******************************************\n");
		printf("** 请输入要修改密码的用户名：");
		scanf("%s", Account);

		if (strcmp(Account, "0") == 0)//查看是否退出
			break;

		//找到该用户
		int count = 0;
		int i = -1;//找到用户的标志，找到为用户下标，没找到为-1
		while (strcmp(User_Account[count][0], "\0") != 0)
		{
			if (strcmp(User_Account[count][0], Account) == 0)//找到了
			{
				i = count;
				break;
			}
			count++;
		}
		if (i == -1)//未找到
		{
			printf("未找到该用户！！请重输\a\n");
			Sleep(1500);
		}
		else if (i != -1)//找到了
			Change_Password(i);
	}
}





void Check_All_Borrow()
{
	//查询人数数量
	int count = 0;
	while (strcmp(User_Account[count][0], "\0") != 0)//当不为空时
		count++;

	//将所有人的借书记录存在同一个结构体数组中
	struct ALL
	{
		char account[User_Account_Length];
		time_t time;
		char name[Book_Name_Length];
	}allBorrow[Borrowing_Records];
	//结构体数组空位下标,以及统计总记录数
	int empty = 0;
	for (int i = 0; i < count; i++)//记录第i个人
	{
		int j = 0;//第i个人的借的第j本书
		while (borrow[i].all_borrow_book[j].time != 0)//当不为空位时，存入结构体数组
		{
			strcpy(allBorrow[empty].account, borrow[i].Account);
			allBorrow[empty].time = borrow[i].all_borrow_book[j].time;
			strcpy(allBorrow[empty].name, borrow[i].all_borrow_book[j].name);	
			empty++;
			j++;
		}
	}

	//将结构体数组中的每个借书记录按时间升序排列
	for (int i = 0; i < empty - 1; i++)
	{
		for (int j = 0; j < empty - i - 1; j++)
		{
			if (allBorrow[j].time > allBorrow[j + 1].time)//找到最大值并依次放到最后面
			{
				//交换用户名
				char tmp1[User_Account_Length];
				strcpy(tmp1, allBorrow[j].account);
				strcpy(allBorrow[j].account, allBorrow[j + 1].account);
				strcpy(allBorrow[j + 1].account, tmp1);
				
				//交换借阅时间
				time_t tmp = allBorrow[j].time;
				allBorrow[j].time = allBorrow[j + 1].time;
				allBorrow[j + 1].time = tmp;

				//交换借阅书籍
				char tmp2[Book_Name_Length];
				strcpy(tmp2, allBorrow[j].name);
				strcpy(allBorrow[j].name, allBorrow[j + 1].name);
				strcpy(allBorrow[j + 1].name, tmp2);
			}
		}
	}

	system("cls");
	printf("**************************************\n");
	printf("**********  以下为按时间查找 *********\n");
	printf("**************************************\n");
	for (int i = 0; i < empty; i++)
	{
		printf("*** 用户名：%s\n", allBorrow[i].account);
		time_t Time = allBorrow[i].time;
		struct tm* TIME = localtime(&Time);
		printf("*** 借书时间：%d-%02d-%02d %02d:%02d:%02d\n",
			TIME->tm_year + 1900,  //年
			TIME->tm_mon + 1,      //月 
			TIME->tm_mday,         //日
			TIME->tm_hour,         //时
			TIME->tm_min,          //分
			TIME->tm_sec);         //秒
		printf("*** 借书名称：%s\n", allBorrow[i].name);
		printf("**************************************\n");
	}	
	printf("**********     输入0返回     *********\n");
	printf("**************************************\n");
	int input = 0;
	scanf("%d", &input);
}





void Check_All_Return()
{
	//查询人数数量
	int count = 0;
	while (strcmp(User_Account[count][0], "\0") != 0)//当不为空时
		count++;

	//将所有人的还书记录存在同一个结构体数组中
	struct ALL
	{
		char account[User_Account_Length];
		time_t time;
		char name[Book_Name_Length];
	}allReturn[Borrowing_Records];
	//结构体数组空位下标,以及统计总记录数
	int empty = 0;
	for (int i = 0; i < count; i++)//记录第i个人
	{
		int j = 0;//第i个人的还的第j本书
		while (borrow[i].Return_book[j].time != 0)//当不为空位时，存入结构体数组
		{
			strcpy(allReturn[empty].account, borrow[i].Account);
			allReturn[empty].time = borrow[i].Return_book[j].time;
			strcpy(allReturn[empty].name, borrow[i].Return_book[j].name);
			empty++;
			j++;
		}
	}

	//将结构体数组中的每个借书记录按时间升序排列
	for (int i = 0; i < empty - 1; i++)
	{
		for (int j = 0; j < empty - i - 1; j++)
		{
			if (allReturn[j].time > allReturn[j + 1].time)//找到最大值并依次放到最后面
			{
				//交换用户名
				char tmp1[User_Account_Length];
				strcpy(tmp1, allReturn[j].account);
				strcpy(allReturn[j].account, allReturn[j + 1].account);
				strcpy(allReturn[j + 1].account, tmp1);

				//交换借阅时间
				time_t tmp = allReturn[j].time;
				allReturn[j].time = allReturn[j + 1].time;
				allReturn[j + 1].time = tmp;

				//交换借阅书籍
				char tmp2[Book_Name_Length];
				strcpy(tmp2, allReturn[j].name);
				strcpy(allReturn[j].name, allReturn[j + 1].name);
				strcpy(allReturn[j + 1].name, tmp2);
			}
		}
	}

	system("cls");
	printf("**************************************\n");
	printf("**********  以下为按时间查找 *********\n");
	printf("**************************************\n");
	for (int i = 0; i < empty; i++)
	{
		printf("*** 用户名：%s\n", allReturn[i].account);
		time_t Time = allReturn[i].time;
		struct tm* TIME = localtime(&Time);
		printf("*** 借书时间：%d-%02d-%02d %02d:%02d:%02d\n",
			TIME->tm_year + 1900,  //年
			TIME->tm_mon + 1,      //月 
			TIME->tm_mday,         //日
			TIME->tm_hour,         //时
			TIME->tm_min,          //分
			TIME->tm_sec);         //秒
		printf("*** 借书名称：%s\n", allReturn[i].name);
		printf("**************************************\n");
	}
	printf("**********     输入0返回     *********\n");
	printf("**************************************\n");
	int input = 0;
	scanf("%d", &input);
}