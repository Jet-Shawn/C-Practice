#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//实现一个函数判断year是不是闰年。


//普通闰年：能被4整除但不能被100整除的的年份
//世纪闰年：能被400整除



void leapyear(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
	{
		printf("是闰年\n");
	}
	else if (x % 400 == 0)
	{
		printf("是闰年\n");
	}
	else
		printf("不是闰年\n");
}


int main()
{
	int year = 0;
	printf("请输入一个年份：");
	scanf("%d", &year);
	leapyear(year);
	system("pause");
	return 0;
}