#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int binary_search(int* a, int k, int s)
int binary_search(int a[], int k, int s)   //二分查找数组内数字下标函数,形参为（数组，查找数字，数组元素个数）
{
	int left = 0;
	int right = s - 1;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		if (a[mid] < k)
		{
			left = mid + 1;
		}
		else if (a[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			return mid;   //若找到，返回下标数字
		}
	}
	return -1;   //若找不到，返回值为-1
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 7;
	int sz = (sizeof(arr) / sizeof(arr[0]));
	int ret = binary_search(arr, key, sz);
	if (-1 == ret)
	{
		printf("找不到！\n");
	}
	else
	{
		printf("找到了！下标为：%d\n", ret);
	}
	return 0;
}