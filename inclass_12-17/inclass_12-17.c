#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


//int main() 
//{
//    char filename[100];
//    char input_string[1000];
//    int length = 0;
//    FILE* file;
//    printf("�������ļ�����");
//    scanf("%s", filename);
//    file = fopen(filename, "w");
//    if (file == NULL) 
//    {
//        printf("�޷����ļ� %s\n", filename);
//        return 1;
//    }
//    printf("�������ַ������� # ������\n");
//    getchar();
//    while (1) 
//    {
//        char ch = getchar();
//        if (ch == '#') {
//            break;
//        }
//        input_string[length++] = ch;
//        if (length >= 1000 - 1) {
//            printf("������ַ����������Զ��ضϡ�\n");
//            break;
//        }
//    }
//    input_string[length] = '\0';
//    fprintf(file, "%s\n", input_string);
//    fprintf(file, "�ַ�����: %d\n", length);
//    fclose(file);
//    printf("�ļ�����ɹ���\n");
//    return 0;
//}





//// �ȽϺ��������� qsort
//int compare(const void* a, const void* b) {
//    return (*(int*)a - *(int*)b);
//}
//
//int main() 
//{
//    int data[12] = { 96, 87, 78, 93, 21, 4, -5, 92, 85, 87, 6, 72 };
//    FILE* file;
//    file = fopen("origin.dat", "wb");
//    if (file == NULL) 
//    {
//        printf("�޷������ļ� origin.dat\n");
//        return 1;  // �ļ�����ʧ��
//    }
//    fwrite(data, sizeof(int), 12, file);
//    fclose(file);
//    file = fopen("origin.dat", "rb");
//    if (file == NULL) 
//    {
//        printf("�޷����ļ� origin.dat\n");
//        return 1;  // �ļ���ʧ��
//    }
//    fread(data, sizeof(int), 12, file);
//    fclose(file);
//    qsort(data, 12, sizeof(int), compare);
//    file = fopen("sort.dat", "wb");
//    if (file == NULL) 
//    {
//        printf("�޷������ļ� sort.dat\n");
//        return 1;  // �ļ�����ʧ��
//    }
//    fwrite(data, sizeof(int), 12, file);
//    fclose(file);
//    printf("���ݴ�����ɣ��ѽ�ԭʼ����д�� origin.dat����������������д�� sort.dat��\n");
//    return 0;
//}





//struct Student
//{
//	int id;
//	char name[20];
//	int chinese;
//	int math;
//	int english;
//};
//struct Student student[5] =
//{
//	{1, "Сһ"},
//	{2, "С��"},
//	{3, "С��"},
//	{4, "С��"},
//	{5, "С��"}
//};
//int main()
//{
//	for (int i = 0; i < 5; i++)
//		scanf("%d%d%d", &student[i].chinese, &student[i].math, &student[i].english);
//	FILE* file;
//	file = fopen("stu.dat", "w");
//	if (file == NULL)
//	{
//		printf("�޷������ļ�\a\n");
//		return 1;
//	}
//	int aver[5];
//	for (int i = 0; i < 5; i++)
//	{
//		aver[i] = (student[i].chinese + student[i].math + student[i].english) / 3;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		fprintf(file, "ѧ�ţ�%d   ������%s   ���ģ�%d   ��ѧ��%d   Ӣ�%d   ƽ����%d\n",
//			student[i].id,
//			student[i].name,
//			student[i].chinese,
//			student[i].math,
//			student[i].english,
//			aver[i]);
//	}
//	fclose(file);
//	return 0;
//}





struct Address
{
	int id;
	char name[20];
	double phone;
	char work[20];
};
struct Address address[6];

int main()
{
	for (int i = 0; i < 6; i++)
		scanf("%d%s%lf%s", &address[i].id, &address[i].name, &address[i].phone, &address[i].work);
	FILE* file;
	file = fopen("employ.txt", "w");
	for (int i = 0; i < 6; i++)
		fprintf(file, "���ţ�%d   ������%s   �绰���룺%.0lf   �������ţ�%s\n", address[i].id, address[i].name, address[i].phone, address[i].work);
	fclose(file);
	printf("�������ѯ�����֣�");
	char input[20] = { 0 };
	scanf("%s", input);
	int i = 0;
	while (address[i].id != 0)
	{
		if (strcmp(address[i].name, input) == 0)
			break;
		i++;
	}
	printf("�������޸ĵĵ绰���룺");
	double input1 = 0;
	scanf("%lf", &input1);
	address[i].phone = input1;
	file = fopen("employ.txt", "w");
	for (int i = 0; i < 6; i++)
		fprintf(file, "���ţ�%d   ������%s   �绰���룺%.0lf   �������ţ�%s\n", address[i].id, address[i].name, address[i].phone, address[i].work);
	fclose(file);
	return 0;
}

//1  ��ΰ  13812312365  �г���
//2  ����  13923445678  ������Դ��
//3  ����  13734565478  ����
//4  ����  13645632145  ������
//5  �Ծ�  13556765565  �ͻ�����
//6  ��ǿ  13467844569  �ɹ���