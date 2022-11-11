#include <stdio.h>

int main(int argc, char * argv[])
{
    int ch;
    FILE * fp;
    fp = fopen(argv[1], "r");
    
    for (int i = 0; i < 3; i++)
    {
        putchar(ch);
        ch = getc(fp);
    }

    return 0;
}
