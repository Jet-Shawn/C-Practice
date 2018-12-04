#define _CRT_SECURE_NO_WARNINGS

//不使用（a+b）/2这种方式，求两个数的平均值。

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double aver(unsigned int a,unsigned int b)
{
	double av = 0;
	double bv = 0;
	double ret = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		//如果第一位是1，赋值0.5，如果不是第一位，赋值pow（2，i-1），2的i-1次方就是一半的数字。
		if ((a & 1) == 1)
		{
			if (i == 0)
			{
				av = 0.50;
			}
			else
			{
				av = pow(2, i - 1);
			}
		}
		//无论0，1每一次都要移位
		a >>= 1;
		if ((b & 1) == 1)
		{
			if (i == 0)
			{
				bv = 0.50;
			}
			else
			{
				bv = pow(2, i - 1);
			}
		}
		b >>= 1;
		ret +=(av + bv);
		//避免重复数字累加，每一次循环清0
		av = 0;
		bv = 0;
	}
	return ret;
}


int main()
{
	unsigned int a = 3;
	unsigned int b = 2;
	printf("%.1f", aver(a, b));
	system("pause");
	return 0;
}