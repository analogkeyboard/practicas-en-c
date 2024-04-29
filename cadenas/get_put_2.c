#include <stdio.h>
#define DETENER '*'

int main(int argc, char const *argv[])
{
    char caracter;

    caracter = getchar();

    while (caracter != DETENER)
    {
        /* code */
        putchar(caracter);
        caracter = getchar();

    }

    printf("Programa Terminado");

    return 0;
}
