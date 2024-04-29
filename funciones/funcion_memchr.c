#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    const char *cadena="Esta es una cadena";
    char caracter ='n';
    printf("El resto de cadena despues del caracter \'%c\' encontrado es: %s",caracter,memchr(cadena,caracter,16));
    return 0;
}
