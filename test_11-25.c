#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//int main()
//{
//	int arr[10] = { 0 };
//	char* p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//		printf("%d\n", arr[i]);
//	}
//	
//	return 0;
//}

//void str(char strings[], int pNum[])
//{
//	int i = 0;
//	while (strings[i] != '\0')
//	{
//		if (strings[i] >= 'a' && strings[i] <= 'z' || strings[i] >= 'A' && strings[i] <= 'Z')
//			pNum[0]++;
//		else if (strings[i] >= '0' && strings[i] <= '9')
//			pNum[1]++;
//		else if (strings[i] == ' ')
//			pNum[2]++;
//		else
//			pNum[3]++;
//		i++;
//	}
//}
//
//int main()
//{
//	char strings[1000] = { 0 };
//	int Num[4] = { 0 };
//	fgets(strings, 1000, stdin);
//	str(strings, Num);
//	printf("%d %d %d %d", Num[0], Num[1], Num[2], Num[3]);
//	return 0;
//}






//int main() {
//    int* ptr;
//    ptr = (int*)malloc(5 * sizeof(int)); // 为5个整数分配内存
//    if (ptr == NULL) 
//    {
//        printf("内存分配失败\n");
//        return 1;
//    }
//    for (int i = 0; i < 5; i++)  // 使用分配的内存
//    {
//        ptr[i] = i + 1;  // 为数组元素赋值
//    }
//    for (int i = 0; i < 5; i++) // 打印分配的内存中的值
//    {
//        printf("ptr[%d] = %d\n", i, ptr[i]);
//    }
//    free(ptr); // 释放内存
//    return 0;
//}





//int main()
//{
//	char* p = "hello world!";
//	//p[0] = 'B';
//	char* p2 = "hello world!";
//	printf("%p\n%p\n", p, p2);
//	printf("%c", p[0]);
//	return 0;
//}


int main()
{
	char word[8];
	scanf("%s", word);
	printf("%s", word);
	return 0;
}