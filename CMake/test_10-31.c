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
	printf("�аְ֣���Ȼһ���ӵ��Ծ͹ػ�\n\a");
	scanf("%s", input);
	if (strcmp(input, "�ְ�") == 0)      //string compare
	{
		system("shutdown -a");
	}
	else
	{
		goto again;
	}
	printf("�G!�ҵĺô����");
	Sleep(3000);
	return 0;
}