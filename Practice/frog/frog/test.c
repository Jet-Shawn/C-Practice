#define _CRT_SECURE_NO_WARNINGS

//����ÿ����һ�׻����ף��ж����ַ�����������
#include <stdio.h>
#include <stdlib.h>

int frog(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		//frog(n-1)�������е���һ�����frog(n-2)�������е����������
		return frog(n - 1) + frog(n - 2);
}


int main()
{
	int n = 4;
	int ret = frog(n);
	printf("��%d�ְ취\n", ret);
	system("pause");
	return 0;
}