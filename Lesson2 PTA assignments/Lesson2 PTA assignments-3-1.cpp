//Lesson2 PTA assignments
//Part 3-1
#include <stdio.h>

int main() 
{
    int num, digit1, digit2, digit3;
    
    scanf("%d",&num);
    
    digit1 = num / 100;  // 获取百位数字
    digit2 = num / 10 % 10;  // 获取十位数字
    digit3 = num % 10;  // 获取个位数字
    
    if (digit3==0 && digit2!=0)
    {
        printf("%d%d\n",digit2,digit1);
    }
    else if (digit3!=0 && digit2==0)
    {
        printf("%d%d\n",digit3,digit1);
    }
    else if (digit3==0 && digit2==0)
    {
        printf("%d\n",digit1);
    }
    else if (digit3!=0 && digit2!=0)
    {
        printf("%d%d%d\n",digit3,digit2,digit1);
    }
               
    return 0;
}