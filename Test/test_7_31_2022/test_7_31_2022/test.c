//��ҵ��
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////���г������ʲô��
//int main(void)
//{
//	char arr[] = { 'a', 'b', 'c' };
//	printf("%d\n", strlen(arr));
//	return 0;
//}

////���г�������Ľ����ʲô��
//int main(void)
//{
//	printf("%zd\n", strlen("c:\test\121"));
//	printf("%zd\n", sizeof("c:\test\121"));
//
//	return 0;
//}

//дһ������������������еĽϴ�ֵ��
//void max(int num1, int num2);
int max(int num1, int num2);
int main(void)
{
	int num1 = 0;
	int num2 = 0;
	puts("Enter two intgers in this command line please.");
	scanf("%d%d", &num1, &num2);
	printf("max is %d\n", max(num1, num2));

	//Warning��֮ǰд�����������ˡ�����������>_<������������
	//void max(num1, num2);

	return 0;
}
int max(int num1, int num2)
{
	if (num1 < num2)
		num1 = num2;
	return num1;
}

//void max(int num1, int num2)
//{
//	if (num1 < num2)
//		num1 = num2;
//	printf("max is %d\n", num1);
//}
