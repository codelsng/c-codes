#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//第一题：下列代码执行结果是什么？
//死循环输出5
//int main(void)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i = 5)
//			printf("%d", i);
//	}
//
//	return 0;
//}



//func(1)的值是多少？
//int func(int n)
//{
//	int b;
//	switch (n)
//	{
//	case 1: b = 30;
//	case 2: b = 20;
//	case 3: b = 10;
//	default: b = 0;
//	}
//	return b;
//}
//
//int main(void)
//{
//	printf("%d\n", func(1));
//
//	return 0;
//}



//下面代码执行的结果是什么？
//int main(void)
//{
//	int x = 3;
//	int y = 3;
//	switch (x % 2) {
//	case 1:
//		switch (y) {
//		case 0:
//			printf("first");
//		case 2:
//			printf("second");
//			break;
//		default:
//			printf("hello");
//		}
//	case 2:
//		printf("thrid");
//	}
//
//	return 0;
//}




////写代码，将3个整数从大到小输出：
////定义一个函数来操作3个整数之间的顺序：
//void operate(int num1, int num2, int num3);
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("请输入3个整数：\n");
//	scanf("%d%d%d", &num1, &num2, &num3);
//	operate(num1, num2, num3);
//	
//	return 0;
//}
//
//void operate(int num1, int num2, int num3) {
//	if (num1 < num2)
//	{
//		int tmp = num1;
//		num1 = num2;
//		num2 = tmp;
//	}
//	if (num1 < num3)
//	{
//		int tmp = num1;
//		num1 = num3;
//		num3 = tmp;
//	}
//	if (num2 < num3)
//	{
//		int tmp = num2;
//		num2 = num3;
//		num3 = tmp;
//	}
//	printf("%d\t%d\t%d\t", num1, num2, num3);
//}



//打印1到100之间的3的倍数的数字：
//int main(void)
//{
//	//取1~100之间的整数
//	for (int i = 1; i <= 100; i++)
//	{
//		//判断是否为3的倍数：
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}




////求两个整数的最大公约数：
// 
// 方法一：常规方法：
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("请输入两个整数：\n");
//	scanf("%d%d", &num1, &num2);
//	
//	//存放两数较小值：
//	//这种方法较好，下面的方法交换了num1和num2的值，没那个必要，取最小值只用为循环提供判断条件罢了
//	int max = 0;
//	if (num1 > num2)
//		max = num2;
//	else
//		max = num1;
//
//	//从大到小判断最大公约数，找到的第一个就是最大的
//	//获得技能i--：
//	for (int i = max; i >= 1; i--)
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//		{
//			printf("%d 和 %d 的最大公约数是 %d ", num1, num2, i);
//			break;
//		}
//	}
//
//	////略有赘余的写法：
//	//if (num1 < num2)
//	//{
//	//	int temp = num1;
//	//	num1 = num2;
//	//	num2 = temp;
//	//}
//
//	////从大到小判断最大公约数，找到的第一个就是最大的
//	////获得技能i--：
//	//for (int i = num2; i >= 1; i--)
//	//{
//	//	if (num1 % i == 0 && num2 % i == 0)
//	//	{
//	//		printf("%d和%d的最大公约数是%d ", num1, num2, i);
//	//		break;
//	//	}
//	//}
//
//	////找出同时被两个数整除的数
//	//for (int i = 1; i <= num2; i++)
//	//{
//	//	if (num1 % i == 0 && num2 % i == 0)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//}
//
//	return 0;
//}
// 
// 
////方法2：辗转相除法：
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	int num3 = 0;
//	while (num3 = num1 % num2)
//	{
//		num1 = num2;
//		num2 = num3;
//	}
//	printf("最大公约数是%d", num2);
//	return 0;
//}



////打印1000~2000年之间的闰年：
//int main(void)
//{
//	int count = 0;
//	for (int years = 1000; years <= 2000; years++)
//	{
//		if (years % 4 == 0 && years % 100 != 0 || years % 400 == 0)
//		{
//			printf("%d ", years);
//			count++;
//		}
//	}
//	printf("\n%d个闰年", count);
//
//	return 0;
//}


//打印100~200之间的素数：
//偶数中除了2都不可能是质数，可以直接判断奇数：
int main(void)
{
	for (int i = 101; i <= 200; i += 2)
	{
		for (int j = 2; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else
			{
				printf("%d ", i);
				break;
			}
		}
	}

	return 0;
}
// 
// 
// 
////两个数相乘至少有一个数小于结果的开平方；
//int main(void)
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		for (int j = 2; j < sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}



//int main(void)
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		for (int j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//			else
//			{
//				printf("%d ", i);
//				break;
//			}
//		}
//	}
//
//	return 0;
//}