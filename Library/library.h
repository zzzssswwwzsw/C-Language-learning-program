#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h> 



/************************变量的定义***************************/



//书籍名称长度
#define Book_Name_Length 30

//作者名字长度
#define Author_Name_Length 20

//分类号长度
#define Classification_Length 10

//出版单位名称长度
#define Publisher_Length 20

//总可储存书籍数量
#define Book_Num 100

//图书馆登记最大人数
#define User_Num 100

//图书馆借阅记录总条数
#define Borrowing_Records 1000

//每个用户最多借阅书籍数
#define User_Borrow_MAX_Num 20

//借还书记录总条数
#define User_Borrow_Return_MAX_Num 100

//用户账号以及密码最大长度
#define User_Account_Length 20

//借书超时时间(单位：秒)
#define Timeout 30






//声明书籍结构体
struct BOOK
{
	int Id;
	char Name[Book_Name_Length];
	char author[Author_Name_Length];
	char Classification[Classification_Length];
	char Publisher[Publisher_Length];
	int Year;
	int Inventory_quantity;
	float Price;
};
//声明外部定义的书籍结构体数组
extern struct BOOK books[Book_Num];



//声明用户借阅归还书籍记录结构体
struct Borrow
{
	char Account[User_Account_Length];

	struct Borrow_book//未归还书籍记录
	{
		time_t time;  //借阅的时间
		char name[Book_Name_Length];//书名
	}borrow_book[User_Borrow_MAX_Num];

	struct All_Borrow_book//借书记录
	{
		time_t time;  //借阅的时间
		char name[Book_Name_Length];//书名
	}all_borrow_book[User_Borrow_Return_MAX_Num];

	struct Return_book//还书记录
	{
		time_t time;  //借阅的时间
		char name[Book_Name_Length];//书名
	}Return_book[User_Borrow_Return_MAX_Num];

}borrow[User_Num];
//声明外部定义的用户借阅归还记录结构体
extern struct Borrow borrow[User_Num];





/*************************************************************/



/*************************函数的定义**************************/

//询问为用户还是管理员
int User_or_Administrator();

//用户选择界面
int User_choose(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account);

//用户登录界面
int User_login(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account);

//用户菜单
void User_menu(char User_Account[User_Num][2][User_Account_Length], int Num_User_Account);

//用户借书系统
void Book_Boorow(char User_own_Account[User_Account_Length], int Num_User_Account);

//用户还书系统
void Book_Return(char User_own_Account[User_Account_Length], int Num_User_Account);

//查询信息菜单
void Query_Information(char Account[User_Account_Length], int Num_User_Account);

//查询未还书籍信息
void Borrow_information(char Account[User_Account_Length], int Num_User_Account);

//查询借书总记录
void All_Borrow_information(char Account[User_Account_Length], int Num_User_Account);

//查询还书总记录
void Return_information(char Account[User_Account_Length], int Num_User_Account);

//查询书籍列表
void Check_Books();

//查询借书是否超时，若超时返回值为1，没有超时返回值为0
int Is_Timeout(char book_name[Book_Name_Length], int Num_User_Account);

//修改用户密码
void Change_Password(char User_Account[User_Num][2][User_Account_Length], int Num_User_Account);



//管理员登录
int Administrator_login(char Administrator_Account[2][20]);

//管理员菜单
void Administrator_menu();

//查询书籍信息菜单
void Check_Books_menu();

//定向查找书籍信息
void Targeted_Lookups(int input);

//修改书籍目录
void Change_Books_menu();

//新增书籍
void New_Books();

//删除书籍
void Delete_Books();

//修改书籍
void Change_Books();


/*************************************************************/


