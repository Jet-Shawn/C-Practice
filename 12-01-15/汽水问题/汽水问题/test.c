#define _CRT_SECURE_NO_WARNINGS


//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�

#include <stdio.h>
#include <stdlib.h>


int main()
{
	int n = 20;
	int i = 0;
	//��ƿ������
	int putt = 0;
	//�ȵ�����ˮ��
	int sum = 0;
	//ÿһ��ѭ���൱��ÿ��ֻ��һ��Ǯ����ˮ������20�Σ�Ҳ����20��
	for (i = 1; i <= n; i++)
	{
		//��ƿ++
		putt++;
		//��������ƿ���ȵ��Ķ���ƿ��һƿǮ��ģ�һƿ�ÿյĻ��ģ�
		if (putt == 2)
		{
			sum += 2;
			//��������ˮ�ֶ�һ��ƿ�ӣ�����putt=1
			putt = 1;
		}
		else
			sum++;
	}
	printf("���պȵ���%d\n", sum);
	system("pause");
	return 0;
}