#include "library.h"





//总书籍记录
struct BOOK books[Book_Num] =
{//  名称                   作者                分类号     出版单位        出版时间 库存数量 价格
{1, "活着",                "余华",             "I217.3", "作家出版社",         1993, 120, 39.00},
{2, "百年孤独",            "加西亚·马尔克斯", "I565.7", "南海出版公司",       2007, 85,  45.00},
{3, "大数据时代",          "吴军",             "F303.7", "电子工业出版社",     2014, 75,  58.00},
{4, "时间简史",            "斯蒂芬·霍金",     "O1",     "湖南科学技术出版社", 2002, 100, 78.00},
{5, "活力阅读",            "陈丹青",           "G219",   "三联书店",           2018, 50,  58.00},
{6, "未来简史",            "尤瓦尔·赫拉利",   "D0",     "中信出版社",         2017, 130, 68.00},
{7, "思考，快与慢",        "丹尼尔·卡尼曼",   "C913.3", "中信出版社",         2011, 200, 98.00},
{8, "人类简史",            "尤瓦尔·赫拉利",   "D0",     "中信出版社",         2014, 150, 75.00},
{9, "安妮日记",            "安妮·弗兰克",     "I565.8", "新华出版社",         2008, 60,  35.00},
{10, "小王子",             "圣·埃克苏佩里",   "I565.9", "北京联合出版公司",   2015, 180, 25.00},
{11, "追风筝的人",         "卡勒德·胡赛尼",   "I567.9", "作家出版社",         2006, 220, 45.00},
{12, "1984",               "乔治·奥威尔",     "I561.2", "译林出版社",         2001, 100, 50.00},
{13, "峰回路转",           "赵树理",           "I217.5", "人民文学出版社",     2007, 80,  40.00},
{14, "解忧杂货店",         "东野圭吾",         "I313.6", "南海出版公司",       2012, 90,  52.00},
{15, "复杂性与自组织",     "罗杰·彭罗斯",     "O1",     "科学出版社",         2005, 70,  120.00},
{16, "科技的本质",         "马克·赫尔普林",   "O4",     "科学出版社",         2011, 45,  88.00},
{17, "沉默的大多数",       "王小波",           "I217.7", "作家出版社",         1998, 60,  39.00},
{18, "穷爸爸富爸爸",       "罗伯特·清崎",     "F247.7", "中信出版社",         2001, 150, 58.00},
{19, "苏菲的世界",         "乔斯坦·贾德",     "I313.5", "译林出版社",         1996, 110, 42.00},
{20, "火星救援",           "安迪·威尔",       "I712.5", "湖南文艺出版社",     2014, 120, 59.00},
{21, "硅谷之谜",           "林行止",           "F713.2", "中信出版社",         2017, 85,  70.00},
{22, "黑客与画家",         "保罗·格雷厄姆",   "F303.7", "电子工业出版社",     2004, 95,  48.00},
{23, "打破思维的局限",     "陈宏",             "F204.7", "中信出版社",         2012, 150, 55.00},
{24, "长安十二时辰",       "马伯庸",           "I247.5", "北京联合出版公司",   2018, 180, 78.00},
{25, "恋爱的犀牛",         "廖一梅",           "I267.1", "花城出版社",         2002, 60,  40.00},
{26, "羊皮卷",             "奥格·曼狄诺",     "F287.2", "世界图书出版公司",   2003, 130, 32.00},
{27, "解构主义与批评理论", "朱利安·哈维",     "B84.2", "上海译文出版社",      2010, 55,  60.00},
{28, "灵山",               "李敬泽",           "I267.6", "人民文学出版社",     1998, 45,  49.00},
{29, "经济学原理",         "曼昆",             "F0",     "北京大学出版社",     2015, 250, 120.00},
{30, "未来之路",           "彼得·汉德克",     "I247.7", "外文出版社",         2009, 60,  62.00}
};



//用户个人借阅归还信息记录（与个人用户数组下标需保持一致）
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
			if (User_choose(User_Account, &Num_User_Account))
			{
				User_menu(User_Account, Num_User_Account);
			}
			break;

		case 2:

			//查询管理员是否登录成功
			if (Administrator_login(Administrator_Account))
			{
				Administrator_menu();
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