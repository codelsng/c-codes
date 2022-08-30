#include <stdio.h>

//定义一个函数来描述盘子的移动：
void Move(char ch1, char ch2)
{
    printf("%c - > %c\n", ch1, ch2);
}

//汉诺塔函数：
void Hanoi(int num, char x, char y, char z)
{
    //只有一个盘子时：
    //可以直接把盘子从x柱子移动到z柱子：
    if (1 == num)
    {
        Move(x, z);
    }
    //有多个盘子时先借助y把x上最大的移动到z上去，然后再借助x把y上的盘子移到z上去
    else
    {
        Hanoi(num - 1, x, z, y);
        Move(x, z);
        Hanoi(num - 1, y, x, z);
    }
}

int main(void)
{
    //汉诺塔上盘子的个数：
    int num = 0;
    printf("请输入盘子的个数：\n");
    scanf("%d", &num);
    Hanoi(num, 'a', 'b', 'c');
    return 0;
}