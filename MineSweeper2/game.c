#include "game.h"

void InitBoard(char board[ROWS][COLS], int rows, int cols, char ch)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}


void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	printf("------��ʼ��Ϸ------\n\n");
	for (int i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("------��ʼ��Ϸ------\n\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b)
{
	//��forѭ���������׵ĸ�����
	int count = EASY;
	while (count)
	{
		//rand()�����Ľ����һ�����ֵ��������9ȡ���x��y�ķ�Χ��[0, 8]������1֮��x��y�ķ�Χ����[1,9]��
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0' && mine[a][b] == mine[x][y])
		{
			mine[x][y] = '1';
			count--;
		}
	}
}


int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}

void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	//���������ʤ��������
	int x = 0;
	int y = 0;
	int win = 0;

	//��֤��һ������ĺϷ��ԣ�
	while (1)
	{
		//��һ���������꣺
		printf("��������Ҫ�Ų�����꣺");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			break;
		}
		else
		{
			printf("����Խ�磬���������룺\n");
		}
		//���ף�
	}
	//Ϊ�˵�һ�β���ը���������׺������ڵ�һ�������
	SetMine(mine, ROW, COL, x, y);
	DisplayBoard(mine, ROW, COL);   //����
	while (win < row * col - EASY)
	{

		if ('1' == mine[x][y])
		{
			printf("���ף���Ϸ������\n");
			DisplayBoard(mine, ROW, COL);
			break;
		}
		else if ('0' == mine[x][y])
		{
			int count = GetMine(mine, x, y);
			show[x][y] = count + '0';
			DisplayBoard(mine, ROW, COL);
			DisplayBoard(show, ROW, COL);
		}
		else
		{
			printf("����Խ�磬���������룺\n");
		}
		//���˵�һ��������Ų���������У�
		printf("������Ҫ�Ų�����꣺\n");
		scanf("%d%d", &x, &y);
	}
	if (win == row * col - EASY)
	{
		printf("��ϲ��ʤ��\n");
	}
}