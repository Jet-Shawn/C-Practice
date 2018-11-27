#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//½×³ËµÄµÝ¹éÊµÏÖ



int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
		return n*factorial(n - 1);
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", factorial(n));
	system("pause");
	return 0;
}