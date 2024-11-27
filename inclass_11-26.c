#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>





//int main()
//{
//	int a[4][3] = { {1,2,3},{4,5,6},{7,8,9},{10,11,12} };
//	int (*p1)[3];
//	p1 = a;
//	printf("\n");
//	printf("1:%d\n", *(*(p1 + 0)));
//	p1++;
//	printf("2:%d\n", *p1[0]);
//	printf("3:%d\n", *(*(p1 + 1) + 2));
//}





//int main()
//{
//    void tran(int n, int x[]);
//    int a[4][4] = { {3,8,9,10},{2,5,-3,5},{7,8,9,12},{10,11,2,4} };
//    tran(2, a[0]);
//    tran(0, a[2]);
//    tran(0, &a[2][0]);
//}
//void tran(int n, int arr[])
//{
//    int i;
//    for (i = 0; i < 4; i++)
//        printf("%d", arr[n * 4 + i]);
//    printf("\n");
//}





//void MaxAndMin(int* data, int* max, int* min, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		if (data[i] > *max)
//			*max = data[i];
//		if (data[i] < *min)
//			*min = data[i];
//	}
//}
//
//int main()
//{
//	int max = 0;
//	int min = 10000000000;
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; i ++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int len = sizeof(arr) / sizeof(arr[0]);
//	MaxAndMin(arr, &max, &min, len);
//	printf("max = %d, min = %d\n", max, min);
//	return 0;
//}





//int CountNumofLetter(char* string)
//{
//	int i = 0;
//	int count = 0;
//	while (string[i] != '\0')
//	{
//		if (string[i] >= 'a' && string[i] <= 'z' || string[i] >= 'A' && string[i] <= 'Z')
//			count++;
//		i++;
//	}
//	return count;
//}
//
//int main()
//{
//	char str[20] = { 0 };
//	scanf("%s", str);
//	printf("Num of Letter : %d", CountNumofLetter(str));
//	return 0;
//}





//int Delete(int *data, int len)
//{
//	int delete = 0;
//	int i = 0;
//	printf("请输入你要删除的元素：");
//	scanf("%d", &delete);
//	for (int i = 0; i < len; i++)
//	{
//		if (data[i] == delete)
//		{
//			for (int j = i; j < len; j ++)
//				data[j] = data[j + 1];
//			len--;
//		}
//	}
//	printf("删除后的数组为：");
//	for (int i = 0; i < len; i++)
//	{
//		printf(" %d ", data[i]);
//	}
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int len = sizeof(arr) / sizeof(arr[0]);
//	Delete(arr, len);
//	return 0;
//}





//int SearchKey(int* data, int len)
//{
//	int search = 0;
//	printf("请输入要查询的数字：");
//	scanf("%d", &search);
//	for (int i = 0; i < len; i++)
//	{
//		if (data[i] == search)
//		{
//			return i;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("下标为：%d\n", SearchKey(arr, 5));
//	return 0;
//}





//void Delete(char* string)
//{
//	int i = 0;
//	char delete = 0;
//	printf("请输入要删除的字符：");
//	scanf("%c", &delete);
//	while (*(string+i) != '\0')
//	{
//		if (*(string + i) == delete)
//		{
//			for (int j = i; string[j] != '\0'; j++)
//			{
//				*(string + j) = *(string + j + 1);
//			}
//		}
//		i++;
//	}
//}
//
//int main()
//{
//	char str[10] = { 0 };
//	scanf("%s", str);
//	getchar();
//	Delete(str);
//	printf("数组为：%s\n", str);
//	return 0;
//}





//int SearchKey(char* string)
//{
//	int i = 0;
//	char delete = 0;
//	printf("请输入要查找到字符：");
//	scanf("%c", &delete);
//	while (*(string + i) != '\0')
//	{
//		if (*(string + i) == delete)
//			return i;
//		i++;
//	}
//	return -1;
//}
//
//int main()
//{
//	char str[10] = { 0 };
//	scanf("%s", str);
//	getchar();
//	printf("下标为：%d\n", SearchKey(str));
//	return 0;
//}




//void ReverseData(int* data, int len)
//{
//	for (int i = 0; i < len / 2; i++)
//	{
//		int tmp = *(data + i);
//		*(data + i) = *(data + len - i - 1);
//		*(data + len - i - 1) = tmp;
//	}
//}
//
//int main()
//{
//	int arr[5] = { 0 };
//	for (int i = 0; i < 5; i++)
//		scanf("%d", &arr[i]);
//	ReverseData(arr, 5);
//	for (int i = 0; i < 5; i++)
//		printf("%d ", arr[i]);
//	return 0;
//}





//void InputNumbers(int* p, int len)
//{
//	for (int i = 0; i < len; i++)
//		scanf("%d", &p[i]);
//}
//
//void SwapMaxMin(int* p, int len)
//{
//	int max = 0;
//	int min = 32767;
//	int maxC = 0;
//	int minC = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (p[i] < min)
//		{
//			min = p[i];
//			minC = i;
//		}
//	}
//	int tmp1 = p[0];
//	p[0] = p[minC];
//	p[minC] = tmp1;
//	for (int i = 0; i < len; i++)
//	{
//		if (p[i] > max)
//		{
//			max = p[i];
//			maxC = i;
//		}
//	}
//	int tmp2 = p[len - 1];
//	p[len - 1] = p[maxC];
//	p[maxC] = tmp2;
//}
//
//void Display(int* p, int len)
//{
//	for (int i = 0; i < len; i++)
//		printf("%d ", p[i]);
//}
//
//int main()
//{
//	int p[5] = { 0 };
//	InputNumbers(p, 5);
//	SwapMaxMin(p, 5);
//	Display(p, 5);
//	return 0;
//}





//char* string_in(char* pa, char* pb)
//{
//	int i = 0;
//	while (*(pa + i) != '\0')
//	{
//		char* pA = (pa + i);
//		char* pB = pb;
//		if (strcmp(pA, pB) == 0)
//			return pa + i;
//		i++;
//	}
//	return 0;
//}
//
//int main()
//{
//	printf("%p", (void*)string_in("string", "ing"));
//	return 0;
//}





//void Mystrcpy(char* src, char* des, int m)
//{
//	char* size_des = des;
//	int len = strlen(size_des) + m;
//	int n = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (i == m)
//		{
//			*(src + i) = *(des + n);
//			m++;
//			n++;
//		}
//	}
//}
//
//int main()
//{
//	char src[20] = { 0 };
//	char des[20] = { 0 };
//	int m = 0;
//	printf("请输入两个字符串以及第几位开始替换：");
//	scanf("%s%s%d", src, des, &m);
//	Mystrcpy(src, des, m);
//	printf("复制后的字符串为：%s", src);
//	return 0;
//}





//int FindMax1(int(*data)[4])//行
//{
//    int max = data[0][0];
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (data[i][j] > max) {
//                max = data[i][j];
//            }
//        }
//    }
//    return max;
//}
//
//int FindMax2(int* data)//列
//{
//    int max = data[0];
//    for (int j = 0; j < 4; j++) {
//        for (int i = 0; i < 3; i++) {
//            if (*(data + i * 4 + j) > max) {
//                max = *(data + i * 4 + j);
//            }
//        }
//    }
//    return max;
//}
//
//int main()
//{
//	int arr[3][4] = { {7, 8, 6, 5}, {12, 3, 1, 5}, {15, 16, 13, 7} };
//	printf("1:MAX = %d\n", FindMax1(arr));
//	printf("2:MAX = %d\n", FindMax2(arr));
//	return 0;
//}





//#define n 6
//void MatrixInvert(double (*maxtrix)[n])
//{
//	for (int i = 0; i < 6; i++) {
//		for (int j = i + 1; j < 6; j++) {
//			int temp = maxtrix[i][j];
//			maxtrix[i][j] = maxtrix[j][i];
//			maxtrix[j][i] = temp;
//		}
//	}
//}
//
//int main()
//{
//	double maxtrix[n][n] = {
//		{1,  2,  3,  4,  5,  6},
//		{7,  8,  9,  10, 11, 12},
//		{13, 14, 15, 16, 17, 18},
//		{19, 20, 21, 22, 23, 24},
//		{25, 26, 27, 28, 29, 30},
//		{31, 32, 33, 34, 35, 36}
//	};
//	MatrixInvert(maxtrix);
//	printf("转置后的矩阵：\n");
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//			printf("%6.2lf ", maxtrix[i][j]);
//		printf("\n");
//	}
//	return 0;
//}





//void DataResort(int* data, int len)
//{
//	for (int i = 0; i < len - 1; i++)
//	{
//		for (int j = i; j < len - 1; j++)
//		{
//			if (data[j] % 2 == 0 && data[j + 1] % 2 == 1)
//			{
//				int tmp = data[j];
//				data[j] = data[j + 1];
//				data[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int data[10] = { 0 };
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &data[i]);
//	DataResort(data, 10);
//	for (int i = 0; i < 10; i++)
//		printf("%d ", data[i]);
//	return 0;
//}





//void LineAdd(int A[3][4], int B[3])
//{
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 4; j++)
//		{
//			B[i] += A[i][j];
//		}
//	}
//}
//
//int main()
//{
//	int A[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
//	int B[3] = { 0 };
//	LineAdd(A, B);
//	for (int i = 0; i < 3; i++)
//		printf("%d ", B[i]);
//	return 0;
//}





//void StudentAverage(double Score[10][5], double stuAverage[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			stuAverage[i] += Score[i][j] / 5;
//	}
//}
//
//void ScoreAverage(double Score[10][5], double ScoAverage[5])
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 10; j++)
//			ScoAverage[i] += Score[j][i] / 10;
//	}
//}
//
//void MaxScore(double Score[10][5], int* pStuNo, double* pScore)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		if (Score[i][3] > *pScore)
//		{
//			*pScore = Score[i][3];
//			*pStuNo = i;
//		}
//	}
//}
//
//int main()
//{
//	double Score[10][5] = { 0 };
//	double stuAverage[10] = { 0 };
//	double ScoAverage[5] = { 0 };
//	int pStuNo = 0;
//	double pScore = 0;
//	printf("语文，数学，英语，理综，体育）请输入这10个学生的5门成绩：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 5; j++)
//			scanf("%lf", &Score[i][j]);
//	}
//	StudentAverage(Score, stuAverage);
//	ScoreAverage(Score, ScoAverage);
//	MaxScore(Score, &pStuNo, &pScore);
//	for (int i = 0; i < 10; i++)
//		printf("第%d个学生的平均分为：%.2lf\n", i + 1, stuAverage[i]);
//
//	printf("语文的平均分为：%.2lf\n", ScoAverage[0]);
//	printf("数学的平均分为：%.2lf\n", ScoAverage[1]);
//	printf("英语的平均分为：%.2lf\n", ScoAverage[2]);
//	printf("理综的平均分为：%.2lf\n", ScoAverage[3]);
//	printf("体育的平均分为：%.2lf\n", ScoAverage[4]);
//	
//	printf("最高分数对应的学生为%d号学生的理综成绩%.2lf%", pStuNo + 1, pScore);
//	return 0;
//}





//void InputString(char* (p[10]), int n)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		p[i] = malloc(20 * sizeof(char));
//		scanf("%s", p[i]);
//	}
//}
//
//void SortString(char* (p[10]), int n)
//{
//	for (int j = 0; j < n - 1; j++)
//	{
//		for (int i = 0; i < n - 1 - j; i++)
//		{
//			if (strcmp(p[i], p[i + 1]) < 0)		
//			{
//				char* tmp = p[i];
//				p[i] = p[i + 1];
//				p[i + 1] = tmp;
//			}
//		}
//	}
//}
//
//void DisplayString(char* (p[10]), int n)
//{
//	for (int i = 0; i < 10; i++)
//		printf("%s ", p[i]);
//}
//
//int main()
//{
//	char* p[10] = { 0 };
//	InputString(p, 10);
//	SortString(p, 10);
//	DisplayString(p, 10);
//	for (int i = 0; i < 10; i++)
//		free(p[i]);
//	return 0;
//}
////apple banana cherry date elderberry fig grape honeydew kiwi lemon





#define People_Num 100
//为每个人依次标号
void Serial_Numbering(int People[][2])
{
	for (int i = 0; i < People_Num; i++)
		People[i][0] = i + 1;
}
//检查剩余人数
void Check_Count(int People[][2], int* count)
{
	int num = People_Num;
	for (int i = 0; i < People_Num; i++)
	{
		if (People[i][1] == -1)
			num--;
	}
	*count = num;
}
//报数以及踢出3
void Count(int People[][2], int* count, int* NUM)
{
	for (int i = 0; i < People_Num; i++)
	{
		if (People[i][1] != -1)
		{
			if (*NUM == 4)
				*NUM = 1;
			People[i][1] = *NUM;
			(*NUM)++;
			if (People[i][1] == 3)
				People[i][1] = -1;
		}
	}
	Check_Count(People, count);
	if (*count != 1)
		Count(People, count, NUM);
}

int main()
{
	int count = People_Num;
	int NUM = 1;
	int People[People_Num][2] = { 0 };
	Serial_Numbering(People);
	Count(People, &count, &NUM);
	for (int i = 0; i < People_Num; i++)
	{
		if (People[i][1] != -1)
			printf("这个人的号数为：%d\n", i + 1);
	}
	return 0;
}