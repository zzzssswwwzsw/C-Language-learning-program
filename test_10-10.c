#include<stdio.h>

//int main()
//{
//	int i = 1;
//	for (i; i <= 10; i++)
//	{
//		//if (i == 5)
//		//	break;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	for (int i = 0; i < 10; i++)   //ǰ�պ�
//	{
//		printf("%d  %d\n", arr[i], i);
//	}
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (; j < 3; j++)     //�������ʡ��
//			printf("%d  %d\n", i, j);
//	}
//	printf("%d  %d\n", i, j);
//	return 0;
//}



int main()
{
	int i = 0;
	int k = 0;
	for (i = 0, k = 0; k = 0; i++, k++)   //k = 0 ,һ���Ⱥ�Ϊ��ֵ��������ȣ��жϲ��ָ�ֵ0�����ʽ�����Ϊ0��0Ϊ�٣����Բ�ѭ��  
		k++;
	return 0;
}