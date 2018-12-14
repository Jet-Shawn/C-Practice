#define _CRT_SECURE_NO_WARNINGS

//判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.
//
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//
//AABCD右旋一个字符得到DAABC

#include <stdio.h>
#include <stdlib.h>



int right_arr(char a[5],char b[5])
{
	int k = 5;
	int i = 5;
	int c = 4;
	int d = 0;
	int jud = 0;
	char e[5] = { 0 };
	while (k)
	{
		jud = 0;
		i = k;
		d = 0;
		c = 4;
		for (; i > 0; i--)
		{
			//从后往前放，所以先放b[3],c--,下次就能放b[2]
			e[c] = a[i - 1];
			c--;
		}
		for (; c >= 0; c--)
		{
			//没放完的C的个数就开始从中间往前放到第一个
			e[c] = a[4 - d];
			d++;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%c", e[i]);
			if (e[i] == b[i])
			{
				jud++;
			}
		}
		printf("\n");
		k--;
		//jud计数器为5，说明5个数都一样，返回1，是旋转后的字符
		if (jud == 5)
		{
			return 1;
		}
	}
	return 0;
}

//int left_arr(a[5], b[5])
//{
//
//}


int main()
{
	char a[5] = "AABCD";
	char b[5] = "BCDAA";
	//if和else分别对应返回1和0的函数返回值
	if (right_arr(a, b))
	{
		printf("返回1，是旋转后的字符串\n");
	}
	else
	{
		printf("返回0，不是旋转后的字符串\n");
	}
	system("pause");
	return 0;
}