#include <stdio.h>

#define EOF (-1)

int main(int argc, char const *argv[])
{
    int ch;
    int cont = 0;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
        cont++;
    }

    // printf("%d",--cont);

    return 0;
}
