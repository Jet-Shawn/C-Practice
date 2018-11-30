#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//编程实现：
//两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//0111 1100 1111
//1000 1111 1011
//输出例子 : 7

//int diff_bit(unsigned int m,unsigned int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m|0)!=(n|0))
//		{
//			sum++;
//		}
//		m >>= 1;
//		n >>= 1;
//	}
//	return sum;
//}

int diff_bit(unsigned int m,unsigned int n)
{
	int ret = 0;
	int sum = 0;
	int i = 0;
	ret = m^n;
	for (i = 0; i < 32; i++)
	{
		if (ret & 1)
		{
			sum++;
		}
		ret >>= 1;
	}
	return sum;
}

int main()
{
	unsigned int m = 0;
	unsigned int n = 0;
	printf("请输入m和n的值:");
	scanf("%d%d", &m, &n);
	printf("\n不同的值个数为：%d\n",diff_bit(m,n));
	system("pause");
	return 0;
}