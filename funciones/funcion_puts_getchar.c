#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    char cadena[80];
    int i = 0;

    puts("Introduzca una linea de texto:\n");

    while ((c = getchar()) != '\n')
    {
        cadena[i++] = c;
    }

    cadena[i] = '\0';

    puts("\nLa linea introducida es: ");
    puts(cadena);

    return 0;
}
