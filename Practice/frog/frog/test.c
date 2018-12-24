#define _CRT_SECURE_NO_WARNINGS

//青蛙每次跳一阶或两阶，有多少种方法跳到顶端
#include <stdio.h>
#include <stdlib.h>

int frog(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		//frog(n-1)代表所有的跳一格情况frog(n-2)代表所有的跳两阶情况
		return frog(n - 1) + frog(n - 2);
}


int main()
{
	int n = 4;
	int ret = frog(n);
	printf("有%d种办法\n", ret);
	system("pause");
	return 0;
}