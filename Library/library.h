#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/************************�����Ķ���***************************/



//�鼮���Ƴ���
#define Book_Name_Length 30

//�ܿɴ����鼮����
#define Book_Num 100

//ͼ��ݵǼ�������
#define User_Num 100

//ÿ���û��������鼮��
#define User_Borrow_Book_Num 20

//�û��˺��Լ�������󳤶�
#define User_Account_Length 20


//�����鼮�ṹ��
struct BOOK
{
	int id;
	char Name[Book_Name_Length];
};
//�����ⲿ������鼮�ṹ������
extern struct BOOK books[Book_Num];


//�����û������鼮�ṹ��
struct Borrow
{
	char Account[User_Account_Length];
	char Borrow_book[User_Borrow_Book_Num][2][Book_Name_Length];//id ����
};
//�����ⲿ������û����ļ�¼�ṹ��
extern struct Borrow borrow[User_Num];

/*************************************************************/



/*************************�����Ķ���**************************/

//ѯ��Ϊ�û����ǹ���Ա
int User_or_Administrator();


//�û�ѡ�����
int User_choose(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account);
//�û���¼����
int User_login(char User_Account[User_Num][2][User_Account_Length], int* Num_User_Account);


//����Ա��¼
int Administrator_login(char Administrator_Account[2][20]);


//�û��˵�
void User_menu(char User_own_Account[User_Account_Length]);


//�û�����ϵͳ
void Book_Boorow();



/*************************************************************/


