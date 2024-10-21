#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//int main()
//{
//	int a, k;
//	scanf("%d", &a);
//	if (a > 0)
//	{
//		printf("%d:", a);
//		for (k = 1; k <= a; k++)
//		{
//			if (!(a % k))
//			{
//				printf("%d ", k);
//			}
//		}
//	}
//	printf("\n");
//	return 0;
//}



//int main() {
//	int a, b, c, x, n;
//	a = 0;
//	b = 0;
//	c = 1;
//	n = 4;
//	printf("%d %d %d ", a, b, c);
//	while (n <= 10) {
//		x = a + b + c;
//		a = b;
//		b = c;
//		c = x;
//		printf("%d ", x);
//		n++;
//	}
//	printf("\n");
//	return 0;
//}



//int main() {
//	int i;
//	float fact;
//	fact = 2;
//	i = 1;
//	do {
//		i = i + 1;
//		fact = fact * i;
//	} while (i <= 10);
//	printf("%f", fact);
//}



//int main() 
//{
//	for (int i = 77; i <= 210; i++)
//	{
//		if (i % 2 == 0)
//		{
//			printf("%d   ", i);
//		}
//	}
//	return 0;
//}



//int main()
//{
//	int k = 0;
//	for (int i = 7; i <= 210; i++)
//	{
//		if (i % 5)
//		{
//			printf("%d  ", i);
//			k++;
//			if (k % 5 == 0)
//			{
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	for (int i = 100; i <= 999; i++)
//	{
//		int h = i / 100;
//		int t = (i % 100) / 10;
//		int o = (i % 10);
//		if ((h * h * h + t * t * t + o * o * o) == i)
//		{
//			printf("%d   ", i);
//		}
//	}
//	return 0;
//}



//double f(double x)
//{
//	return sin(x) + log(1 + x * x);
//}
//
//double df(double x, double h)
//{
//	return ((f(x + h) - f(x)) / h);
//}
//
//int main()
//{
//	double x = 0.5;
//	double h = 0.0001;
//	printf("%lf", df(x, h));
//	return 0;
//}


//int MAX(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int m = 0;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int n = 0; n < 10; n++)
//	{
//		m = MAX(arr[n], m);
//	}
//	printf("MAX = %d", m);
//	return 0;
//}



//int main()
//{
//	double e = 1;
//	double d = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		d *= i;
//		e += (1 / d);
//	}
//	printf("e = %.6lf", e);
//	return 0;
//}



int main()
{
	int n1 = 1;
	int n2 = 1;
	for (n1; n1 <= 9; n1++)
	{
		n2 = 1;
		for (n2; n2 <= 9; n2++)
		{
			if (n1 <= n2)
			{
				printf("%d*%d=%d\t", n1, n2, n1 * n2);
			}
		}
		switch (n1)
		{
		case 1:
			printf("\n\t");
			break;
		case 2:
			printf("\n\t\t");
			break;
		case 3:
			printf("\n\t\t\t");
			break;
		case 4:
			printf("\n\t\t\t\t");
			break;
		case 5:
			printf("\n\t\t\t\t\t");
			break;
		case 6:
			printf("\n\t\t\t\t\t\t");
			break;
		case 7:
			printf("\n\t\t\t\t\t\t\t");
			break;
		case 8:
			printf("\n\t\t\t\t\t\t\t\t");
			break;
		case 9:
			printf("\n\t\t\t\t\t\t\t\t\t");
			break;
		}
	}
	return 0;
}