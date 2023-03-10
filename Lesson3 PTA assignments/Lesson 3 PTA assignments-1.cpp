// Lesson3 PTA assignments
// Part 1
#include <stdio.h>

void digit(int num, int *d1, int *d2, int *d3)
{
    *d1 = num / 100;
    *d2 = (num / 10) % 10;
    *d3 = num % 10;
}

int main()
{
    int num1, d1, d2, d3;
    scanf("%d", &num1);
    digit(num1, &d1, &d2, &d3);
    printf("%d = %d + %d * 10 + %d * 100", num1, d3, d2, d1);
    
    return 0;
}
