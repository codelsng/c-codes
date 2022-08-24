//��Ϸ���ܵ�ʵ�֣�
//������Ҫ��ʼ���������̣�

#include "game.h"
//��ʼ�����̣�
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	//��ʼ���У�
	for (int i = 0; i < rows; i++)
	{
		//��ʼ���У�
		for (int j = 0; j < cols; j++)
		{
			//����Ҫ��ʼ���ɵ�ֵ�������̣�
			board[i][j] = set;
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	puts("-----������Ϸ-----");
	for (int i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	putchar('\n');
	for (int i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (int j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		putchar('\n');
	}
	puts("-----������Ϸ-----");
	putchar('\n');
}


//���ף�
void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b)
{
	//��forѭ���������׵ĸ�����
	int count = EASY_COUNT;
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

//�ж��Ų��λ����Χ�м����ף�
static int GetMine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y + 1] +
		mine[x - 1][y] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}


//���ף��������꣬Ȼ���ж������Ƿ�Ϊ�ף�
//������Խ�磬���������룻
//��������ף���Ϸ������
//����������ף���Ϸ������
//ֱ���������꣬��Ϸ������
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
	//ѭ���������ף�
	while (win < row * col - EASY_COUNT)
	{
		//������֤��
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('1' == mine[x][y])
			{
				printf("���ף���Ϸ������\n");
				DisplayBoard(mine, row, col);
				break;
			}
			else
			{
				int count = GetMine(mine, x, y);
				show[x][y] = count + '0';
				DisplayBoard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("����Խ�磬���������룺\n");
		}

		//��n�����루n > 1��
		printf("��������Ҫ�Ų�����꣺");
		scanf("%d%d", &x, &y);
		DisplayBoard(mine, ROW, COL);   //����
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("���׳ɹ���\n");
		DisplayBoard(mine, row, col);
	}
}

