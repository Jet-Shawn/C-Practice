#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��


void jiou_rev(int a[10])
{
	int i = 0;
	int sum = 0;
	int b[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		b[i] = a[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (b[i] == 1)
		{
			a[sum] = b[i];
			sum++;
		}
		//����������ż����
		else if (b[i] % 2)
		{
			a[sum] = b[i];
			sum++;
		}
		//ż������
		else
		{
			a[10-sum] = b[i];
		}
	}
}



int main()
{
	int a[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//scanf("%d", &a[i]);
		a[i] = i + 1;
	}
	jiou_rev(a);
	for (i = 0; i < 10; i++)
	{
		printf("%d", a[i]);
	}
	system("pause");
	return 0;
}