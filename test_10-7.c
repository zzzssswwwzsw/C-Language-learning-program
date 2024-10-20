#include<stdio.h>

int main()
{
	float sum = 0;
	float a = -1;
	for (int i = 1; i <= 100; i++)
	{
		sum = sum + a * (1.0 / i);
		a = a * (-1);
		printf("SUM = %f\n", sum);
	}
	return 0;
}