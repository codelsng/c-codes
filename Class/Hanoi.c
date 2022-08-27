#include <stdio.h>

void Hanoi(int num, char a, char b, char c);
void Move(char ch1, char ch2);

int main(void)
{
	int num = 0;
	printf("�����뺺ŵ���ϵ����Ӹ�����\n");
	scanf("%d", &num);
	Hanoi(num, 'a', 'b', 'c');

	return 0;
}


//�ƶ����ӵĺ�����
void Move(char ch1, char ch2)
{
	printf("%c --> %c\n", ch1, ch2);
}

//��ŵ��������
void Hanoi(int num, char a, char b, char c)
{
	if (1 == num)
	{
		Move(a, c);
	}
	else
	{
		//��n - 1�����ӽ���c��a�ƶ���b
		//Ȼ��ѵ�n�������ƶ���c
		//Ȼ�����a��n - 1�����Ӵ�b�ƶ���c
		Hanoi(num - 1, a, c, b);
		Move(a, c);
		Hanoi(num - 1, b, a, c);
	}
}