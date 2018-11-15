#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。


void get_Multable()
{
	int i = 1;
	int j = 1;
	int row = 1;
	printf("请输入需要的乘法口诀表行列数：");
	scanf("%d", &row);
	for (i = 1; i <= row; i++)
	{
		//j<=i可以控制一行的式子不超过j的大小
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
}



int main()
{
	get_Multable();
	system("pause");
	return 0;
}