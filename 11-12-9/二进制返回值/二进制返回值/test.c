#define _CRT_SECURE_NO_WARNINGS

//写一个函数返回参数二进制中 1 的个数
//比如： 15 0000 1111 4 个 1
//程序原型：
//int count_one_bits(unsigned int value)
//{
//	// 返回 1的位数 

//'&'  按位与运算 按位与运算符"&"是双目运算符。
//其功能是参与运算的两数各对应的二进位相与。
//只有对应的两个二进位均为1时，结果位才为1 ，否则为0。
//参与运算的数以补码方式出现。


#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int a)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < 32;i++)
	{
		if ((a & 1) == 1)
		{
			ret++;
		}
		//每次循环的最后把a右移一位，可以消除刚才判断的一位
		a = a >> 1;
	}
	return ret;
}

int main()
{
	int a = 12567;
	printf("%d\n", count_one_bits(a));
	system("pause");
	return 0;
}