#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


int main()
{
	int line = 0;
	int i, j;
	printf("������Ҫ��ӡ��������������");
	scanf("%d", &line);
	//��ʼ��ӡ������
	for (i = 1; i <= line; i++)
	{
		//��ӡ�ո�
		for (j = 1; j <= line - i; j++)
		{
			printf(" ");
		}
		//��ӡ����
		for (j = 1; j <= (2 * i - 1); j++)
		{
			printf("*");
		}
		//��ʱһ���Ѿ���ӡ�꣬����
		printf("\n");
	}
	//��ʼ��ӡ������
	for (i = 1; i < line; i++)
	{
		//��ӡ�ո�
		for (j = 1; j <= i; j++)
		{
			printf(" ");
		}
		//��ӡ����
		for (j = 1; j < 2 * (line - i); j++)
		{
			printf("*");
		}
		//����
		printf("\n");
	}
	system("pause");
	return 0;
}