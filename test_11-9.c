#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}



//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%u ", n % 10);
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//1234
//	print(num);//print函数可以打印参数部分数字的每一位
//	return 0;
//}



//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}



//int factorial(int n)
//{
//	if (n != 0)
//		return n * factorial(n - 1);
//}
//
//int main()
//{
//	int num = 10;
//	printf("%d的阶乘为：%d\n", num, factorial(num));
//	return 0;
//}



//int Fibonacci_Sequence(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fibonacci_Sequence(n - 1) + Fibonacci_Sequence(n - 2);
//}
//
//int main()
//{
//	int num = 6;
//	printf("%d\n", Fibonacci_Sequence(num));
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	int Fib1 = 1;
//	int Fib2 = 1;
//	int Fib = 1;
//	scanf("%d", &n);
//	for (int i = 2; i < n; i++)
//	{
//		Fib = Fib1 + Fib2;
//		Fib1 = Fib2;
//		Fib2 = Fib;
//	}
//	printf("第%d个斐波那契数为%d", n, Fib);
//	return 0;
//}




////汉诺塔问题
//int count = 0;
//void print(char x, char y)
//{
//	printf("%c->%c\n", x, y);
//	count++;
//}
//
//void move(int n, char start, char temp, char end)
//{
//	if (n == 1)
//		print(start, end);
//	else
//	{
//		move(n - 1, start, end, temp);
//		print(start, end);
//		move(n - 1, temp, start, end);
//	}
//}
//
//int main()
//{
//	int n = 3;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	move(n, a, b, c);
//	printf("一共有%d步", count);
//	return 0;
//}




//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%p\n", &arr[i]);
//	}
//	return 0;
//}





int main()
{
	int arr[3][2] = { 1,2,3,4,5,6 };
	printf("%d", arr[0][0]);
	return 0;
}