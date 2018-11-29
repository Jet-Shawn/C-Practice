#define _CRT_SECURE_NO_WARNINGS

//输出一个整数的每一位。

#include <stdio.h>
#include <stdlib.h>



void printArr(int n)
{
	int i = 0;
	do
	{
		printf("%d", n % 10);
		n=n/10;
		if (n<10)
		{
			printf("%d", n);
		}
	} while (n > 10);
}


int main()
{
	int n = 0;
	scanf("%d", &n);
	printArr(n);
	system("pause");
	return 0;
}