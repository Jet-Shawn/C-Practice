#define _CRT_SECURE_NO_WARNINGS

////杨氏矩阵 
//有一个二维数组.
//数组的每行从左到右是递增的，每列从上到下是递增的.
//在这样的数组中查找一个数字是否存在。
//时间复杂度小于O(N);
//
//数组：
//1 2 3
//2 3 4
//3 4 5
//
//1 3 4
//2 4 5
//4 5 6
//
//1 2 3
//4 5 6
//7 8 9

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int y[][3] = { 0 };
	printf("请输入第一行的三个数字：\n");
	scanf("%d%d%d", &a, &b, &c);
	system("pause");
	return 0;
}