#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


//��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222




int main()
{
	int i = 0;
	int n = 0;
	int m = 0;
	int sum = 0;
	int a = 0;
	printf("������һ��С��ʮ�����֣�");
	scanf("%d", &a);
	for (i = 1; i <= 5; i++)
	{
		//��һ������λ����10�ټ���ǰһ����
		m = pow(10, i - 1);
		n = m + n;
		sum += n;
		if (i <= 4)
		{
			printf("%d+", a*n);
		}
		else
		{
			printf("%d", a*n);
		}
	}
	printf("=%d", sum*a);
	system("pause");
	return 0;
}