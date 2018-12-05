#define _CRT_SECURE_NO_WARNINGS

//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）



#include <stdio.h>
#include <stdlib.h>


int doub(int a[11])
{
	int i = 0;
	int j = 0;
	int bit = 0;
	for (i = 0; i < 10;i++)
	{
		for (j = 0; j < 10; j++)
		{
			//如果a等于b且i不等于j，说明是成对出现的数，break之
			if ((a[i] ^ a[j]) == 0 && i != j)
				break;
		}
		//如果是不等的数来到这里，肯定就是要找的数
		if (a[i] ^ a[j])
			return a[i];
	}
}


int main()
{
	int a[11] = { 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6 };
	int i = 0;
	printf("%d\n", doub(a));
	system("pause");
	return 0;
}