#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}




//int main()
//{
//	char password[20] = { 0 };
//	printf("�������������룺");
//	scanf("%s", password);
//	printf("��ȷ����������(Y/N):");
//	//getchar();                        //���������е�\n��ֻ������һ���ַ���
//	
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')   //ѭ����������
//	{
//		;
//	}
//
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ���");
//	}
//	else
//	{
//		printf("ȷ��ʧ��");
//	}
//
//	return 0;
//}



int main()
{
	int ch = 0;
	while ((ch=getchar()) != EOF)
	{
		if (ch < '0' || ch > '9')
			continue;
	
		putchar(ch);
	}
	return 0;
}