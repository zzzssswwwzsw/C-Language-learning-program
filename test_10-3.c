#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
	int a = 1;
	while (a <= 100)
	{
		if(a % 2)
			printf("%d\n", a);
		a++;
	}
	
	return 0;
}