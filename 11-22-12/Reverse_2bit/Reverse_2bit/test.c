#define _CRT_SECURE_NO_WARNINGS

//��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
//2550136832

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


unsigned int reverse_bit(unsigned int n)
{
	int i = 0;
	long long int value = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n & 1) == 1)
		{
			value += (long long int)pow(2, 31 - i);
		}
		n = n >> 1;
	}
	return value;
}
int main()
{
	unsigned int n = 25;
	printf("%d", reverse_bit(n));
	system("pause");
	return 0;
}