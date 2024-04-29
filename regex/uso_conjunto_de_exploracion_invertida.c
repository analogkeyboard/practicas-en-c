#include <STDIO.H>

int main(int argc, char const *argv[])
{

    char z[9];

    printf("Introduzca una cadena: ");
    scanf("%[^aeiou]", z);

    printf("La entrada es \"%s\"\n", z);
    return 0;
}
