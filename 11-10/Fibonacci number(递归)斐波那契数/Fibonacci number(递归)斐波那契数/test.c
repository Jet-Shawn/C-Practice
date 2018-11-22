#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


//斐波那契数，亦称之为斐波那契数列（意大利语： Successione di Fibonacci)，
//又称黄金分割数列、费波那西数列、费波拿契数、费氏数列，
//指的是这样一个数列：1、1、2、3、5、8、13、21、……
//在数学上，斐波那契数列以如下被以递归的方法定义：
//F0 = 0，F1 = 1，Fn = Fn - 1 + Fn - 2（n >= 2，n∈N*），
//用文字来说，就是斐波那契数列由 0 和 1 开始，
//之后的斐波那契数列系数就由之前的两数相加。



//递归和非递归分别实现求第n个斐波那契数。


int Fib(int n)
{
	int a = 0;
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		//若想优化，可以查询“尾递归”方法。
		return Fib(n - 2) + Fib(n - 1);
	}
}




int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d", ret);
	system("pause");
	return 0;
}