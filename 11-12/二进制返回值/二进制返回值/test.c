#define _CRT_SECURE_NO_WARNINGS

//дһ���������ز����������� 1 �ĸ���
//���磺 15 0000 1111 4 �� 1
//����ԭ�ͣ�
//int count_one_bits(unsigned int value)
//{
//	// ���� 1��λ�� 

//'&'  ��λ������ ��λ�������"&"��˫Ŀ�������
//�书���ǲ����������������Ӧ�Ķ���λ���롣
//ֻ�ж�Ӧ����������λ��Ϊ1ʱ�����λ��Ϊ1 ������Ϊ0��
//������������Բ��뷽ʽ���֡�


#include <stdio.h>
#include <stdlib.h>

int count_one_bits(unsigned int a)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < 32;i++)
	{
		if ((a & 1) == 1)
		{
			ret++;
		}
		//ÿ��ѭ��������a����һλ�����������ղ��жϵ�һλ
		a = a >> 1;
	}
	return ret;
}

int main()
{
	int a = 12567;
	printf("%d\n", count_one_bits(a));
	system("pause");
	return 0;
}