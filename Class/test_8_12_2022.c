//递归：
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

////将1234 输出为 4321：
//void print(unsigned int num)
//{
//	if (num > 9)
//	{
//		print(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//
//int main(void)
//{
//	unsigned int num = 1234;
//	print(num);
//
//	return 0;
//}


////模拟strlen()函数：
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main(void)
//{
//	char arr[] = "abcdefghijklmnopqrstuvwxyz";
//	printf("%d \n", my_strlen(arr));
//
//	return 0;
//}



////递归求n的阶乘：
//int fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * fac(n - 1);
//}
//int main(void)
//{
//	int n = 5;
//	printf("n! = %d", fac(n));
//	return 0;
//}

//递归求第n个斐波那契数列：
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

////循环求第n个斐波那契数列：
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	
//	return c;
//}
//int main(void)
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", Fib(n));
//
//	return 0;
//}


////统计1 ~ 100 之间数字9的出现次数：
//int main(void)
//{
//	int count = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		//十位为9的数：
//		if (9 == i / 10)
//			count++;
//		//个位为9的数：
//		if (9 == i % 10)
//			count++;
//	}
//	
//	printf("%d", count);
//
//	return 0;
//}



////计算1/1 - 1/2 + 1/3 - 1/4 + 1/5 +... + 1/99 - 1/100;
//int main(void)
//{
//	double sum = 0.0;
//	int flag = 1;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//
//	return 0;
//}



////求10个整数中的最大值：
//int main(void)
//{
//	int arr[10] = { 0 };
//	printf("请输入十个整数：\n");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//取数组中的第一个元素的值，然后逐一比较，遍历完成之后将最大值赋给max：
//	int max = arr[0];
//	for (int i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//	}
//	
//	printf("max is %d \n", max);
//	
//	return 0;
//}



//输出乘法口诀表：
int main(void)
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("%d * %d = %-2d ", i, j, i * j);
		}
		putchar('\n');
	}
	
	return 0;
}
