// Lesson3 PTA assignments
// Part 2
#include <stdio.h>

void foot_inch(int cm, int *foot, int *inch)
{
    float feet = cm / 30.48;
    *foot = (int)feet;
    *inch = (int)((feet - *foot) * 12); 
    if (*inch == 12) 
    { 
        (*foot)++;
        *inch = 0;
    }
}

int main()
{
    int cm, foot, inch;
    scanf("%d", &cm);
    foot_inch(cm, &foot, &inch);
    printf("%d %d", foot, inch);
    return 0;
}