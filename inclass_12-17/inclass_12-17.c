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
//    printf("请输入文件名：");
//    scanf("%s", filename);
//    file = fopen(filename, "w");
//    if (file == NULL) 
//    {
//        printf("无法打开文件 %s\n", filename);
//        return 1;
//    }
//    printf("请输入字符串，以 # 结束：\n");
//    getchar();
//    while (1) 
//    {
//        char ch = getchar();
//        if (ch == '#') {
//            break;
//        }
//        input_string[length++] = ch;
//        if (length >= 1000 - 1) {
//            printf("输入的字符串过长，自动截断。\n");
//            break;
//        }
//    }
//    input_string[length] = '\0';
//    fprintf(file, "%s\n", input_string);
//    fprintf(file, "字符个数: %d\n", length);
//    fclose(file);
//    printf("文件保存成功！\n");
//    return 0;
//}





//// 比较函数，用于 qsort
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
//        printf("无法创建文件 origin.dat\n");
//        return 1;  // 文件创建失败
//    }
//    fwrite(data, sizeof(int), 12, file);
//    fclose(file);
//    file = fopen("origin.dat", "rb");
//    if (file == NULL) 
//    {
//        printf("无法打开文件 origin.dat\n");
//        return 1;  // 文件打开失败
//    }
//    fread(data, sizeof(int), 12, file);
//    fclose(file);
//    qsort(data, 12, sizeof(int), compare);
//    file = fopen("sort.dat", "wb");
//    if (file == NULL) 
//    {
//        printf("无法创建文件 sort.dat\n");
//        return 1;  // 文件创建失败
//    }
//    fwrite(data, sizeof(int), 12, file);
//    fclose(file);
//    printf("数据处理完成，已将原始数据写入 origin.dat，并将排序后的数据写入 sort.dat。\n");
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
//	{1, "小一"},
//	{2, "小二"},
//	{3, "小三"},
//	{4, "小四"},
//	{5, "小五"}
//};
//int main()
//{
//	for (int i = 0; i < 5; i++)
//		scanf("%d%d%d", &student[i].chinese, &student[i].math, &student[i].english);
//	FILE* file;
//	file = fopen("stu.dat", "w");
//	if (file == NULL)
//	{
//		printf("无法创建文件\a\n");
//		return 1;
//	}
//	int aver[5];
//	for (int i = 0; i < 5; i++)
//	{
//		aver[i] = (student[i].chinese + student[i].math + student[i].english) / 3;
//	}
//	for (int i = 0; i < 5; i++)
//	{
//		fprintf(file, "学号：%d   姓名：%s   语文：%d   数学：%d   英语：%d   平均：%d\n",
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
		fprintf(file, "工号：%d   姓名：%s   电话号码：%.0lf   工作部门：%s\n", address[i].id, address[i].name, address[i].phone, address[i].work);
	fclose(file);
	printf("请输入查询的名字：");
	char input[20] = { 0 };
	scanf("%s", input);
	int i = 0;
	while (address[i].id != 0)
	{
		if (strcmp(address[i].name, input) == 0)
			break;
		i++;
	}
	printf("请输入修改的电话号码：");
	double input1 = 0;
	scanf("%lf", &input1);
	address[i].phone = input1;
	file = fopen("employ.txt", "w");
	for (int i = 0; i < 6; i++)
		fprintf(file, "工号：%d   姓名：%s   电话号码：%.0lf   工作部门：%s\n", address[i].id, address[i].name, address[i].phone, address[i].work);
	fclose(file);
	return 0;
}

//1  张伟  13812312365  市场部
//2  李娜  13923445678  人力资源部
//3  王磊  13734565478  财务部
//4  刘涛  13645632145  技术部
//5  赵静  13556765565  客户服务部
//6  周强  13467844569  采购部