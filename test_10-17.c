//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<math.h>


//void Swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}


//int is_prime(int x)   //函数：判断是否为素数
//{
//	int a = sqrt(x);
//	do
//	{
//		if (x % a)
//		{
//			a--;
//			if (a == 1)
//			{
//				return 1;   //若为素数，返回值为1
//			}
//		}
//		else
//		{
//			break;
//		}
//	} while (1);
//
//	return 0;   //不为素数，返回值为0
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//			printf("%d   ", i);
//	}
//	return 0;
//}





int is_leap_year(int x)   //判断是否为闰年
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		return 1;   //若为闰年，返回值为1
	}
	else
	{
		return 0;   //若不为闰年，返回值为0
	}
}


int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		if (is_leap_year(y))
			printf("%d  ", y);
	}
	return 0;
}