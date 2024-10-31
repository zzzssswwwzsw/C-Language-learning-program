#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


int main()
{
	char input[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("叫爸爸，不然一分钟电脑就关机\n\a");
	scanf("%s", input);
	if (strcmp(input, "爸爸") == 0)      //string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	printf("欸!我的好大儿！");
	Sleep(3000);
	return 0;
}