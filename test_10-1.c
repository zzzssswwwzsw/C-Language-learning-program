#include <stdio.h>;

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	printf("%d", a);
//
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//{
//	printf("%d", sizeof(int*));
//	return 0;
//}



struct Stu
{
	char name[20];
	int age;
	double score;
};


int main()
{

	struct Stu s = { "ÕÅÈı", 20, 80.5 };
	printf("1£º%s %d %lf\n", s.name, s.age, s.score);

	struct Stu* ps = &s;
	printf("2£º%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3£º%s %d %lf\n", ps->name, ps->age, ps->score);

	return 0;
}
