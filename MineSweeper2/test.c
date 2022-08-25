#include "game.h"

//��Ϸ�˵�ʵ�֣�
void menu(void)
{
	printf("********************\n");
	printf("****** 1.Play ******\n");
	printf("****** 2.Exit ******\n");
	printf("********************\n");
}

//��Ϸ����ʵ�֣�
void game(void)
{
	//�����������̷ֱ���ǰ��̨��
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ�����̣�
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//��ӡ���̣�
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	////���ײ��ԣ�
	//SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	FindMine(mine, show, ROW, COL);
}

int main(void)
{
	//ȡ���ֵ��
	srand((unsigned int)time(NULL));
	//������Ϸ��
	int input = 0;
	do
	{
		menu();
		//����1��ʼ��Ϸ������0�˳���Ϸ�����˶����������һ����Ϊ���󣬲��������룺
		printf("��ѡ��\n");
		scanf("%d", &input);
		if (1 == input)
		{
			game();
		}
		else if (0 == input)
		{
			printf("�˳���Ϸ��\n");
			break;
		}
		else
		{
			printf("ѡ�����������ѡ��\n");
		}
	} while (input);

	return 0;
}