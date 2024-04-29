#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int *ptrEntero;
    int x = 12345;
    int y;

    // asigna la direccion de x a ptrEntero
    ptrEntero = &x;
    printf("\nEl valor de ptrEnter=&x es: %p\n", ptrEntero);
    printf("La direccion de x es: %p\n", &x);

    printf("\nTotal de caracteres impresos en esta linea: %n", &y);
    printf(" %d\n\n", y);

    y = printf("Esta linea tiene 30 caracteres\n");

    printf("se imprimieron %d caracteres\n", y);

    printf("impresion de %% en una cadena de control de formato\n");

    return 0;
}
