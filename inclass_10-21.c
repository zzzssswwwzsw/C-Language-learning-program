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
//	int k = 0;
//	for (int i = 77; i <= 210; i++)
//	{
//		if (i % 2 == 0)
//		{
//			k++;
//		}
//	}
//	printf("%d", k);
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
//	double x = 0;
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



//int main()
//{
//	int n1 = 1;
//	int n2 = 1;
//	for (n1; n1 <= 9; n1++)
//	{
//		n2 = 1;
//		for (n2; n2 <= 9; n2++)
//		{
//			if (n1 <= n2)
//			{
//				printf("%d*%d=%d\t", n1, n2, n1 * n2);
//			}
//			else
//			{
//				printf("\t");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	double fact = 1;
//	for (int i = 1; i <= 35; i++)
//	{
//		fact *= i;
//		printf("%d! = %.0lf\n", i, fact);
//	}
//	return 0;
//}



//int main()
//{
//	int fact = 1;
//	int sum = 0;
//	for (int i = 1; i <= 6; i++)
//	{
//		fact *= i;
//		sum += fact;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}



//int main()
//{
//	float x = 0;
//	int fact = 1;
//	float sinx = 0;
//	int s = -1;
//	scanf("%f", &x);
//	for (int i = 1; i <= 10; i++)
//	{
//		fact *= i;
//		if (i % 2 != 0)
//		{
//			s *= -1;
//			float p = pow(x, i);
//			sinx += ((p / fact) * s);
//		}
//	}
//	printf("sin%.0f = %.5f", x, sinx);
//	return 0;
//}



//int main()
//{
//	int m = 100;
//	int fm = 0;
//	int s = 0;
//	for (fm = 0; fm <= 100; fm++)
//	{
//		s = 0;
//		for (s = 0; s <= 100; s++)
//		{
//			m = 0;
//			for (m = 0; m <= 100; m++)
//			{
//				if ((3 * m + fm + s) == 100 && (m + fm + 3 * s) == 100)
//				{
//					printf("公鸡：%3d只，母鸡：%3d只，小鸡：%3d只\n", m, fm, 3 * s);
//				}
//			}
//		}
//	}
//	return 0;
//}



//int is_prime(int x)
//{
//	int a = sqrt(x);
//	do
//	{
//		if (x % a)
//		{
//			a--;
//			if (a == 1)
//			{
//				return 1;
//			}
//		}
//		else
//		{
//			break;
//		}
//	} while (1);
//
//	return 0;
//}
//
//int main()
//{
//	printf("2\n3\n");
//	for (int i = 1; i <= 100; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}



//int main()                     //出问题了！！！！！！！！！！！！！！！！
//{
//	int k = 0;
//	int a = 3;
//	for (int i = 1; i <= 7; i++)
//	{
//		for (int t1 = 1; t1 <= a; t1++)
//		{
//			printf("   ");
//		}
//		int x = 3 - a;
//		for (int t2 = 0; t2 <= x; t2++);
//		{
//			printf(" * ");
//		}
//		a--;
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int n = 7;
//
//	for (int i = n / 2; i > 0; i--)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			printf(j < i ? "   " : " * ");
//		}
//		printf("\n");
//	}
//
//	for (n; n > 0; n--)
//	{
//		printf(" * ");
//	}
//	printf("\n");
//
//	n = 7;
//
//	for (int i = 1; i <= n / 2; i++)
//	{
//		for (int j = 0; j < n - i; j++)
//		{
//			printf(j < i ? "   " : " * ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



//int main()
//{
//	float left = 0;
//	float right = 0;
//	scanf("%d %d", &left, &right);
//
//	return 0;
//}



// 被积函数
double f(double x) 
{
    return x * pow(sin(x), 3) + 1 / log(1 + pow(x, 2));
}

// 使用梯形法则计算定积分
double trapezoidal_rule(double a, double b, int n) 
{
    double h = (b - a) / n;  // 步长
    double sum = 0.5 * (f(a) + f(b));  // 边界值

    for (int i = 1; i < n; i++) 
    {
        sum += f(a + i * h);  // 中间点的函数值
    }

    return sum * h;  // 返回积分值
}

int main() 
{
    double a, b;
    int n;

    // 输入区间和子区间的数量
    printf("请输入积分区间的下限 a: ");
    scanf("%lf", &a);
    printf("请输入积分区间的上限 b: ");
    scanf("%lf", &b);
    printf("请输入子区间的数量 n: ");
    scanf("%d", &n);

    // 计算并输出定积分结果
    double result = trapezoidal_rule(a, b, n);
    printf("定积分的结果是: %.6f\n", result);

    return 0;
}