// Lesson3 PTA assignments
// Part 3
#include <stdio.h>
#include <math.h>

int daffodils(int num)
{
    int dig1,dig2,dig3;
    if (100 <= num && num <= 999)
    {
        dig1 = num / 100;
        dig2 = num / 10 % 10;
        dig3 = num % 10;

        if (num == pow(dig1,3) + pow(dig2,3) + pow(dig3,3))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        return 2;
    }
}

int main()
{
    int num,result;
    scanf("%i",&num);
    result = daffodils(num);
    switch (result)
    {
        case 0:
        printf("%i不是水仙花数",num);
        break;

        case 1:
        printf("%i是水仙花数",num);
        break;

        case 2:
        printf("请输入一个三位数");
        break;
    }

    return 0;
}