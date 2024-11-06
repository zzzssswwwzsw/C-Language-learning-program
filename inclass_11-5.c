#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
#include <string.h>


//int main()
//{
//	char arr[] = { 0 };
//	fgets(arr, 100, stdin);   //ADs adWd?>51a
//	int i = 0;
//	int upper = 0;
//	int lower = 0;
//	while (arr[i] != '\0')
//	{
//		if (arr[i] >= 65 && arr[i] <= 90)
//			upper++;
//		if (arr[i] >= 97 && arr[i] <= 122)
//			lower++;
//		i++;
//	}
//	printf("大写字母：%d个，小写字母：%d个", upper, lower);
//	return 0;
//}





//int main()
//{
//	char arr[] = { 0 };
//	fgets(arr, 100, stdin);
//	int i = 0;
//	char max = 0;
//	while (arr[i] != '\0')
//	{
//		if (arr[i] > max)
//			max = arr[i];
//		i++;
//	}
//	printf("%c", max);
//	return 0;
//}





//int main()
//{
//	char s1[50] = { 0 };
//	char s2[] = { "auywaf\nwdada" };
//	int i = 0;
//	for (i = 0; s2[i] != '\0'; i++)
//		s1[i] = s2[i];
//	if (s1[i + 1] != '\0')
//		s1[i + 1] = '\0';
//	printf("%s", s1);
//	return 0;
//}





//int main()
//{
//	char a[] = { "uisefQWUfie><?:{}~*-/+" };
//	char max = 0;
//	for (int i = 0; i < strlen(a); i++)
//	{
//		if (a[i] > max)
//			max = a[i];
//	}
//	printf("%c", max);
//	return 0;
//}





//int main()
//{
//	char a[] = "abcdef";
//	char* b = "ABCDEF";         //声明指针，指向存字符串常量的首地址
//	int i;
//	for (i = 0;i < 3;i++)
//		printf("%d，%s\n", * a,b + i);		//数组名a指向数组的首地址，*a表示首地址内存的内容
//	printf("--------------------\n");
//	for (i = 3; a[i]; i++) 
//	{
//		putchar(*(b + i));		//b+i表示偏移首地址i，*(b+i)表示引用改地址存的元素
//		printf("%c\n", * (a + i));
//	}
//}





//int main()
//{
//    int i = 0;
//    char s[120];
//    printf("Enter a string.\n");
//    scanf("%s", s);
//    while (s[i] != '\0')
//    {
//        if (s[i] >= 65 && s[i] <= 90)
//            s[i] = s[i] - 'A' + 'a';
//        i++;
//    }
//    printf("%s\n", s);
//}





//void stringInvert(char* str)
//{
//	int num = strlen(str) - 1;
//	for (int i = 0; i <= num / 2; i++)
//	{
//		char tmp = str[num - i];
//		str[num - i] = str[i];
//		str[i] = tmp;
//	}
//}
//
//
//int main()
//{
//	char str[] = { "abcdef" };
//	printf("%s\n", str);
//	stringInvert(str);
//	printf("%s\n", str);
//	return 0;
//}





//void strVowel(char strOld[], char Vowel[])
//{
//	int j = 0;
//	for (int i = 0; i < strlen(strOld); i++)
//	{
//		switch (strOld[i])
//		{
//		case('a'):
//		case('e'):
//		case('i'):
//		case('o'):
//		case('u'):
//			Vowel[j] = strOld[i];
//			j++;
//		}
//	}
//}
//
//
//int main()
//{
//	char str[] = { "abicdieafghijkleeovwisuuyz" };
//	char vowel[100] = { 0 };
//	strVowel(str, vowel);
//	printf("%s\n", vowel);
//	return 0;
//}





//int StringLenth(char* string)
//{
//	int num = 0;
//	for (int i = 0; ; i++)
//	{
//		if (string[i] != '\0')
//			num++;
//		else
//			return num;
//	}
//}
//
//
//int main()
//{
//	char str[] = { "Hello World!" };
//	printf("长度为：%d\n" ,StringLenth(str));
//	return 0;
//}





//void Input(char Name[10][20], int WorkNo[10])
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("请输入名字及其对应职工号：");
//		scanf("%s", &Name[i]);
//		scanf("%d", &WorkNo[i]);
//	}
//}
//
//void Sort(char Name[10][20], int WorkNo[10])
//{		
//	int num = 0;
//	for (int j = 0; j < 10; j++)
//	{
//		int max = 0;
//		for (int i = 0; i < 10; i++)
//		{
//			if (WorkNo[i] > max)
//			{
//				max = WorkNo[i];
//				num = i;
//			}
//		}
//		printf("%s %d\n", Name[j], max);
//		WorkNo[num] = 0;
//	}
//}
//
//int main()
//{
//	char Name[10][20];
//	int WorkNo[10];
//	Input(Name, WorkNo);
//	Sort(Name, WorkNo);
//	return 0;
//}





//int main()
//{
//	char str[20] = { 0 };
//	int times[20] = { 0 };
//	char letter[20] = { 0 };
//	scanf("%s", str);
//	for (int i = 0; i < strlen(str); i++)
//	{
//		if (str[i] >= 97 && str[i] <= 122)
//		{
//			int lenL = strlen(letter);
//			for (int j = 0; j <= lenL; j++)
//			{
//				if (str[i] == letter[j])
//				{
//					times[j] += 1;
//					break;
//				}
//				else
//				{
//					if (letter[j] == '\0')
//					{
//						letter[j] = str[i];
//					}
//				}
//			}
//		}
//	}
//	for (int i = 0; i < strlen(letter) - 1; i++)
//	{
//		for (int j = 0; j < strlen(letter) - 1; j++)
//		{
//			if (times[j] < times[j + 1])
//			{
//				int tmpT = times[j + 1];
//				times[j + 1] = times[j];
//				times[j] = tmpT;
//				char tmpL = letter[j + 1];
//				letter[j + 1] = letter[j];
//				letter[j] = tmpL;
//			}
//			else if (times[j] == times[j + 1])
//			{
//				if (letter[j] > letter[j + 1])
//				{
//					char tmpL = letter[j];
//					letter[j] = letter[j + 1];
//					letter[j + 1] = tmpL;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < strlen(letter); i++)
//	{
//		printf("%c     %d\n", letter[i], times[i] + 1);
//	}
//	return 0;
//}





void print_letter(char str[])
{
	int flag = 1;
	for (int i = 0; i < strlen(str); i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (flag == 0)
			{
				printf(" ");
			}
			flag = 1;
			printf("%c", str[i]);
		}
		else
			flag = 0;
	}
}

int main()
{
	char str[] = { 0 };
	scanf("%s", str);
	print_letter(str);
	return 0;
}