#include<stdio.h>

//#define MAX 1000   //define定义常量
// 
//
//int main()
//{
//
//	printf("%d", MAX);
//
//	return 0;
//}

#define ADD(x,y) ((x) + (y))
int main()
{
	printf("%d\n", 5*ADD(2, 3));
	return 0;
}