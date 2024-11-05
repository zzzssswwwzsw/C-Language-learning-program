#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//void Add(int* pn)
//{
//	(*pn)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}



//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//	return 0;
//}

#include "Add.h"
#pragma comment(lib, "Add.lib")

int main()
{
	int a = 10;
	int b = 20;
	int c = Add(a, b);
	printf("%d\n", c);
	return 0;
}