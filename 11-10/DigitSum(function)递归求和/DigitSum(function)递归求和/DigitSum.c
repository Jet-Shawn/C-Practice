#define _CRT_SECURE_NO_WARNINGS



//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19

#include <stdio.h>
#include <stdlib.h>


int DigitSun(int n)
{
	if (n>9)
	{
		return DigitSun(n / 10) + n % 10;
	}
	else
		return n;
}

int main()
{
	int input = 0;
	scanf("%d", &input);
	printf("%d\n",DigitSun(input));
	system("pause");
	return 0;
}