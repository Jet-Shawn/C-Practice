#define _CRT_SECURE_NO_WARNINGS



#include "ArrMan.h"


//����һ�����飬
//ʵ�ֺ���init������ʼ�����顢
//ʵ��empty����������顢
//ʵ��reverse���������������Ԫ�ص����á�
//Ҫ���Լ���ƺ����Ĳ���������ֵ��



int main()
{
	int i = 0;
	int arr[10] = { 0 };
	//��ӡ�˵�
	menu();
	//��ʼ�����麯��
	while (1)
	{
		printf("������Ҫ��");
		scanf("%d", &i);
		if (i == 0)
		{
			//�˲����Ѿ����
			init(&arr);
			showarr(arr);
		}
		else if (i == 1)
		{
			empty(&arr);
			showarr(arr);
		}
		else if (i == 2)
		{
			reverse(&arr);
			showarr(arr);
		}
		else
			printf("����������");
	}
	system("pause");
	return 0;
}