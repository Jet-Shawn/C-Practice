#define _CRT_SECURE_NO_WARNINGS


#include "ArrMan.h"


void menu()
{
	printf("******************************\n");
	printf("********0.初始化数组 *********\n");
	printf("********1.清空数组   *********\n");
	printf("********2.数组元素逆置 *******\n");
	printf("******************************\n");
}

void showarr(int arr[])
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void init(int* arr)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//scanf("%d", &arr[i]);
		arr[i] =  i ;
	}
}



void empty(int* arr)
{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		arr[i] = 0;
	}
}


void reverse(int* arr)
{
	int i = 0;
	int tem = 0;
	for (i = 0; i < 9 - i; i++)
	{
		tem = arr[i];
		arr[i] = arr[9 - i];
		arr[9 - i] = tem;
	}
}