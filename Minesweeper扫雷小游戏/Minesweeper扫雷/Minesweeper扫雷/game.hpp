#pragma once
#ifndef _GAME_H
#define _GAME_H

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 15
//#define HARD_COUNT 20

#include<iostream>
#include<vector>
#include<time.h>
#include<string>

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);
void SetMine(char board[ROWS][COLS], int row, int col);
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

#endif // _GAME_H

