#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char arr1[20] = { 0 };
//	char arr2[] = "hello world";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

int main()
{
	char arr1[] = "ÄãºÃ£¬ÊÀ½ç";
	memset(arr1, 'x', 6);
	printf("%s", arr1);
	return 0;
}