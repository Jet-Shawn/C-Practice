#define _CRT_SECURE_NO_WARNINGS

//求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3 ? ，则153是一个“水仙花数”。
//
//
//在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
//例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
//153 = 1^3 + 5^3 + 3^3。
//370 = 3^3 + 7^3 + 0^3。
//371 = 3^3 + 7^3 + 1^3。
//407 = 4^3 + 0^3 + 7^3。

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int g = 0;
	int s = 0;
	int b = 0;
	for (i = 0; i < 1000; i++)
	{
		if (i < 10 && (i*i*i) == i)
		{
			printf("%d ", i);
		}
		else if (i < 100)
		{
			g = i % 10;
			s = i / 10;
			if (g*g*g + (s*s*s) == i)
			{
				printf("%d ", i);
			}
			g = 0;
			s = 0;
		}
		else if (i < 1000)
		{
			g = i % 10;
			s = i % 100 / 10;
			b = i / 100;
			if (g*g*g + (s*s*s) + (b*b*b) == i)
			{
				printf("%d ", i);
			}
			g = 0;
			b = 0;
			b = 0;
		}
	}
	system("pause");
	return 0;
}


