#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>



int Rec(int n,int k)
{
	if (k <= 1)
	{
		return n;
	}
	else
	{
		//µÝ¹éÑ­»·
		return n*Rec(n,k-1);
	}
}



int main()
{
	int n = 3;
	int k = 3;
	printf("%d\n", Rec(n, k));
	system("pause");
	return 0;
}