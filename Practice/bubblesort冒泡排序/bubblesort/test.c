#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>

void bubblesort(int a[], int size)
{
	int tem = 0;
	for (int i = 0; i < size-1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (a[j] > a[j+1])
			{
				tem = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tem;
			}
		}
	}
}


int main()
{
	int a[10] = { 2, 5, 6, 7, 4, 3, 1, 8, 9, 0 };
	int i = 0;
	bubblesort(a, 10);
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}