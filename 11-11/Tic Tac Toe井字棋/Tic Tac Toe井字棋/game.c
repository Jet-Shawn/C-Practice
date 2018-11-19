#define _CRT_SECURE_NO_WARNINGS

#include "game.h"



void initBoard(char Board[ROW][COL],int row,int col)
{
	int r = 0;
	int c = 0;
	for (r = 0; r < ROW; r++)
	{
		for (c = 0; c < COL; c++)
		{
			Board[r][c] = ' ';
		}
	}
}



void showBoard(char Board[ROW][COL], int row, int col)
{
	int r = 0;
	int c = 0;
	printf("\n------------\n");
	for (r = 0; r < ROW; r++)
	{
		for (c = 0; c < COL; c++)
		{
			if (c == 2)
			{
				printf(" %c ", Board[r][c]);
			}
			else
			{
				printf(" %c ", Board[r][c]);
				printf("|");
			}
		}
		printf("\n------------\n");
	}
	printf("\n");
}



void PlayerMove(char Board[ROW][COL], int row, int col)
{
	while (1)
	{
		int r = 0;
		int c = 0;
		char input = '0';
		printf("请输入您要下子的坐标：（例如：1 2）\n");
		scanf("%d %d", &r, &c);
		if (r > 3 || r<1 || c>3 || c < 1)
		{
			system("cls");
			printf("错误的坐标，请重新输入！\n");
			showBoard(Board, ROW, COL);
		}
		else if (Board[r - 1][c - 1] == 'x' || Board[r - 1][c - 1] == '0')
		{
			system("cls");
			printf("这里已经下过子了，请重新输入！\n");
			showBoard(Board, ROW, COL);
		}
		else
		{
			system("cls");
			Board[r-1][c-1] = 'x';
			showBoard(Board, ROW, COL);
			break;
		}
	}
}


void PcMove(char Board[ROW][COL], int row, int col)
{
	int r = 0;
	int c = 0;
	while (1)
	{
			r = rand() % ROW;
			c = rand() % COL;
			if (Board[r][c] != 'x' && Board[r][c] != '0')
			{
				system("cls");
				Board[r][c] = '0';
				showBoard(Board, ROW, COL);
				break;
			}
	}
}


int win(char Board[ROW][COL], int row, int col)
{
	int r = 0;
	int c = 0;
	int sum = 0;
	for(r = 0; r < ROW; r++)
	{
		//玩家赢返回1，电脑赢返回2
		//三横三竖的判断
		if (Board[r][0] == Board[r][1] && Board[r][2] == Board[r][1] && Board[r][1] == 'x' || Board[0][r] == Board[1][r] && Board[2][r] == Board[1][r] && Board[1][r] == 'x')
			return 1;
		if (Board[r][0] == Board[r][1] && Board[r][2] == Board[r][1] && Board[r][1] == '0' || Board[0][r] == Board[1][r] && Board[2][r] == Board[1][r] && Board[1][r] == '0')
			return 2;
	}
	//斜向的判断
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] == 'x' || Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] == 'x')
		return 1;
	if (Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] == '0' || Board[0][0] == Board[1][1] && Board[1][1] == Board[2][2] && Board[1][1] == '0')
		return 2;
	//平局的判断
	for (r = 0; r < ROW; r++)
	{
		for (c = 0; c < COL; c++)
		{
			if (Board[r][c] == 'x'||Board[r][c]=='0')
				sum++;
		}
	}
	if (sum == 9)
		return 0;
	//返回3代表游戏继续
	return 3;
}


