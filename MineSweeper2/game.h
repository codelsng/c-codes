#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW + 2
#define COLS COL + 2

//���Ѷ�10���ף�
#define EASY 80


//��ʼ�����̣�
void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch);

//��ӡ���̣�
void DisplayBoard(char board[ROWS][COLS], int rows, int cols);

//���ף�
void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b);

//��ȡ�Ų�������Χ�׵ĸ�����
int GetMine(char mine[ROWS][COLS], int row, int col);

//���ף�
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);