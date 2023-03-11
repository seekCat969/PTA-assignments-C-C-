//while循环的基本语法格式
//int i = 1;
//while (i <= 10) 
// {
//  i++;
//  }


//for循环的基本语法格式
//for (int i = 1; i <= 10; i++) 
// {
//    printf("%d ",i);
// }

//循环结构——翻转任务分解
//（1）s = 1!+ 2!+ … + n!
//（2）如何判断一个数是否素数？求100到200之间的所有素数？
//（3）输出三角图形， 编程显示以下图形，详细参附件。（共N行，N由键盘输入）。
//（4）鸡兔同笼问题，鸡兔共30只，脚共有90个，编写一个程序，求鸡、兔各多少只？
//（5）兔子繁殖问题（斐波那契数列问题）著名意大利数学家斐波那契（Fibonacci）1202年提出一个有趣的问题。某人想知道一年内一对兔子可以生几对兔子。他筑了一道围墙，把一对大兔关在其中。已知每对大兔每个月可以生一对小兔，而每对小兔出生后第三个月即可成为“大兔”再生小兔。问一对兔子一年能繁殖几对小兔？。
//（6）如何将一元人民币换成一分、两分、五分的硬币，共有多少种不同的换法，每种换法具体是什么？要求：每种硬币至少有一枚，每种换法都保证硬币总数为50枚。
//（7）除以上内容外的其他循环应用拓展。

#include <stdio.h>

//1.阶乘求和
int sum_factor(int n)
{
	int i,j,sum;
	long int sum_add = 0;
	for (i = 1; i <= n; i++)
	{
		sum = 1;
		for (j = 1; j <= i; j++)
		{
			sum *= j;
		}
		sum_add += sum;
	}
	return sum_add;
}

// int main()
// {
// 	int n,result;
// 	scanf("%d",&n);
// 	result = sum_factor(n);
// 	printf("阶乘的和为:%ld",result);

// 	return 0;
// }

//2.求质数
int Prime_number(int n)
{
	if (n <= 1)
	{
		return 0;
	}
	else if (n == 2)
	{
		return 1;
	}
	else
	{
		int i;
		for (i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				return 0;
			}
			else
			{
				return 1;
			}
		}
	}
}

// int main()
// {
// 	int k,result,scope_L,scope_R;
// 	printf("请输入要求的素数的范围\n");
// 	scanf("%i %i",&scope_L,&scope_R);
// 	for (k = scope_L; k <= scope_R; k++)
// 	{
// 		result = Prime_number(k);
// 		switch (result)
// 		{
// 		case 1:
// 			printf("%i是素数\n",k);
// 			break;
// 		case 0:
// 			printf("%i不是素数\n",k);
// 			break;
// 		}
// 	}
// }

//3.输出三角形
void Triangle(int row, char image)
{
	for (int row_p = 1;row_p <= row;row_p++)
	{
		for (int space = 1;space <= row - row_p;space++)
		{
			printf(" ");
		}
		for (int img = 1;img <= 2 * row_p - 1; img++)
		{
			printf("%c", image);
		}
		printf("\n");
	}
}

int main()
{
	int n;
	char image;
	scanf("%i %c",&n,&image);
	Triangle(n,image);
	return 0;
}

//4.鸡兔同笼计算
void chicken_rabbit(int num,int feet)
{
	int chicken,rabbit;
	for (chicken = 1; chicken <= num; chicken++)
	{
		for (rabbit = 1; rabbit <= num; rabbit++) 
		{
			if (chicken*2 + rabbit*4 == feet && chicken + rabbit == num)
			{
				printf("鸡的只数为:%d\n兔子的只数为:%d",chicken,rabbit);
			}
		}
	}
}

//int main()
//{
//	int num,feet;
//	scanf("%d %d",&num,&feet);
//	chicken_rabbit(num,feet);
//
//	return 0;
//}

//5.斐波那契数列求第N项
int Fibonacci(int month)
{
	if (month == 1 || month == 2)
	{
		return 1;
	}
	else
	{
		return Fibonacci(month - 1) + Fibonacci(month - 2);
	}
}

// int main()
// {
// 	int month;
// 	scanf("%d",&month);
// 	printf("%d",Fibonacci(month));

// 	return 0;
// }

//6.人民币换算
void coin(int yuan)
{
	yuan *= 100;
	int c1,c2,c3,times=1;
	for (c1 = 1; c1 <= 50; c1++)
	{
		for (c2 = 1; c2 <= 25; c2++)
		{
			for (c3 = 1; c3 <= 20; c3++)
			{
				if (c1 + 2 * c2 + 5 * c3 == yuan)
				{
					printf("一分硬币个数为:%d\n二分硬币个数为:%d\n五分硬币个数为:%d\n第%d次输出\n",c1,c2,c3,times++);
					printf("\n");
				}
			}
		}
	}
}

// int main()
// {
// 	int yuan;
// 	scanf("%d",&yuan);

// 	coin(yuan);

// 	return 0;
// }