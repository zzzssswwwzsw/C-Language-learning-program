#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/************************变量的定义***************************/



//书籍名称长度
#define Book_Name_Length 30

//总可储存书籍数量
#define Book_Num 100

//图书馆登记总人数
#define User_Num 100

//每个用户最多借阅书籍数
#define User_Borrow_Book_Num 20

//用户账号以及密码最大长度
#define User_Account_Length 20


//声明书籍结构体
struct BOOK
{
	int id;
	char Name[Book_Name_Length];
};
//声明外部定义的书籍结构体数组
extern struct BOOK books[Book_Num];


//声明用户借阅书籍结构体
struct Borrow
{
	char Account[User_Account_Length];
	char Borrow_book[User_Borrow_Book_Num][2][Book_Name_Length];//id 书名
};
//声明外部定义的用户借阅记录结构体
extern struct Borrow borrow[User_Num];

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
void User_menu(char User_own_Account[User_Account_Length]);


//用户借书系统
void Book_Boorow();



/*************************************************************/


