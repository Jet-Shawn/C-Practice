#define _CRT_SECURE_NO_WARNINGS

//��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double aver(unsigned int a,unsigned int b)
{
	double av = 0;
	double bv = 0;
	double ret = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		//�����һλ��1����ֵ0.5��������ǵ�һλ����ֵpow��2��i-1����2��i-1�η�����һ������֡�
		if ((a & 1) == 1)
		{
			if (i == 0)
			{
				av = 0.50;
			}
			else
			{
				av = pow(2, i - 1);
			}
		}
		//����0��1ÿһ�ζ�Ҫ��λ
		a >>= 1;
		if ((b & 1) == 1)
		{
			if (i == 0)
			{
				bv = 0.50;
			}
			else
			{
				bv = pow(2, i - 1);
			}
		}
		b >>= 1;
		ret +=(av + bv);
		//�����ظ������ۼӣ�ÿһ��ѭ����0
		av = 0;
		bv = 0;
	}
	return ret;
}


int main()
{
	unsigned int a = 3;
	unsigned int b = 2;
	printf("%.1f", aver(a, b));
	system("pause");
	return 0;
}