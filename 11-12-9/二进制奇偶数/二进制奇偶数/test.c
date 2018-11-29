#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。



//两个字符串数组，一个放奇数一个放偶数
//此处必须[32]规定j和o的大小，不然在内存中j和o是连续创建的，地址贴在一起会让两个数组混搭
char j[32] = { 0 };
char o[32] = { 0 };
//循环变量i，要用两次所以放全局了
int i = 0;


void two_bit(int n)
{
	int i = 0;
	//pd的作用是判断奇数和偶数
	int pd = 1;
	for (; i < 32; i++)
	{
		//只有n按位与1为1且pd判断为奇数时才赋值
		if ((n & 1) == 1 && pd % 2 == 1)
		{
			j[i] = '1';
			o[i] = '-';
		}
		else if ((n & 1) == 0 && pd % 2 == 1)
		{
			j[i] = '0';
			o[i] = '-';
		}
		if ((n & 1) == 1 && pd % 2 == 0)
		{
			o[i] = '1';
			j[i] = '-';
		}
		else if ((n & 1) == 0 && pd % 2 == 0)
		{
			o[i] = '0';
			j[i] = '-';
		}
		//这两个条件要放循环结束的地方，不然可能会在一次循环中加两次或者移位两次
		pd++;
		n = n >> 1;
	}
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	two_bit(n);
	printf("奇数序列：");
	for (i = 0; i < 32; i++)
	{
		printf("%c", j[i]);
	}
	printf("\n");
	printf("偶数序列：");
	for (i = 0; i < 32; i++)
	{
		printf("%c", o[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}