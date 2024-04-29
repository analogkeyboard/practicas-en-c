#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cadena[15] = "BBBBBBBBBBBBBBB";
    char caracter = 'b';
    printf("cadena = %s", cadena);
    printf("\ncadena despues de memset(cadena) = %s", memset(cadena, caracter, 7));
    return 0;
}
