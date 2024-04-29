#include <stdio.h>
#define EOF (-1)
int main(int argc, char const *argv[])
{
    int caracter;
    int contador_no_espacios = 0;

    while ((caracter = getchar()) != EOF)
    {
        if (caracter != ' ' && caracter!='\n' && caracter!='\t')
        {
            /* code */
            contador_no_espacios++;
        }
    }

    printf("Caracteres que no son espacios: %d", contador_no_espacios);

    return 0;
}
