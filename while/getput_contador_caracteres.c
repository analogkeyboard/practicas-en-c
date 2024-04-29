#include <stdio.h>
// #define DETENER '*'
#define DETENER '\n' // al presionar enter se mandara un salto de linea que detendra el programa

int main(int argc, char const *argv[])
{
    /* code */

    char caracter;
    int cuenta = 0;

    while ((caracter = getchar()) != DETENER)
    {
        /* con putchar lee los caracteres
        ingresados y ademas los de salida
        dandonos el doble de caracteres ingresados */

        // putchar(caracter);
        cuenta++;
    }

    printf("\nHe leido un total de %d caracteres", cuenta);

    return 0;
}
