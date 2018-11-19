#define _CRT_SECURE_NO_WARNINGS

#include "game.h"



void menu()
{
	printf("******************************\n");
	printf("**********  1.play ***********\n");
	printf("**********  0.exit ***********\n");
	printf("******************************\n");
}


void game()
{
	int ret = 0;
	char Board[ROW][COL] = { 0 };
	initBoard(Board, ROW, COL);
	showBoard(Board,ROW,COL);
	while (1)
	{
		PlayerMove(Board, ROW, COL);
		PcMove(Board, ROW, COL);
		ret = win(Board, ROW, COL);
		if (ret != 3)
			break;
	}
	if (ret == 1)
	{
		system("cls");
		printf("��ϲ���ʤ��\n");
		showBoard(Board, ROW, COL);
	}
	else if (ret == 2)
	{
		system("cls");
		printf("���Զ��򲻹���\n");
		showBoard(Board, ROW, COL);
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������>--");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�˳�...exit...\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
	return 0;
}