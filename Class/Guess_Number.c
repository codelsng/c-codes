<<<<<<< HEAD
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
    printf("1. Play\n");
    printf("2. Exit\n");
}

int main(void)
{
    //ȡ���ֵ��
    srand((unsigned int)time(NULL));
    int guess = 0;
    int input = 0;
    do
    {
        menu();
        printf("��������Ϸ��1~9��\n��ѡ��\n");
        scanf("%d", &input);
        int rand_num = rand() % 9 + 1;

        while (1)
        {
            printf("Guess a number: ");
            scanf("%d", &guess);
            if (guess < rand_num)
            {
                printf("��С�ˣ�\n");
            }
            else if (guess > rand_num)
            {
                printf("�´��ˣ�\n");
            }
            else
            {
                printf("�����ˣ�\n");
                break;
            }
        }
    } while (input);

    return 0;
=======
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void menu()
{
    printf("1. Play\n");
    printf("2. Exit\n");
}

int main(void)
{
    //ȡ���ֵ��
    srand((unsigned int)time(NULL));
    int guess = 0;
    int input = 0;
    do
    {
        menu();
        printf("��������Ϸ��1~9��\n��ѡ��\n");
        scanf("%d", &input);
        int rand_num = rand() % 9 + 1;

        while (1)
        {
            printf("Guess a number: ");
            scanf("%d", &guess);
            if (guess < rand_num)
            {
                printf("��С�ˣ�\n");
            }
            else if (guess > rand_num)
            {
                printf("�´��ˣ�\n");
            }
            else
            {
                printf("�����ˣ�\n");
                break;
            }
        }
    } while (input);

    return 0;
>>>>>>> dad4585c55d3b591cc32bb62d8ac175f144ad246
}