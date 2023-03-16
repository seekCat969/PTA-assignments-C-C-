// Lesson4 PTA assignments
// Part 1
#include <stdio.h>

int leap_year(int year)
{
	if (year % 4 == 0 && year % 100 != 0)
	{
		return 1;
	}
	else if (year % 400 == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void main()
{
	int year,result;
	scanf("%d",&year);
	result = leap_year(year);
	switch (result)
	{
		case 1:
			printf("%d is a leap year\n", year);
			break;
		case 0:
			printf("%d is not a leap year\n",year);
			break;
	}
}