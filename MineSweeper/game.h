#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

//����ROW �� ROWS����ֻ��ROW��ROWS����ROW�ı仯���仯��
#define ROW 9
#define COL 9
//�����������������Ϊ���Ų�ʱ��ֹ�����½磺
#define ROWS ROW + 2
#define COLS ROW + 2
#define EASY_COUNT 10


//��ʼ�����̣�
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);

//��ӡ���̣�
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//���ף�
static void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b);

//�ж��Ų��λ����Χ�м����ף�
int GetMine(char mine[ROWS][COLS], int x, int y);

//���ף�
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);