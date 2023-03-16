// Lesson4 PTA assignments
// Part 2
#include <stdio.h>

void discount(float yuan)
{
	if (yuan < 100)
	{
		printf("%.2f", yuan);
	}
	else if (100 <= yuan && yuan < 200)
	{
		yuan = yuan * 0.95;
		printf("%.2f", yuan);
	}
	else if (200 <= yuan && yuan < 500)
	{
		yuan = yuan * 0.9;
		printf("%.2f", yuan);
	}
	else if (500 <= yuan && yuan < 1000)
	{
		yuan = yuan * 0.85;
		printf("%.2f", yuan);
	}
	else if (1000 <= yuan)
	{
		yuan = yuan * 0.80;
		printf("%.2f", yuan);
	}
}
void main()
{
	float yuan;
	scanf("%f",&yuan);
	discount(yuan);
}