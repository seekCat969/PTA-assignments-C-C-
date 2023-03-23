//Lesson6 PTA assignments
//Part 4
#include <stdio.h>

void Fraction(int num)
{
	double result = 0;
	for (int times = 1; times <= num; times++)
	{
		result += 1.0 / times;
	}
	printf("sum = %.6lf", result);
}

void main()
{
	int num;
	scanf("%d", &num);
	Fraction(num);
}