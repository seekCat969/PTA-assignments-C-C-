//Lesson5 PTA assignments
//Part 2-2
#include <stdio.h>

void min(int num)
{
	int dig1, dig2, dig3, result;
	dig1 = num / 100;
	dig2 = num / 10 % 10;
	dig3 = num % 10;

	if (dig2 != 0 && dig3 != 0)
	{
		if (dig1 < dig2 && dig1 < dig3)
		{
			if (dig2 < dig3)
			{
				result = dig3 + dig2 * 10 + dig1 * 100;
				printf("%d", result);
			}
			else
			{
				result = dig2 + dig3 * 10 + dig1 * 100;
				printf("%d", result);
			}
		}
		if (dig2 < dig1 && dig2 < dig3)
		{
			if (dig1 < dig3)
			{
				result = dig3 + dig1 * 10 + dig2 * 100;
				printf("%d", result);
			}
			else
			{
				result = dig1 + dig3 * 10 + dig2 * 100;
				printf("%d", result);
			}
		}
		if (dig3 < dig2 && dig3 < dig1)
		{
			if (dig1 < dig2)
			{
				result = dig2 + dig1 * 10 + dig3 * 100;
				printf("%d", result);
			}
			else
			{
				result = dig1 + dig2 * 10 + dig3 * 100;
				printf("%d", result);
			}
		}
		if (dig1 == dig2 && dig1 == dig3)
		{
			result = dig3 + dig2 * 10 + dig1 * 100; 
			printf("%d", result); 
		}
	}
	else if (dig2 != 0 && dig3 == 0)
	{
		if (dig1 < dig2)
		{
			result = dig2 + dig1 * 100;
			printf("%d", result);
		}
		else
		{
			result = dig1 + dig2 * 100;
			printf("%d", result); 
		}
	}
	else if (dig2 == 0 && dig3 != 0)
	{
		if (dig1 < dig3)
		{
			result = dig3 + dig1 * 100;
			printf("%d", result);
		}
		else
		{
			result = dig1 + dig3 * 100;
			printf("%d", result);
		}
	}
	else if (dig2 == 0 && dig3 == 0)
	{
		result = dig1 * 100;
		printf("%d", result);
	}
}