#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222




int main()
{
	int i = 0;
	int n = 0;
	int m = 0;
	int sum = 0;
	int a = 0;
	printf("请输入一个小于十的数字：");
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		//后一个数是位数乘10再加上前一个数
		m = pow(10, i - 1);
		n = m + n;
		sum += n;
		if (i <= 4)
		{
			printf("%d+", a*n);
		}
		else
		{
			printf("%d", a*n);
		}
	}
	printf("=%d", sum*a);
	system("pause");
	return 0;
}