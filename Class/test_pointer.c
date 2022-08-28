//指针：
#include <stdio.h>
int main(void)
{
    int num = 120;
    //定义指针变量p：
    //指针变量赋值必须明确数据类型：
    // char *p = &num;  warnning 
    //*p存放的是整型变量num的首地址：
    int *p = &num;
    printf("num is %d, *p is %p\n", num, p);
    printf("p's size is %zd\n", sizeof(p));
    return 0;
}