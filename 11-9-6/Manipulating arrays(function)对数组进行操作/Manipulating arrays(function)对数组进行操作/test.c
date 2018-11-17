#define _CRT_SECURE_NO_WARNINGS



#include "ArrMan.h"


//创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。



int main()
{
	int i = 0;
	int arr[10] = { 0 };
	//打印菜单
	menu();
	//初始化数组函数
	while (1)
	{
		printf("请输入要求：");
		scanf("%d", &i);
		if (i == 0)
		{
			//此部分已经完成
			init(&arr);
			showarr(arr);
		}
		else if (i == 1)
		{
			empty(&arr);
			showarr(arr);
		}
		else if (i == 2)
		{
			reverse(&arr);
			showarr(arr);
		}
		else
			printf("请重新输入");
	}
	system("pause");
	return 0;
}