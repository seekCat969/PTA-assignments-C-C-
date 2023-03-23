//Lesson6 PTA assignments
//Part 2
#include <stdio.h>

void factor(int num)
{
	long int sum_adds = 1;
	for (int i = 1; i <= num; i++)
	{
		sum_adds *= i;
	}
	printf("product = %ld", sum_adds);
}

int main()
{
	int num;
	scanf("%d", &num);
	factor(num);
	return 0;
}