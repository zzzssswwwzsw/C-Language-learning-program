#include "library.h"



//���鼮��¼
struct BOOK books[Book_Num] =
{
{1, "����¥�Ρ�"},
{2, "�����μǡ�"},
{3, "��ˮ䰴���"},
{4, "���������塷"},
{5, "����ի־�졷"},
{6, "��������ʷ��"},
{7, "������Ե��"},
{8, "����ƿ÷��"},
{9, "�������й�־��"},
{10, "���������塷"},
{11, "����Ԫ��һͳ־��"},
{12, "��ĵ��ͤ��"},
{13, "����¥������"},
{14, "��ʷ�ǡ�"},
{15, "���������ʡ�"},
{16, "��ˮ䰺󴫡�"},
{17, "�����μǺ󴫡�"},
{18, "�����Ĺ�ֹ��"},
{19, "�����μ����塷"},
{20, "����ʫ�����ס�"}
};



//�û�������Ϣ��¼
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
	//����Ա���˻��Լ�����
	char Administrator_Account[2][20] = { "123", "123abc" };



	//�û����˻��Լ�����
	char User_Account[User_Num][2][User_Account_Length] =
	{
	{"000001", "123456"},
	{"000002", "123456"},
	{"000003", "123456"},
	{"000004", "123456"},
	{"000005", "123456"},
	{"000006", "123456"},
	};

	//�û����˻��±���
	int Num_User_Account = -1;


	//ѡ���¼��ʽ
	int login_flag = 0;

	do
	{
		login_flag = User_or_Administrator();//ѡ���¼��ʽ


		switch (login_flag)
		{
		case 1:

			//��ѯ�û��Ƿ�ѡ��ɹ�
			if (User_choose(User_Account, &Num_User_Account) != -1)
			{
				User_menu(User_Account[Num_User_Account][0]);
			}
			break;

		case 2:

			//��ѯ����Ա�Ƿ��¼�ɹ�
			if (Administrator_login(Administrator_Account))
			{

			}
			break;

		case 0://�˳�ѭ��

			break;

		default:

			printf("������󣡣�������\a\n");
			login_flag = 1;
			Sleep(1500);
			break;

		}
	} while (login_flag);


	return 0;
}