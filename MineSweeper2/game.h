#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//简单难度10个雷：
#define EASY 80


//初始化棋盘：
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);

//打印棋盘：
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);

//埋雷：
void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b);

//获取排查坐标周围雷的个数：
int GetMine(char mine[ROWS][COLS], int row, int col);

//排雷：
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);