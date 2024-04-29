#include <stdio.h>
#define EOF (-1)
int main(int argc, char const *argv[])
{
    int caracter;

    while ((caracter = getchar()) != EOF)
    {
        putchar(caracter-1);
    }

    return 0;
}
