#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//int main()
//{
//	for (int i = 1; i < 101; i++)
//	{
//		if (!(i % 3))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int m = 0;
//	int n = 0;
//	printf("***求最大公约数***\n");
//	printf("请输入两个数：");
//	scanf("%d%d", &m, &n);
//	if (m < n)      //使  m > n  恒成立
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	int i = n;
//	while ((m % i) || (n % i))
//	{
//		printf("计算中 i = %d\n", i);
//		i--;
//		if (i == 1)
//		{
//			break;
//		}
//	}
//	if (i != 1)
//	{
//		printf("这两个数的最大公约数为：i = %d\n", i);
//	}
//	else
//	{
//		printf("这两个数没有最大公约数！\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 0; i < 101; i++)
//	{
//		int c = 2;
//		while (i % c)
//		{
//			c++;
//			if (c == i)
//			{
//				printf("%d  ", i);
//			}
//		}
//	}
//	return 0;
//}



int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("叫爸爸，不然一分钟电脑就关机\n\a");
	scanf("%s", input);
	if (strcmp(input, "爸爸") == 0)      //string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	printf("欸!我的好大儿！");
	Sleep(2000);
	return 0;
}