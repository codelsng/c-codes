#include <stdio.h>

void Hanoi(int num, char a, char b, char c);
void Move(char ch1, char ch2);

int main(void)
{
	int num = 0;
	printf("请输入汉诺塔上的盘子个数：\n");
	scanf("%d", &num);
	Hanoi(num, 'a', 'b', 'c');

	return 0;
}


//移动盘子的函数：
void Move(char ch1, char ch2)
{
	printf("%c --> %c\n", ch1, ch2);
}

//汉诺塔函数：
void Hanoi(int num, char a, char b, char c)
{
	if (1 == num)
	{
		Move(a, c);
	}
	else
	{
		//把n - 1个盘子借助c从a移动到b
		//然后把第n个盘子移动到c
		//然后借助a把n - 1个盘子从b移动到c
		Hanoi(num - 1, a, c, b);
		Move(a, c);
		Hanoi(num - 1, b, a, c);
	}
}