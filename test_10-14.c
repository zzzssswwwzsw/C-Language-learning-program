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
//	printf("***�����Լ��***\n");
//	printf("��������������");
//	scanf("%d%d", &m, &n);
//	if (m < n)      //ʹ  m > n  �����
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	int i = n;
//	while ((m % i) || (n % i))
//	{
//		printf("������ i = %d\n", i);
//		i--;
//		if (i == 1)
//		{
//			break;
//		}
//	}
//	if (i != 1)
//	{
//		printf("�������������Լ��Ϊ��i = %d\n", i);
//	}
//	else
//	{
//		printf("��������û�����Լ����\n");
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
	printf("�аְ֣���Ȼһ���ӵ��Ծ͹ػ�\n\a");
	scanf("%s", input);
	if (strcmp(input, "�ְ�") == 0)      //string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	printf("�G!�ҵĺô����");
	Sleep(2000);
	return 0;
}