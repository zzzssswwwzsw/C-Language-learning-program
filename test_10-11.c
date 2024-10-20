#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//	int i = 0;
//	int a = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		a = a * i;
//		printf("%d\n", a);
//	}
//	return 0;
//}



int main()
{
	int i = 0;
	int a = 1;
	int sum = 0;
	for (i = 1; i <= 10; i++)
	{
		a *= i;
		sum += a;
		printf("%d   %d\n", a, sum);
	}
	return 0;
}