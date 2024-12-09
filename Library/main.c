#include "library.h"



//总书籍记录
struct BOOK books[Book_Num] =
{
{1, "《红楼梦》"},
{2, "《西游记》"},
{3, "《水浒传》"},
{4, "《三国演义》"},
{5, "《聊斋志异》"},
{6, "《儒林外史》"},
{7, "《镜花缘》"},
{8, "《金瓶梅》"},
{9, "《东周列国志》"},
{10, "《封神演义》"},
{11, "《大元大一统志》"},
{12, "《牡丹亭》"},
{13, "《红楼梦续》"},
{14, "《史记》"},
{15, "《大明宫词》"},
{16, "《水浒后传》"},
{17, "《西游记后传》"},
{18, "《古文观止》"},
{19, "《西游记演义》"},
{20, "《唐诗三百首》"}
};



//用户借阅信息记录
struct Borrow borrow[User_Num] =
{
{"000001"},
{"000002"},
{"000003"},
{"000004"},
{"000005"},
{"000006"},
};



int main()
{
	//管理员的账户以及密码
	char Administrator_Account[2][20] = { "123", "123abc" };



	//用户的账户以及密码
	char User_Account[User_Num][2][User_Account_Length] =
	{
	{"000001", "123456"},
	{"000002", "123456"},
	{"000003", "123456"},
	{"000004", "123456"},
	{"000005", "123456"},
	{"000006", "123456"},
	};

	//用户的账户下标数
	int Num_User_Account = -1;


	//选择登录方式
	int login_flag = 0;

	do
	{
		login_flag = User_or_Administrator();//选择登录方式


		switch (login_flag)
		{
		case 1:

			//查询用户是否选择成功
			if (User_choose(User_Account, &Num_User_Account) != -1)
			{
				User_menu(User_Account[Num_User_Account][0]);
			}
			break;

		case 2:

			//查询管理员是否登录成功
			if (Administrator_login(Administrator_Account))
			{

			}
			break;

		case 0://退出循环

			break;

		default:

			printf("输入错误！！请重输\a\n");
			login_flag = 1;
			Sleep(1500);
			break;

		}
	} while (login_flag);


	return 0;
}