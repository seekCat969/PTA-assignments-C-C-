//Lesson6 PTA assignments
//Part 1
#include <stdio.h>

void SF(int num)
{
	long int sum_adds = 0;
	for (int i = 1; i <= num; i++)
	{
		sum_adds += i;
	}
	printf("%ld", sum_adds);
}

int main()
{
	int num;
	scanf("%d", &num);
	SF(num);
	return 0;
}
