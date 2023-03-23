//Lesson6 PTA assignments
//Part 3
#include <stdio.h>
#include <math.h>

void pow_s(int num)
{
	int result;
	for (int times = 0; times <= num; times++)
	{
		result = pow(3, times);
		printf("pow(3,%d) = %d\n", times, result);
	}
}

void main()
{
	int num;
	scanf("%d", &num);
	pow_s(num);
}