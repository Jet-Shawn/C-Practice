#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

//ʵ��һ�������ж�year�ǲ������ꡣ


//��ͨ���꣺�ܱ�4���������ܱ�100�����ĵ����
//�������꣺�ܱ�400����



void leapyear(int x)
{
	if (x % 4 == 0 && x % 100 != 0)
	{
		printf("������\n");
	}
	else if (x % 400 == 0)
	{
		printf("������\n");
	}
	else
		printf("��������\n");
}


int main()
{
	int year = 0;
	printf("������һ����ݣ�");
	scanf("%d", &year);
	leapyear(year);
	system("pause");
	return 0;
}