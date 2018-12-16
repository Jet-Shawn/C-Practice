#define _CRT_SECURE_NO_WARNINGS

//一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个数字，编程实现。

#include <stdio.h>
#include <stdlib.h>


int diff(int b,int a[10])
{
	int j = 0;
	int sum = 0;
	for (j = 0; j < 10; j++)
	{
		//若在本身之外找到了一个相等的数，sum++,
		if (b == a[j])
		{
			sum++;
		}
	}
	//只有单独出现的数字的sum计数器为1（也就是只跟自己本身相等一次）
	if (sum == 1)
	{
		return b;
	}
	return 0;

}

int main()
{
	int a[10] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//依次传数过去，可以将每一个单独出现的数字（返回值不为0的数）单独打印出来
		if (diff(a[i],a))
		{
			printf("diffrent数字为%d\n", diff(a[i],a));
		}
	}
	system("pause");
	return 0;
}