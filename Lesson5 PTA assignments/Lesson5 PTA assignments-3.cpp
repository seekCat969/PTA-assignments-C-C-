//Lesson5 PTA assignments
//Part 3
#include <stdio.h>

void calculator(int num1,int num2,char cal)
{
	int result;
	switch (cal)
	{
	case '+':
		result = num1 + num2;
		printf("%d", result);
		break;
	case '-':
		result = num1 - num2;
		printf("%d", result);
		break;
	case '*':
		result = num1 * num2;
		printf("%d", result);
		break;
	default:
		printf("error");
	}
}

void main()
{
	int num1, num2;
	char cal;
	scanf("%d%c%d", &num1, &cal, &num2);
	calculator(num1, num2, cal);
}