﻿//4.12.Floatconv.c:
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld", n1, n2, n3, n4);

    return 0;
}