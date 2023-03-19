//Lesson5 PTA assignments
//Part 1-1
#include <stdio.h>

void sort_simple(int dig1,int dig2,int dig3)
{
	int exchange;
	int dsort[3] = { dig1,dig2,dig3 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2 - i; j++)
		{
			if (dsort[j] > dsort[j + 1])
			{
				exchange = dsort[j];
				dsort[j] = dsort[j + 1];
				dsort[j + 1] = exchange;
			}
		}
	}
	printf("%d,%d,%d", dsort[0], dsort[1], dsort[2]);
}

void main()
{
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	sort_simple(num1,num2,num3);
}