#define _CRT_SECURE_NO_WARNINGS

//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩



#include <stdio.h>
#include <stdlib.h>


int doub(int a[11])
{
	int i = 0;
	int j = 0;
	int bit = 0;
	for (i = 0; i < 10;i++)
	{
		for (j = 0; j < 10; j++)
		{
			//���a����b��i������j��˵���ǳɶԳ��ֵ�����break֮
			if ((a[i] ^ a[j]) == 0 && i != j)
				break;
		}
		//����ǲ��ȵ�����������϶�����Ҫ�ҵ���
		if (a[i] ^ a[j])
			return a[i];
	}
}


int main()
{
	int a[11] = { 1, 1, 2, 2, 3, 4, 4, 5, 5, 6, 6 };
	int i = 0;
	printf("%d\n", doub(a));
	system("pause");
	return 0;
}