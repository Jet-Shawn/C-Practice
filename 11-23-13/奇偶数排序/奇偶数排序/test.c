#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分


void jiou_rev(int a[10])
{
	int i = 0;
	int sum = 0;
	int b[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (b[i] == 1)
		{
			a[sum] = b[i];
			sum++;
		}
		//奇数进来，偶数走
		else if (b[i] % 2)
		{
			a[sum] = b[i];
			sum++;
		}
		//偶数进来
		else
		{
			a[10-sum] = b[i];
		}
	}
}



int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//scanf("%d", &a[i]);
		a[i] = i + 1;
	}
	jiou_rev(a);
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}