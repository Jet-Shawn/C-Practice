#define _CRT_SECURE_NO_WARNINGS


//print(dig)�ݹ��ӡ
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ



#include <stdio.h>
#include <stdlib.h>


int print(int n)
{
	if (n < 10)
	{
		printf("%d\n", n);
		return n;

	}
	else
	{
		printf("%d", n % 10);
		return print(n / 10);
	}
}

int main()
{
	int n = 12345;
	print(n);
	system("pause");
	return 0;
}