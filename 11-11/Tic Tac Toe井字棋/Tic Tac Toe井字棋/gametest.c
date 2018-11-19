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
		printf("恭喜你获胜！\n");
		showBoard(Board, ROW, COL);
	}
	else if (ret == 2)
	{
		system("cls");
		printf("电脑都打不过？\n");
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
		printf("请输入>--");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏退出...exit...\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
	return 0;
}