//Lesson5 PTA assignments
//Part 2-1
#include <stdio.h>

int *min2(int num1,int num2)
{
	static int num[2];
	if (num1 < num2)
	{
		num[0] = num1;
		num[1] = num2;
	}
	else
	{
		num[0] = num2;
		num[1] = num1;
	}
	return num;
}

int *extract(int num)
{
	static int order[3];
	int dig1, dig2, dig3;
	dig1 = num / 100;
	dig2 = num / 10 % 10;
	dig3 = num % 10;
	order[0] = dig1;
	order[1] = dig2;
	order[2] = dig3;
	return order;
}

void min_simple(int num)
{
	int exchange, result;
	int *dsmin = extract(num);
	int dig1 = dsmin[0], dig2 = dsmin[1], dig3 = dsmin[2];
	if (dig2 != 0 && dig3 != 0)
	{
		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 2 - i; j++)
			{
				if (dsmin[j] > dsmin[j + 1])
				{
					exchange = dsmin[j];
					dsmin[j] = dsmin[j + 1];
					dsmin[j + 1] = exchange;
				}
			}
		}
		result = dsmin[0] * 100 + dsmin[1] * 10 + dsmin[2];
		printf("%d", result);
	}
	if (dig2 == 0 || dig3 == 0)
	{
		if (dig2 != 0 && dig3 == 0)
		{
			int *dsmin2 = min2(dig1, dig2);
			result = dsmin2[0] * 100 + dsmin2[1];
			printf("%d", result);
		}
		else if (dig2 == 0 && dig3 != 0)
		{
			int *dsmin2 = min2(dig1, dig3);
			result = dsmin2[0] * 100 + dsmin2[1];
			printf("%d", result);
		}
		else
		{
			result = dig1 * 100;
			printf("%d", result);
		}
	}
}
void main()
{
	int num;
	scanf("%d", &num);
	min_simple(num);
}
