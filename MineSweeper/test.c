#include "game.h"
//��ӡ��Ϸ�˵���
void menu(void)
{
    puts("********************");
    puts("********************");
    puts("******1. play ******");
    puts("******0. exit ******");
    puts("********************");
    puts("********************");
}
//��Ϸ����ʵ�֣�
void game(void)
{
    //�����������̣�
    char mine[ROWS][COLS] = { 0 };
    char show[ROWS][COLS] = { 0 };
    //��ʼ�����̣�
    InitBoard(mine, ROWS, COLS, '0');
    InitBoard(show, ROWS, COLS, '*');
    //��ӡ���̣�
    //DisplayBoard(mine, ROW, COL);
    DisplayBoard(show, ROW, COL);
    //���ף�
    FindMine(mine, show, ROW, COL);
}

int main(void)
{
    //ȡ���ֵ��
    srand((unsigned int)time(NULL));
    int input = 0;
    do
    {
        //������Ϸ�˵�������
        menu();
        //ѡ���Ƿ������Ϸ��
        printf("��ѡ��\n");
        scanf("%d", &input);
        //������֤����������1�������Ϸ��0���˳���Ϸ���Ǵ˶�ֵ�򱨴���ѡ��
        if (1 == input)
        {
            game();
        }
        else if (0 == input)
        {
            break;
        }
        else
        {
            puts("����������������룺");
        }
    } while (input);
        return 0;
}