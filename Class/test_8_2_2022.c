#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>

//��һ�⣺���д���ִ�н����ʲô��
//��ѭ�����5
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



//func(1)��ֵ�Ƕ��٣�
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



//�������ִ�еĽ����ʲô��
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




////д���룬��3�������Ӵ�С�����
////����һ������������3������֮���˳��
//void operate(int num1, int num2, int num3);
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	printf("������3��������\n");
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



//��ӡ1��100֮���3�ı��������֣�
//int main(void)
//{
//	//ȡ1~100֮�������
//	for (int i = 1; i <= 100; i++)
//	{
//		//�ж��Ƿ�Ϊ3�ı�����
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}




////���������������Լ����
// 
// ����һ�����淽����
//int main(void)
//{
//	int num1 = 0;
//	int num2 = 0;
//	printf("����������������\n");
//	scanf("%d%d", &num1, &num2);
//	
//	//���������Сֵ��
//	//���ַ����Ϻã�����ķ���������num1��num2��ֵ��û�Ǹ���Ҫ��ȡ��Сֵֻ��Ϊѭ���ṩ�ж���������
//	int max = 0;
//	if (num1 > num2)
//		max = num2;
//	else
//		max = num1;
//
//	//�Ӵ�С�ж����Լ�����ҵ��ĵ�һ����������
//	//��ü���i--��
//	for (int i = max; i >= 1; i--)
//	{
//		if (num1 % i == 0 && num2 % i == 0)
//		{
//			printf("%d �� %d �����Լ���� %d ", num1, num2, i);
//			break;
//		}
//	}
//
//	////����׸���д����
//	//if (num1 < num2)
//	//{
//	//	int temp = num1;
//	//	num1 = num2;
//	//	num2 = temp;
//	//}
//
//	////�Ӵ�С�ж����Լ�����ҵ��ĵ�һ����������
//	////��ü���i--��
//	//for (int i = num2; i >= 1; i--)
//	//{
//	//	if (num1 % i == 0 && num2 % i == 0)
//	//	{
//	//		printf("%d��%d�����Լ����%d ", num1, num2, i);
//	//		break;
//	//	}
//	//}
//
//	////�ҳ�ͬʱ����������������
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
////����2��շת�������
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
//	printf("���Լ����%d", num2);
//	return 0;
//}



////��ӡ1000~2000��֮������꣺
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
//	printf("\n%d������", count);
//
//	return 0;
//}


//��ӡ100~200֮���������
//ż���г���2��������������������ֱ���ж�������
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
////���������������һ����С�ڽ���Ŀ�ƽ����
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