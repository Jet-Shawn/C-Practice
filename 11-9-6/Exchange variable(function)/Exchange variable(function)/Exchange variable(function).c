#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


void Exchange(int *x, int *y)
{
	//当实参传给形参时，形参是实参的临时拷贝
	//改变形参不改变实参。
	//利用指针直接在内存上修改值，从而将值传给实参
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}


int main()
{
	int x = 1;
	int y = 2;
	Exchange(&x,&y);
	printf("%d,%d\n", x, y);
	system("pause");
	return 0;
}
