#define _CRT_SECURE_NO_WARNINGS

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.
//
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//
//AABCD����һ���ַ��õ�DAABC

#include <stdio.h>
#include <stdlib.h>



int right_arr(char a[5],char b[5])
{
	int k = 5;
	int i = 5;
	int c = 4;
	int d = 0;
	int jud = 0;
	char e[5] = { 0 };
	while (k)
	{
		jud = 0;
		i = k;
		d = 0;
		c = 4;
		for (; i > 0; i--)
		{
			//�Ӻ���ǰ�ţ������ȷ�b[3],c--,�´ξ��ܷ�b[2]
			e[c] = a[i - 1];
			c--;
		}
		for (; c >= 0; c--)
		{
			//û�����C�ĸ����Ϳ�ʼ���м���ǰ�ŵ���һ��
			e[c] = a[4 - d];
			d++;
		}
		for (i = 0; i < 5; i++)
		{
			printf("%c", e[i]);
			if (e[i] == b[i])
			{
				jud++;
			}
		}
		printf("\n");
		k--;
		//jud������Ϊ5��˵��5������һ��������1������ת����ַ�
		if (jud == 5)
		{
			return 1;
		}
	}
	return 0;
}

//int left_arr(a[5], b[5])
//{
//
//}


int main()
{
	char a[5] = "AABCD";
	char b[5] = "BCDAA";
	//if��else�ֱ��Ӧ����1��0�ĺ�������ֵ
	if (right_arr(a, b))
	{
		printf("����1������ת����ַ���\n");
	}
	else
	{
		printf("����0��������ת����ַ���\n");
	}
	system("pause");
	return 0;
}