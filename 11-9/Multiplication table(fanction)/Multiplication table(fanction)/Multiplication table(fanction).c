#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
//����9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���


void get_Multable()
{
	int i = 1;
	int j = 1;
	int row = 1;
	printf("��������Ҫ�ĳ˷��ھ�����������");
	scanf("%d", &row);
	for (i = 1; i <= row; i++)
	{
		//j<=i���Կ���һ�е�ʽ�Ӳ�����j�Ĵ�С
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", i, j, i*j);
		}
		printf("\n");
	}
}



int main()
{
	get_Multable();
	system("pause");
	return 0;
}