#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int getpri(int i)
{
	int n = 0;
	for (n = 2; n < i; n++)
	{
		if (i%n == 0)
		{
			return 1;
		}
	}
		return 0;
}


int main()
{
	int i = 0;
	scanf("%d", &i);
	int a=getpri(i);
	if (a == 0)
	{
		printf("是素数\n");
	}
	else
	{
		printf("不是素数\n");
	}
	system("pause");
	return 0;
}

//int main()
//{
//	int i = 0;
//	int j = 2;
//	int t = 1;
//	for (i = 101; i <200; i++)
//	{
//		for (j = 2; j <i; j++)
//		{
//			if (i%j == 0)
//			{
//				t = 0;
//				continue;
//			}
//		}
//		if (t == 1)
//		{
//			printf("%d\n", i);
//		}
//		t = 1;
//	}
//	system("pause");
//	return 0;
//}