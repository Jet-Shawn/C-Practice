#define _CRT_SECURE_NO_WARNINGS



//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

#include <stdio.h>
#include <stdlib.h>


int DigitSun(int n)
{
	if (n>9)
	{
		return DigitSun(n / 10) + n % 10;
	}
	else
		return n;
}

int main()
{
	int input = 0;
	scanf("%d", &input);
	printf("%d\n",DigitSun(input));
	system("pause");
	return 0;
}