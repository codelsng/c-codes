#include <stdio.h>
#include <string.h>

int main(void)
{
    char ch1 = 'a';
    char ch2[] = "a";
    //printf("strlen(ch1) = %zd, sizeof (ch1) = %zd\n", strlen(ch1), sizeof (ch1));
    printf("strlen(ch2) = %zd, sizeof (ch2) = %zd\n", strlen(ch2), sizeof (ch2));

    return 0;
}
