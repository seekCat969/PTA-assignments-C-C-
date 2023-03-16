// Lesson4 PTA assignments
// Part 3
#include <stdio.h>

double Sign(double x) {
	if (x > 0) {
		return 1;
	}
	else if (x < 0) {
		return -1;
	}
	else {
		return 0;
	}
}

int main() {
   double x, y;
   scanf("%lf", &x);
   y = Sign(x);
   printf("%.0f\n", y);
   return 0;
}