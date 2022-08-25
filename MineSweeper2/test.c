#include "game.h"

//游戏菜单实现：
void menu(void)
{
	printf("********************\n");
	printf("****** 1.Play ******\n");
	printf("****** 2.Exit ******\n");
	printf("********************\n");
}

//游戏功能实现：
void game(void)
{
	//定义两个棋盘分别负责前后台：
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘：
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//打印棋盘：
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	////埋雷测试：
	//SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

int main(void)
{
	//取随机值：
	srand((unsigned int)time(NULL));
	//进入游戏：
	int input = 0;
	do
	{
		menu();
		//输入1开始游戏，输入0退出游戏，除此二数外的输入一律是为错误，并重新输入：
		printf("请选择：\n");
		scanf("%d", &input);
		if (1 == input)
		{
			game();
		}
		else if (0 == input)
		{
			printf("退出游戏：\n");
			break;
		}
		else
		{
			printf("选择错误，请重新选择：\n");
		}
	} while (input);

	return 0;
}