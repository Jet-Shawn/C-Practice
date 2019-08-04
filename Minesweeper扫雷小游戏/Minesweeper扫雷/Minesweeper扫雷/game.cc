#include "game.hpp"


void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	memset(&board[0][0], set, rows*cols*sizeof(board[0][0]));
}

void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	std::cout << "-----------------------" << std::endl;
	for (int i = 0; i <= col; i++)
	{
		std::cout << i << " ";
	}
	std::cout << std::endl;
	for (int i = 1; i <= row; i++)
	{
		std::cout << i << " ";
		for (int j = 1; j <= col; j++)
		{
			std::cout << board[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << "-----------------------" << std::endl;

}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	srand((unsigned int)time(NULL));
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

int GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';
}

void Spread(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y)
{
	int offset_x = 0;
	int offset_y = 0;
	int count = 0;
	//����Ϸ�
	if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
	{
		//������Χ����
		for (offset_x = -1; offset_x <= 1; offset_x++)
		{
			for (offset_y = -1; offset_y <= 1; offset_y++)
			{
				//���������겻����
				if (mine[x + offset_x][y + offset_y] == '0')
				{
					//ͳ����Χ�׵ĸ���
					count = GetMineCount(mine, x + offset_x, y + offset_y);
					if (count == 0)
					{
						if (show[x + offset_x][y + offset_y] == '*')
						{
							show[x + offset_x][y + offset_y] = ' ';
							Spread(mine, show, x + offset_x, y + offset_y);
						}
					}
					else
					{
						show[x + offset_x][y + offset_y] = count + '0';
					}
				}
			}
		}
	}
}

//�ж��Ƿ����׳ɹ�
int IsWin(char show[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	int count = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				count++;
			}
		}
	}
	return count == EASY_COUNT;
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	static int win = 0;

	while (IsWin(show, row, col) == 0)
	{
		std::cout << "�������Ų������:>";
		std::cin >> x >> y;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				std::cout << "���ź����㱻ը����" << std::endl;
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else
			{
				//ͳ��x,y������Χ�м�����
				int count = GetMineCount(mine, x, y);
				if (count == 0)
				{
					show[x][y] = ' ';
					Spread(mine, show, x, y);
					DisplayBoard(show, ROW, COL);
				}
				else
				{
					show[x][y] = count + '0';
					DisplayBoard(show, ROW, COL);
				}
			}
		}
		else
		{
			std::cout << "����Ƿ������������룡" << std::endl;
		}
	}
	if (IsWin(show, row, col))
	{
		std::cout << "�㣡Ӯ������" << std::endl;
		DisplayBoard(mine, ROW, COL);
	}
}