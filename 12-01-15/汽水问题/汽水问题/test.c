#define _CRT_SECURE_NO_WARNINGS


//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
//编程实现。

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 20;
	int i = 0;
	//空瓶子数量
	int putt = 0;
	//喝到的汽水数
	int sum = 0;
	//每一次循环相当于每次只出一块钱买汽水，买了20次，也就是20块
	for (i = 1; i <= n; i++)
	{
		//空瓶++
		putt++;
		//若两个空瓶，喝到的多两瓶（一瓶钱买的，一瓶拿空的换的）
		if (putt == 2)
		{
			sum += 2;
			//换来的汽水又多一个瓶子，所以putt=1
			putt = 1;
		}
		else
			sum++;
	}
	printf("最终喝到了%d\n", sum);
	system("pause");
	return 0;
}