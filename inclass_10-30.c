#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>





//int MAX(int x, int y)
//{
//	if (x >= y)
//		return x;
//	else
//		return y;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 2, 3, 5, 9, 7, 6, 4, 8 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int max = 0;
//	for (int i = 0; i < size; i++)
//	{
//		max = MAX(arr[i], max);
//	}
//	printf("%d", max);
//	return 0;
//}





//int main()
//{
//	double arr[] = { 1.519, 28.52, 378.78, 5.78, 9873.78, 7.782788, 6782.87, 4.78278, 878.83 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	int max = 0;
//	int num = 0;
//	for (int i = 0; i < size - 1; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//			num = i;
//		}
//	}
//	printf("%d", num);
//	return 0;
//}





//int main()
//{
//	int arr[] = { 5, 6, 7, 1, 9, 12, 3, 7, 17 };
//	int size = sizeof(arr) / sizeof(arr[1]);
//	int max = arr[0];
//	int min = arr[0];
//	for (int i = 0; i < size; i++)
//	{
//		if (arr[i] >= max)
//		{
//			max = arr[i];
//		}
//		if (arr[i] <= min)
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d\n", max - min);
//	return 0;
//}





//int main()
//{
//	int arr1[] = { 2, 4, 5, 8 };
//	int arr2[] = { 1, 0, 4, 6 };
//	int size = sizeof(arr1) / sizeof(arr1[0]);
//	int arr3[] = { 0 };
//	for (int i = 0; i < size; i++)
//	{
//		arr3[i] = arr2[i] + arr1[i];
//		printf("%d ", arr3[i]);
//	}
//	return 0;
//}





//int main()
//{
//	printf("请输入20个整数：");
//	int a[20] = { 0 };
//	float aver = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < 20; i++)
//	{
//		aver += a[i] / 20.0;
//	}
//	printf("%.1f\n", aver);
//	return 0;
//}





//int is_prime(int x)
//{
//	int a = sqrt(x);
//	do
//	{
//		if (x % a)
//		{
//			a--;
//			if (a == 1)
//			{
//				return 1;
//			}
//		}
//		else
//		{
//			break;
//		}
//	} while (1);
//}
//
//
//int main()
//{
//	int arr[20] = { 0 };
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (is_prime(arr[i]))
//			printf("%d ", is_prime(arr[i]));
//	}
//	return 0;
//}





//int main()
//{
//	int A[2][3] = { 0 };
//	int B[2][3] = { 0 };
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &A[i][j]);
//		}
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &B[i][j]);
//		}
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			printf("A[%d][%d] + B[%d][%d] = %d\t", i, j, i, j, A[i][j] + B[i][j]);
//			printf("A[%d][%d] - B[%d][%d] = %d\n", i, j, i, j, A[i][j] - B[i][j]);
//		}
//	}
//	return 0;
//}





//int main()
//{
//	int arr[3][3] = { 0 };
//	int sum1 = 0;
//	int sum2 = 0;
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (int j = 0, i = 0; i < 3; i++,j++)
//	{
//		sum1 += arr[i][j];
//	}
//	for (int j = 0, i = 2; j < 3; i--, j++)
//	{
//		sum2 += arr[i][j];
//	}
//	printf("%d %d", sum1, sum2);
//	return 0;
//}





//void Scanf(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
//
//void Printf(int arr[], int size)
//{
//	for (int i = 0; i < size; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[6] = { 0 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	Scanf(arr, size);
//	Printf(arr, size);
//	return 0;
//}





//void SUM(int x, int y, int* sum)
//{
//	*sum = x + y;
//}
//
//void MUL(int x, int y, int* mul)
//{
//	*mul = x * y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int sum = 0;
//	int mul = 0;
//	SUM(a, b, &sum);
//	MUL(a, b, &mul);
//	printf("SUM = %d\n", sum);
//	printf("MUL = %d\n", mul);
//	return 0;
//}





//int main()
//{
//	int arr[20] = { 4, 5, 6, 9, 8, 7, 1, 2, 3, 15, 16, 14, 18, 17, 19, 12, 13, 11, 20, 10 };
//	int max = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		if (arr[i] >= max)
//			max = arr[i];
//	}
//	printf("max = %d\n", max);
//	return 0;
//}





//int main()
//{
//	int arr[20] = { 0 };
//	int num = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr[i]);      //64 46 988 4 67 79 13 21 61 2345 689 654 213 846 51 65 798 456 1321 684
//	}
//	for (int j = 0; j < 20; j++)
//	{
//		int min = arr[0];
//		for (int i = 0; i < 20; i++)
//		{
//			if (arr[i] <= min)
//			{
//				min = arr[i];
//				num = i;
//
//			}
//		}
//		arr[num] = 1000000000;
//		printf("%d   原来次序为：%d\n", min, num + 1);
//	}
//	return 0;
//}





//int main()
//{
//	int arr[5] = { 0 };
//	int tmp = 0;
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 4; i >= 2; i--)
//	{
//		tmp = arr[i];
//		arr[i] = arr[4 - i];
//		arr[4 - i] = tmp;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}





int main()
{
	int arr[5][3] = { {78, 56, 89}, { 58, 65, 32 }, { 45, 78, 95 }, { 99, 100, 89 }, { 45, 56, 61 } };
	int num = 0;
	for (int i = 0; i < 5; i++)
	{
		int sum = 0;
		int aver = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
			aver += arr[i][j] / 3;
		}
		printf("总分为：%d，平均分为：%d\n", sum, aver);
		if (aver < 60)
		{
			num++;
		}
	}
	printf("平均成绩低于60分的学生人数为：%d\n", num);
	return 0;
}