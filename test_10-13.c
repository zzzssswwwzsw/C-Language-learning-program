#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;   //���ҵ�����
//	int sz = sizeof(arr) / sizeof(arr[0]);   //�����Ԫ�ظ���
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
//			printf("�ҵ���,�±�Ϊ��%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ�����");
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
		printf("���������루�㻹��%d�λ��ᣩ��", i);
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��¼�ɹ���\n");
			break;
		}
		printf("�������\n");
	}
	if (i == 0)
	{
		printf("��½ʧ�ܣ�");
	}
	return 0;
}