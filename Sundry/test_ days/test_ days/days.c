#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define MAX 5

int main(void)
{
	char* ch[MAX] = {
		"It is one",
		"It is two",
		"It is three",
		"It is four",
		"It is five"
	};

	for (int i = 0; i < MAX; i++)
	{
		printf("char* ch[%d] = %s\n", i, ch[i]);
	}

	return 0;
}