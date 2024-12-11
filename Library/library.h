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

//用户账号以及密码最大长度
#define User_Account_Length 20


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


//声明用户个人借阅书籍记录结构体
struct Borrow
{
	char Account[User_Account_Length];
	struct Borrow_book
	{
		time_t time;  //借阅的时间
		char name[Book_Name_Length];//书名
	}borrow_book[User_Borrow_MAX_Num];
}borrow[User_Num];
//声明外部定义的用户个人借阅记录结构体
extern struct Borrow borrow[User_Num];


//声明用户借阅书籍总记录结构体
struct All_Borrow
{
	char User_Account[User_Account_Length];//用户名称
	char name[Book_Name_Length];//借阅的书籍名称
	time_t time;  //借阅的时间
};
//声明外部定义的用户借阅总记录结构体
extern struct All_Borrow all_borrow[Borrowing_Records];

/*************************************************************/



/*************************函数的定义**************************/

//询问为用户还是管理员
int User_or_Administrator();


//用户选择界面
int User_choose(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account);
//用户登录界面
int User_login(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account);


//管理员登录
int Administrator_login(char Administrator_Account[2][20]);


//用户菜单
void User_menu(char User_own_Account[User_Account_Length], int Num_User_Account);


//用户借书系统
void Book_Boorow(char User_own_Account[User_Account_Length], int Num_User_Account);


//查询信息
void Query_Information(char Account[User_Account_Length]);


/*************************************************************/


