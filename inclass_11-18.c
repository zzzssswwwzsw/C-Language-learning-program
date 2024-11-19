#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>



//double CircleArea(double r)
//{
//	return 3.14 * r * r;
//}
//
//int main()
//{
//	double r = 0;
//	scanf("%lf", &r);
//	printf("面积为 = %lf\n", CircleArea(r));
//	return 0;
//}





//int GreatestCommonDenominator(int intPositiveNumberA, int intPositiveNumberB)
//{
//	int intPositiveNumberMin = intPositiveNumberA < intPositiveNumberB ? intPositiveNumberA : intPositiveNumberB;
//	while (1)
//	{
//		if (intPositiveNumberA % intPositiveNumberMin == 0 && intPositiveNumberB % intPositiveNumberMin == 0)
//		{
//			return intPositiveNumberMin;
//		}
//		intPositiveNumberMin--;
//	}
//}
//
//int main()
//{
//	int intPositiveNumberA = 0;
//	int intPositiveNumberB = 0;
//	scanf("%d%d", &intPositiveNumberA, &intPositiveNumberB);
//	printf("最大公约数为：%d\n", GreatestCommonDenominator(intPositiveNumberA, intPositiveNumberB));
//	return 0;
//}





//double Distance(int x1, int y1, int x2, int y2)
//{
//	return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
//}
//
//int main()
//{
//	int x1 = 0;
//	int y1 = 0;
//	int x2 = 0;
//	int y2 = 0;
//	scanf("%d,%d%d,%d", &x1, &y1, &x2, &y2);
//	printf("两点之间的距离为：%lf\n", Distance(x1, y1, x2, y2));
//	return 0;
//}





//double TemperatureTrans(double dblTemperature, char cType)
//{
//	if (cType == 'C' || cType == 'c')
//	{
//		return (dblTemperature * 9 / 5.0) + 32;
//	}
//	else if (cType == 'F' || cType == 'f')
//	{
//		return (dblTemperature - 32) * 5 / 9.0;
//	}
//}
//
//int main()
//{
//	double dblTemperature = 0;
//	char cType = 0;
//	printf("请输入温度和温度类型：");
//	scanf("%lf %c", &dblTemperature, &cType);
//	printf("转换后为：%lf", TemperatureTrans(dblTemperature, cType));
//	return 0;
//}





//int isOdd_or_Even(int Number)
//{
//	if (Number % 2)
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int Number = 0;
//	scanf("%d", &Number);
//	printf("为%s数", isOdd_or_Even(Number) == 1 ? "奇" : "偶");
//	return 0;
//}





//void fun(int* x, int* y)
//{
//	printf("%d  %d", *x, *y);
//	*x = 3;
//	*y = 4;
//}
//int main()
//{
//	int x = 1, y = 2;
//	fun(&y, & x);
//	printf("%d  %d", x, y);
//}





//void Add(int* x, int* y)
//{
//	printf("Add = %d\n", *x + *y);
//}
//
//void Sub(int* x, int* y)
//{
//	printf("Sub = %d\n", *x * *y);
//}
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d%d", &x, &y);
//	Add(&x, &y);
//	Sub(&x, &y);
//	return 0;
//}





//int m(unsigned k)
//{
//	int s = 1;
//		do
//		{
//			s *= k % 10;
//			k /= 10;
//		} while (k);
//	return s;
//}
//void main()
//{
//	printf("%d，%d\n", (1234), m(43209));
//}





//double FindMax(double dblOn, double dblTwo, double dblThree)
//{
//	double MAX = 0;
//	for (int i = 0; i < 2; i++)
//	{
//		if (dblOn > dblTwo)
//			MAX = dblOn;
//		else
//			MAX = dblTwo;
//		if (dblThree > dblTwo)
//			MAX = dblThree;
//		else
//			MAX = dblTwo;
//		if (dblOn > dblThree)
//			MAX = dblOn;
//		else
//			MAX = dblThree;
//	}
//	return MAX;
//}
//
//int main()
//{
//	double dblOn = 0;
//	double dblTwo = 0;
//	double dblThree = 0;
//	scanf("%lf%lf%lf", &dblOn, &dblTwo, &dblThree);
//	printf("MAX = %lf", FindMax(dblOn, dblTwo, dblThree));
//	return 0;
//}





//double CylinderVolume(double r, double h)
//{
//	return 3.14 * r * r * h;
//}
//
//int main()
//{
//	double r = 0;
//	double h = 0;
//	scanf("%lf%lf", &r, &h);
//	printf("V = %lf", CylinderVolume(r, h));
//	return 0;
//}





//double HarmonicMean(double num1, double num2)
//{
//	return 1 / ((1 / num1 + 1 / num2) / 2);
//}
//
//int main()
//{
//	double num1 = 0;
//	double num2 = 0;
//	scanf("%lf%lf", &num1, &num2);
//	printf("HarmonicMean = %lf", HarmonicMean(num1, num2));
//	return 0;
//}





//int LowestCommonMultiple(int intPositiveNumberA, int intPositiveNumberB)
//{
//	int intPositiveNumberMAX = intPositiveNumberA > intPositiveNumberB ? intPositiveNumberA : intPositiveNumberB;
//	while (1)
//	{
//		if (intPositiveNumberMAX % intPositiveNumberA == 0 && intPositiveNumberMAX % intPositiveNumberB == 0)
//		{
//			return intPositiveNumberMAX;
//		}
//		intPositiveNumberMAX++;
//	}
//}
//
//int main()
//{
//	int intPositiveNumberA = 0;
//	int intPositiveNumberB = 0;
//	scanf("%d%d", &intPositiveNumberA, &intPositiveNumberB);
//	printf("最小公倍数为%d\n", LowestCommonMultiple(intPositiveNumberA, intPositiveNumberB));
//	return 0;
//}





//long Factorial(long intPositiveNumber)
//{
//	int Value = 1;
//	while (intPositiveNumber)
//	{
//		Value *= intPositiveNumber;
//		intPositiveNumber--;
//	}
//	return Value;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d的阶乘为：%ld", n, Factorial(n));
//	return 0;
//}





//double Power(double dblRealNumber, int intPositiveNumber)
//{
//	double ret = 1;
//	for (intPositiveNumber; intPositiveNumber > 0; intPositiveNumber--)
//	{
//		ret *= dblRealNumber;
//	}
//	return ret;
//}
//
//int main()
//{
//	double x = 0;
//	int m = 0;
//	scanf("%lf%d", &x, &m);
//	printf("%lf的%d次幂为%lf\n",x, m, Power(x, m));
//	return 0;
//}





//void to_base_n(int PositiveNumber, unsigned base)
//{
//	int Quotient = PositiveNumber % base;
//	PositiveNumber /= base;
//	if (PositiveNumber >= 0)
//	{
//		if (PositiveNumber != 0)
//		{
//			to_base_n(PositiveNumber, base);
//		}
//		if (Quotient >= 10)
//		{
//			switch (Quotient)
//			{
//			case 10:
//				printf("A");
//				break;
//			case 11:
//				printf("B");
//				break;
//			case 12:
//				printf("C");
//				break;
//			case 13:
//				printf("D");
//				break;
//			case 14:
//				printf("E");
//				break;
//			case 15:
//				printf("F");
//				break;
//			}
//		}
//		else
//		{
//			printf("%d", Quotient);
//		}
//	}
//}	
//
//int main()
//{
//	int PositiveNumber = 0;
//	unsigned base = 0;
//	scanf("%d%u", &PositiveNumber, &base);
//	to_base_n(PositiveNumber, base);
//	return 0;
//}





//int is_leap_year(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	{
//		return 29;
//	}
//	else
//	{
//		return 28; 
//	}
//}
//
//int CountDays(int year, int month, int day)
//{
//	switch (month - 1)
//	{
//	case 11:	
//		day += 30;
//	case 10:
//		day += 31;
//	case 9:
//		day += 30;
//	case 8:
//		day += 31;
//	case 7:
//		day += 31;
//	case 6:
//		day += 30;
//	case 5:
//		day += 31;
//	case 4:
//		day += 30;
//	case 3:
//		day += 31;
//	case 2:
//		day += is_leap_year(year);
//	case 1:
//		day += 31;
//	}
//	return day;
//}
//
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%d%d", &year, &month, &day);
//	printf("%d年%d月%d日是%d的第%d天\n", year, month, day, year, CountDays(year, month, day));
//	return 0;
//}





//long fun(int k)
//{
//	if (k > 0)
//		return k * fun(k - 1);
//	else if (k == 0)
//		return 1;
//}
//void main()
//{
//	int k = 10;
//	printf("%d!=%ld\n", k, fun(k));
//}





//long Factorial(long intPositiveNumber)
//{
//	if (intPositiveNumber > 0)
//		return intPositiveNumber * Factorial(intPositiveNumber - 1);
//	else if (intPositiveNumber == 0)
//		return 1;
//}
//
//int main()
//{
//	long n = 5;
//	printf("%ld! = %ld", n, Factorial(n));
//	return 0;
//}





double Power(double dblRealNumber, int intPositiveNumber)
{
	if (intPositiveNumber > 0)
	{
		intPositiveNumber--;
		return dblRealNumber * Power(dblRealNumber, intPositiveNumber);
	}
	else if (intPositiveNumber == 0)
		return 1;
}

int main()
{
	double x = 1.414;
	int m = 10;
	printf("%lf的%d次方为%lf\n", x, m, Power(x, m));
	return 0;
}