#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int line = 0;
	int i, j;
	printf("请输入要打印的正三角行数：");
	scanf("%d", &line);
	//开始打印上三角
	for (i = 1; i <= line; i++)
	{
		//打印空格
		for (j = 1; j <= line - i; j++)
		{
			printf(" ");
		}
		//打印符号
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		//此时一行已经打印完，换行
		printf("\n");
	}
	//开始打印下三角
	for (i = 1; i < line; i++)
	{
		//打印空格
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		//打印符号
		for (j = 1; j < 2 * (line - i); j++)
		{
			printf("*");
		}
		//换行
		printf("\n");
	}
	system("pause");
	return 0;
}