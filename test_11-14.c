#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	float a = 6.0f / 5.0f;
//	printf("%f\n", a);
//	return 0;
//}



//int main()
//{
//	int a = -10;
//	int b = a >> 1;//把a的二进制位向左移一位
//	printf("b = %d", b);
//	return 0;
//}



//int main()
//{
//	int a = -1;
//	int b = a >> 1;
//	//算数右移
//	printf("%d", b);
//	return 0;
//}



int main()
{
	int a = 5;  //00000000000000000000000000000101
	int b = 3;  //00000000000000000000000000000011
	printf("a & b = %d\n", a & b);
	printf("a | b = %d\n", a | b);
	printf("a ^ b = %d\n", a ^ b);

	

	return 0;
}