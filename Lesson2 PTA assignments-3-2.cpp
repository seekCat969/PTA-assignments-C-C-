// Lesson2 PTA assignments
// Part 3-2
#include <stdio.h>

int main() 
{
    int num, digit1, digit2, digit3;
    
    scanf("%d",&num);
    
    digit1 = num / 100;  // 获取百位数字
    digit2 = num / 10 % 10;  // 获取十位数字
    digit3 = num % 10;  // 获取个位数字
    
    switch (digit2)
    {
        case 0:
            if (digit3 == 0)
            {
                printf("%d\n",digit1);
            }
            else
            {
                printf("%d%d\n",digit3,digit1);
            }
            break;
        default:
            if (digit3 == 0)
            {
                printf("%d%d",digit2,digit1);
            }
            else
            {
                printf("%d%d%d",digit3,digit2,digit1);
            }
            break;
    }
    
    return 0;
}