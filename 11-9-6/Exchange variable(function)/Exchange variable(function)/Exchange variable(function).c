#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <stdlib.h>


void Exchange(int *x, int *y)
{
	//��ʵ�δ����β�ʱ���β���ʵ�ε���ʱ����
	//�ı��ββ��ı�ʵ�Ρ�
	//����ָ��ֱ�����ڴ����޸�ֵ���Ӷ���ֵ����ʵ��
	*x = *x + *y;
	*y = *x - *y;
	*x = *x - *y;
}


int main()
{
	int x = 1;
	int y = 2;
	Exchange(&x,&y);
	printf("%d,%d\n", x, y);
	system("pause");
	return 0;
}
