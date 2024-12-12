#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>



/************************�����Ķ���***************************/



//�鼮���Ƴ���
#define Book_Name_Length 30

//�������ֳ���
#define Author_Name_Length 20

//����ų���
#define Classification_Length 10

//���浥λ���Ƴ���
#define Publisher_Length 20

//�ܿɴ����鼮����
#define Book_Num 100

//ͼ��ݵǼ��������
#define User_Num 100

//ͼ��ݽ��ļ�¼������
#define Borrowing_Records 1000

//ÿ���û��������鼮��
#define User_Borrow_MAX_Num 20

//�û��˺��Լ�������󳤶�
#define User_Account_Length 20

//���鳬ʱʱ��(��λ����)
#define Timeout 30






//�����鼮�ṹ��
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
//�����ⲿ������鼮�ṹ������
extern struct BOOK books[Book_Num];



//�����û����Ĺ黹�鼮��¼�ṹ��
struct Borrow
{
	char Account[User_Account_Length];

	struct Borrow_book//�����¼
	{
		time_t time;  //���ĵ�ʱ��
		char name[Book_Name_Length];//����
	}borrow_book[User_Borrow_MAX_Num];

	struct Return_book//�����¼
	{
		time_t time;  //���ĵ�ʱ��
		char name[Book_Name_Length];//����
	}Return_book[User_Borrow_MAX_Num];

}borrow[User_Num];
//�����ⲿ������û����Ĺ黹��¼�ṹ��
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
void User_menu(char User_own_Account[User_Account_Length], int Num_User_Account);

//�û�����ϵͳ
void Book_Boorow(char User_own_Account[User_Account_Length], int Num_User_Account);

//�û�����ϵͳ
void Book_Return(char User_own_Account[User_Account_Length], int Num_User_Account);

//��ѯ��Ϣ�˵�
void Query_Information(char Account[User_Account_Length]);

//��ѯ������Ϣ
void Borrow_information(char Account[User_Account_Length]);

//��ѯ�鼮�б�
void Check_Books();

//��ѯ�����Ƿ�ʱ������ʱ����ֵΪ1��û�г�ʱ����ֵΪ0
int Is_Timeout(char book_name[Book_Name_Length], int Num_User_Account);


/*************************************************************/


