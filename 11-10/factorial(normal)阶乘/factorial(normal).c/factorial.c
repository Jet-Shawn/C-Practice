#define _CRT_SECURE_NO_WARNINGS

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�


#include <stdio.h>
#include <stdlib.h>


int factorial(int n)
{
	int sum = 1;
	for (; n > 0; n--)
	{
		sum = n*sum;
	}
	return sum;
}

int main()
{
	int n = 0;
	printf("������һ������");
	scanf("%d", &n);
	printf("%d\n", factorial(n));
	system("pause");
	return 0;
}