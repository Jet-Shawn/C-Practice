#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void menu()
{
	printf("************************\n");
	printf("******  1.play  ********\n");
	printf("******  0.exit  ********\n");
	printf("************************\n");
}

void game()
{
	int a;
	int guess;
	//����һ�����������Բ鿴һ�����˼���
	int sum = 0;
	a = rand() % 100 + 1;//��ȡ1-100�������
	printf("������һ��һ�����ڵ����֣���³�����");
	while (1)
	{
		scanf("%d", &guess);
		if (a < guess)
		{
			printf("�µ�̫���ˣ���Ϸ����\n");
			sum++;
		}
		else if (a > guess)
		{
			printf("�µ�̫С�ˣ���Ϸ����\n");
			sum++;
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�");
			printf(" ��ֻ����%d�ξͲµ��˴𰸣�\n", sum);
			break;
		}
	}

}

int main()
{
	int input = 0;
	//���ֵ����ȫ�ֶ���һ�μ���srand((unsigned int)   ����ʱ��ʵ��α�����time(NULL));
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ exit....\n");
			break;
		default:
			printf("����ȷ��������\n");
			break;
		}
	} while (input);
	return 0;
}




