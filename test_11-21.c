#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



////创建自定义类型(结构体)
//struct Book
//{
//	char name[20];
//	char id[20];
//	int price;
//};
//
//int main()
//{
//	int num = 10;
//	struct Book book = { "C语言", "C20241121", 55 };
//	printf("书名：%s\n", book.name);
//	printf("id：%s\n", book.id);
//	printf("价格：%d\n", book.price);
//	return 0;
//}



//int main()
//{
//	char a = 3;
//	//3的二进制为00000000000000000000000000000011
//	//存入char类型，被截断为：           00000011
//	char b = 127;                      //01111111
//	char c = a + b;
//	//执行加法，a和b整形提升，按照符号位进行提升，符号位为0则补0，为1则补1（无符号补0）
//	//a变为   00000000000000000000000000000011
//	//b变为   00000000000000000000000001111111
//	//相加后为00000000000000000000000010000010
//	//存入c，c为char需要截断，截断后为10000010
//	printf("%d\n", c);//-126
//	//打印%d，c为char，则需要整形提升，c提升后为11111111111111111111111110000010（补码）
//	//则内存中补码将转换为原码用于打印，原码为：10000000000000000000000001111110（原码）则为-126
//	return 0;
//}



//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)//a与数字判断相等时需发生整形提升，提升后则不为0xb6
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}



int main()
{
	char c = 0;
	printf("%u\n", sizeof(+c));
	return 0;
}