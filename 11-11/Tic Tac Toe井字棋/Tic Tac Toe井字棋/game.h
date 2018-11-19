#ifndef __GAME_H__
#define __GAME_H__



#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 3
#define COL 3



void initBoard(char Board[ROW][COL], int row, int col);
void showBoard(char Board[ROW][COL], int row, int col);
void PlayerMove(char Board[ROW][COL], int row, int col);
void PcMove(char Board[ROW][COL], int row, int col);
int win(char Board[ROW][COL], int row, int col);



#endif //__GAME_H__