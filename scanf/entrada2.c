#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int a, r;
    float b;
    char c;

    printf("Introduce un valor entero,un real y un caracter\n->");

    r = scanf("%d %f %c", &a, &b, &c);
    printf("\nNumero de datos leidos: %d\n", r);

    printf("\nValor hexadecimal: ");
    scanf("%i", &a);

    printf("Valor decimal: %i\n", a);

    return 0;
}
