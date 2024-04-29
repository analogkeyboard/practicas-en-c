#include <STDIO.H>

int main(int argc, char const *argv[])
{
    char caracter;

    printf("Introduce un caracter: ");
    caracter = getchar();

    printf("Caracter: %c\nValor ASCII: %d", caracter, caracter);

    return 0;
}
