#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//0111 1100 1111
//1000 1111 1011
//������� : 7

//int diff_bit(unsigned int m,unsigned int n)
//{
//	int sum = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((m|0)!=(n|0))
//		{
//			sum++;
//		}
//		m >>= 1;
//		n >>= 1;
//	}
//	return sum;
//}

int diff_bit(unsigned int m,unsigned int n)
{
	int ret = 0;
	int sum = 0;
	int i = 0;
	ret = m^n;
	for (i = 0; i < 32; i++)
	{
		if (ret & 1)
		{
			sum++;
		}
		ret >>= 1;
	}
	return sum;
}

int main()
{
	unsigned int m = 0;
	unsigned int n = 0;
	printf("������m��n��ֵ:");
	scanf("%d%d", &m, &n);
	printf("\n��ͬ��ֵ����Ϊ��%d\n",diff_bit(m,n));
	system("pause");
	return 0;
}