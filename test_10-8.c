#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//2.
//int main()
//{
//	printf("**************************\n");
//	printf("\n");
//	printf("    Very Good!\n");
//	printf("\n");
//	printf("***************************\n");
//}


//3.
//int main()
//{
//	int a, b, c, d, sum;
//	a = 10; b = 20; c = 30;
//	sum = a + b * c;
//	a = c; d = a + c;
//	printf("sum=%d,d=%d", sum,d);
//}


//4.
//int main()
//{
//	float a,b,c,aver, pro;
//	printf("请输入三个数字：");
//	scanf("%f %f %f", &a, &b, &c);
//	aver = (a + b + c) / 3.0;
//	pro = a * b * c;
//	printf("这三个数的平均数为：%f\n这三个数的乘积为：%f\n", aver, pro);
//	return 0;
//}


//5.
//int main()
//{
//	float a, b, c, d, e,aver;
//	printf("请输入五门课的成绩：");
//	scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
//	aver = (a + b + c + d + e) / 5.0;
//	printf("平均成绩为：%f", aver);
//	return 0;
//}


//1.
//int main()
//{
//	int x, y;
//	printf("请输入一个数：");
//	scanf("%d", &x);
//	y = pow((x - 10),3);
//	printf("结果为：%d", y);
//	return 0;
//}


//2.
//int main()
//{
//	int x, y = 5, z;   //中文分号改为英文分号
//	scanf("%d", &z);   //中文双引号改为英文双引号
//	x = 0;
//	z = x + y;   //未打分号
//	printf("z=%d\n", z);   //中文双引号改为英文双引号,中文逗号改为英文逗号
//}


//3.
//#define x 3.5
//#define a 5.5
//int main()   //没有主函数
//{
//	float y, z = 6;   //未定义的z，x已被定义为常量,分号为英文
//	y = x + z;   //分号为英文
//	printf("a = %f,x = %f, y = %f\n", a, x, y);   //双引号，逗号和分号为英文
//}