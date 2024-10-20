#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}




//int main()
//{
//	char password[20] = { 0 };
//	printf("请输入您的密码：");
//	scanf("%s", password);
//	printf("请确认您的密码(Y/N):");
//	//getchar();                        //清理缓冲区中的\n（只会清理一个字符）
//	
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')   //循环清理缓冲区
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功！");
//	}
//	else
//	{
//		printf("确认失败");
//	}
//
//	return 0;
//}



int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
	
		putchar(ch);
	}
	return 0;
}