#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;   //查找的数字
//	int sz = sizeof(arr) / sizeof(arr[0]);   //数组的元素个数
//
//	int left = 0;
//	int right = sz - 1;
//	
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了,下标为：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到！");
//	}
//	return 0;
//}



//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "********************";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	do
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");
//		printf("%s\n", arr2);
//		Sleep(500);
//		left++;
//		right--;
//	} while (left <= right);
//
//	return 0;
//}



int main()
{
	char password[20] = { 0 };
	int i = 0;
	for (i = 3; i > 0; i--)
	{
		printf("请输入密码（你还有%d次机会）：", i);
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("登录成功！\n");
			break;
		}
		printf("密码错误！\n");
	}
	if (i == 0)
	{
		printf("登陆失败！");
	}
	return 0;
}