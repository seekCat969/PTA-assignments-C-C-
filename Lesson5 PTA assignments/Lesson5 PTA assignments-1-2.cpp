//Lesson5 PTA assignments
//Part 1-2
#include <stdio.h>

//第一题
void sort(int num1 ,int num2 ,int num3)
{
	if (num1 < num2 && num1 < num3)
	{
		if (num2 < num3)
		{
			printf("%d,%d,%d", num1, num2, num3);
		}
		else
		{
			printf("%d,%d,%d", num1, num3, num2);
		}
	}	
	if (num2 < num1 && num2 < num3)
	{
		if (num1 < num3)
		{
			printf("%d,%d,%d", num2, num1, num3);
		}
		else
		{
			printf("%d,%d,%d", num2, num3, num1);
		}
	}
	if (num3 < num1 && num3 < num2)
	{
		if (num1 < num2)
		{
			printf("%d,%d,%d", num3, num1, num2);
		}
		else
		{
			printf("%d,%d,%d", num3, num2, num1);
		}
	}
}
void main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	sort(num1, num2, num3);
}