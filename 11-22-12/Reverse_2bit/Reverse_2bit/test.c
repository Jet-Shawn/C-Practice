#define _CRT_SECURE_NO_WARNINGS

//编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	long long int value = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n & 1) == 1)
		{
			value += (long long int)pow(2, 31 - i);
		}
		n = n >> 1;
	}
	return value;
}
int main()
{
	unsigned int n = 25;
	printf("%d", reverse_bit(n));
	system("pause");
	return 0;
}