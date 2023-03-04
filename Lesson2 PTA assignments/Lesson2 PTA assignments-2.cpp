// Lesson2 PTA assignments
// Part 2
#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    
    if (num1>num2)
    {
        printf("max=%d\n",num1);
    }
    else if (num1<num2)
    {
        printf("max=%d\n",num2);
    }
    
    return 0;
}