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
//	printf("����ǰ��%d %d\n", a, b);
//	Swap(&a, &b);
//	printf("������%d %d\n", a, b);
//	return 0;
//}


//int is_prime(int x)   //�������ж��Ƿ�Ϊ����
//{
//	int a = sqrt(x);
//	do
//	{
//		if (x % a)
//		{
//			a--;
//			if (a == 1)
//			{
//				return 1;   //��Ϊ����������ֵΪ1
//			}
//		}
//		else
//		{
//			break;
//		}
//	} while (1);
//
//	return 0;   //��Ϊ����������ֵΪ0
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





int is_leap_year(int x)   //�ж��Ƿ�Ϊ����
{
	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
	{
		return 1;   //��Ϊ���꣬����ֵΪ1
	}
	else
	{
		return 0;   //����Ϊ���꣬����ֵΪ0
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