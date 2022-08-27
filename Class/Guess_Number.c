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
    //取随机值：
    srand((unsigned int)time(NULL));
    int guess = 0;
    int input = 0;
    do
    {
        menu();
        printf("猜数字游戏（1~9）\n请选择：\n");
        scanf("%d", &input);
        int rand_num = rand() % 9 + 1;

        while (1)
        {
            printf("Guess a number: ");
            scanf("%d", &guess);
            if (guess < rand_num)
            {
                printf("猜小了：\n");
            }
            else if (guess > rand_num)
            {
                printf("猜大了：\n");
            }
            else
            {
                printf("猜中了：\n");
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
    //取随机值：
    srand((unsigned int)time(NULL));
    int guess = 0;
    int input = 0;
    do
    {
        menu();
        printf("猜数字游戏（1~9）\n请选择：\n");
        scanf("%d", &input);
        int rand_num = rand() % 9 + 1;

        while (1)
        {
            printf("Guess a number: ");
            scanf("%d", &guess);
            if (guess < rand_num)
            {
                printf("猜小了：\n");
            }
            else if (guess > rand_num)
            {
                printf("猜大了：\n");
            }
            else
            {
                printf("猜中了：\n");
                break;
            }
        }
    } while (input);

    return 0;
>>>>>>> dad4585c55d3b591cc32bb62d8ac175f144ad246
}