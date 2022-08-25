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
	printf("------开始游戏------\n\n");
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
	printf("------开始游戏------\n\n");
}


void SetMine(char mine[ROWS][COLS], int row, int col, int a, int b)
{
	//用for循环控制埋雷的个数：
	int count = EASY;
	while (count)
	{
		//rand()函数的结果是一个随机值，但是与9取余后x和y的范围是[0, 8]，加上1之后x和y的范围就是[1,9]：
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
	//定义坐标和胜利条件：
	int x = 0;
	int y = 0;
	int win = 0;

	//验证第一次输入的合法性：
	while (1)
	{
		//第一次输入坐标：
		printf("请输入你要排查的坐标：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			break;
		}
		else
		{
			printf("坐标越界，请重新输入：\n");
		}
		//排雷：
	}
	//为了第一次不被炸死，把埋雷函数放在第一次输入后：
	SetMine(mine, ROW, COL, x, y);
	DisplayBoard(mine, ROW, COL);   //测试
	while (win < row * col - EASY)
	{

		if ('1' == mine[x][y])
		{
			printf("触雷，游戏结束：\n");
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
			printf("坐标越界，请重新输入：\n");
		}
		//除了第一次以外的排查在这里进行：
		printf("请输入要排查的坐标：\n");
		scanf("%d%d", &x, &y);
	}
	if (win == row * col - EASY)
	{
		printf("恭喜获胜：\n");
	}
}