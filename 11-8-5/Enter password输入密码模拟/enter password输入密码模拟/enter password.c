#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>


//��д����ģ��������������ĳ�����
//����������������룬������ȷ����ʾ����¼�ɹ���, �������
//�����������룬����������Ρ����ξ�������ʾ�˳�����


int main()
{
	int pass = 123456;
	int n = 0;
	//����һ��������sum�����sum=3���˳�����
	int sum = 0;
	while (1)
	{
		printf("���������룺");
		scanf("%d", &n);
		if (n == pass)
		{
			printf("������ȷ����½�ɹ���\n");
			break;
		}
		else if (n!=pass)
		{
			sum++;
			if (sum == 3)
			{
				printf("���ξ���������˳���½��\n");
				break;
			}
			else
			{
				printf("��������㻹��%d��������᣺\n", 3 - sum);
			}
		}

	}
	system("pause");
	return 0;
}