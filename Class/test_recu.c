#include <stdio.h>
#include <string.h>
//void Up_and_Down(int num);
//int main(void)
//{
//	Up_and_Down(1);
//}
//
//void Up_and_Down(int num)
//{
//	printf("level %d \n", num);
//	if (num < 5)
//	{
//		Up_and_Down(num + 1);
//	}
//	printf("LEVEL %d \n", num);
//}


//unsigned int my_strlen(char* ch)
//{
//	if (*ch != '\0')
//		return 1 + my_strlen(ch + 1);
//	else
//		return 0;
//
//}
//int main(void)
//{
//	char arr[] = "abcd";
//	//printf("%zd", strlen(arr));
//	unsigned int a = my_strlen(arr);
//	printf("%u", a);
//	return 0;
//}


int test(int n)
{
	if (n > 0)
		return n + test(n - 1);
	else
		return 0;
}

int main(void)
{
	printf("%d\n", test(3));
	return 0;
}