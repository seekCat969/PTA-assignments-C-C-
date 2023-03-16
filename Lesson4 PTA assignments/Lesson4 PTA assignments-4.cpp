// Lesson4 PTA assignments
// Part 4
#include <stdio.h>
#include <math.h>
void T_area(int r1, int r2, int r3)
{
	if (r1 + r2 > r3 && r1 + r3 > r2 && r2 + r3 > r1)
	{
		float s, area, perimeter;
		s = (r1 + r2 + r3) * 0.5;
		area = sqrt(s * (s - r1) * (s - r2) * (s - r3));
		perimeter = r1 + r2 + r3;
		printf("area = %.2f; perimeter = %.2f", area, perimeter);
	}
	else
	{
		printf("These sides do not correspond to a valid triangle");
	}
}
int main()
{
	int r1, r2, r3;
	scanf("%d %d %d",&r1,&r2,&r3);
	T_area(r1, r2, r3);

	return 0;
}