#define _CRT_SECURE_NO_WARNINGS

//һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ����������֣����ʵ�֡�

#include <stdio.h>
#include <stdlib.h>


int diff(int b,int a[10])
{
	int j = 0;
	int sum = 0;
	for (j = 0; j < 10; j++)
	{
		//���ڱ���֮���ҵ���һ����ȵ�����sum++,
		if (b == a[j])
		{
			sum++;
		}
	}
	//ֻ�е������ֵ����ֵ�sum������Ϊ1��Ҳ����ֻ���Լ��������һ�Σ�
	if (sum == 1)
	{
		return b;
	}
	return 0;

}

int main()
{
	int a[10] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 6 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		//���δ�����ȥ�����Խ�ÿһ���������ֵ����֣�����ֵ��Ϊ0������������ӡ����
		if (diff(a[i],a))
		{
			printf("diffrent����Ϊ%d\n", diff(a[i],a));
		}
	}
	system("pause");
	return 0;
}