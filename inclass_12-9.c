#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//struct Wages
//{
//	char name[20];
//	int age;
//	int monthly_salary;
//};
//
//struct Wages salary[3] =
//{
//{"李明", 25, 2500},
//{"王利", 22, 2300},
//{"赵勇", 30, 3000},
//};
//
//
//int main()
//{
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%s  %d  %d", salary[i].name, salary[i].age, salary[i].monthly_salary);
//		printf("\n");
//	}
//	return 0;
//}





//struct Grade
//{
//	int id;
//	char name[20];
//	float Grade[3];
//};
//
//struct Grade grade[5] = { 0 };
//
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		scanf("%d %s", &grade[i].id, grade[i].name);
//		for (int j = 0; j < 3; j++)
//			scanf("%f", &grade[i].Grade[j]);
//	}
//	float aver_grade1 = (grade[0].Grade[0] + grade[1].Grade[0] + grade[2].Grade[0] + grade[3].Grade[0] + grade[4].Grade[0]) / 5;
//	float aver_grade2 = (grade[0].Grade[1] + grade[1].Grade[1] + grade[2].Grade[1] + grade[3].Grade[1] + grade[4].Grade[1]) / 5;
//	float aver_grade3 = (grade[0].Grade[2] + grade[1].Grade[2] + grade[2].Grade[2] + grade[3].Grade[2] + grade[4].Grade[2]) / 5;
//	printf("三门课的平均总成绩分别为：%.2f %.2f %.2f\n", aver_grade1, aver_grade2, aver_grade3);
//	float all_grade[5] = 
//	{ 
//		grade[0].Grade[0] + grade[0].Grade[1] + grade[0].Grade[2],
//		grade[1].Grade[0] + grade[1].Grade[1] + grade[1].Grade[2],
//		grade[2].Grade[0] + grade[2].Grade[1] + grade[2].Grade[2],
//		grade[3].Grade[0] + grade[3].Grade[1] + grade[3].Grade[2],
//		grade[4].Grade[0] + grade[4].Grade[1] + grade[4].Grade[2] 
//	};
//	int num = 0;
//	for (int i = 0; i < 4; i++)
//	{
//		if (all_grade[i] > all_grade[i + 1])
//			num = i;
//		else
//			num = i + 1;
//	}
//	printf("最高分学生的数据为：%d %s", grade[num].id, grade[num].name);
//	for (int i = 0; i < 3; i++)
//		printf(" %.2f", grade[num].Grade[i]);
//	return 0;
//}





//struct Structure1
//{
//	int Social_security_number;
//	struct Structure2
//	{
//		char name[20];
//		int year;
//	}structure2;
//};
//struct Structure1 structure1[5] =
//{
//{302039823,"John",1985},
//{302039776,"Alice",2000},
//{302039789,"Bob",1998},
//{302039812,"Emma",1995},
//{302039844,"Michael",1992}
//};
//void print(struct Structure1 *structure1)
//{
//	for (int i = 0; i < 5; i++)
//		printf("%d %s %d\n", (structure1 + i)->Social_security_number, (structure1 + i)->structure2.name, (structure1 + i)->structure2.year);
//}
//int main()
//{
//	print(structure1);
//	return 0;
//}





struct Boat
{
	char name[20];
	char id[20];
	float length;
	int Dock_No;
};
struct Boat boat[5];
int main()
{
	for (int i = 0; i < 5; i++)
		scanf("%s %s %f %d", boat[i].name, boat[i].id, &boat[i].length, &boat[i].Dock_No);
	for (int i = 0; i < 5; i++)
		printf("%s %s %.2f %d\n", boat[i].name, boat[i].id, boat[i].length, boat[i].Dock_No);
	return 0;
}