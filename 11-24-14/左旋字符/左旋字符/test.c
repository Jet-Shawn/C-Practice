#define _CRT_SECURE_NO_WARNINGS

//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include <stdio.h>
#include <stdlib.h>


void right_arr(char a[4], int k)
{
	int i = k;
	int c = 3;
	int d = 0;
	char b[4] = { 0 };
	for (; i > 0; i--)
	{
		//从后往前放，所以先放b[3],c--,下次就能放b[2]
		b[c] = a[i - 1];
		c--;
	}
	for (; c >= 0; c--)
	{
		//没放完的C的个数就开始从中间往前放到第一个
		b[c] = a[3-d];
		d++;
	}
	for (i = 0; i < 4; i++)
	{
		printf("%c", b[i]);
	}
}


int main()
{
	char arr[4] = "ABCD";
	int k = 0;
	printf("请输入要向左旋转的字符个数：");
	scanf("%d", &k);
	right_arr(arr, k);
	system("pause");
	return 0;
}