#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    const char *cadena1 = "esta es una prueba";
    const char *cadena2 = "precaucion";

    printf("De los caracteres en \"%s\"", cadena2);
    printf("\n\'%c\' aparece primero en \"%s\"", *strpbrk(cadena1, cadena2), cadena1);
    return 0;
}
