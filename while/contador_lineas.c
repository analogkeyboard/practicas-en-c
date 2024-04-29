
#include <stdio.h>
#define EOF (-1)
int main(int argc, char const *argv[])
{
    int caracter;
    int num_linea = 0;

    while ((caracter = getchar()) != EOF)
    {
        /* code */
        if (caracter == '\n')
        {
            /* code */
            num_linea++;
        }
    }

    printf("He contado %d lineas", num_linea);

    return 0;
}
