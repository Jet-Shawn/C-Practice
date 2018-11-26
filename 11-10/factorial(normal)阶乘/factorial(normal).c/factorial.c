#define _CRT_SECURE_NO_WARNINGS

//递归和非递归分别实现求n的阶乘


#include <stdio.h>
#include <stdlib.h>


int factorial(int n)
{
	int sum = 1;
	for (; n > 0; n--)
	{
		sum = n*sum;
	}
	return sum;
}

int main()
{
	int n = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
	return 0;
}