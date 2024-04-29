#include <stdio.h>

void intercambiar(int *, int *);

int main(int argc, char const *argv[])
{
    int a = 10, b = 20;

    printf("Valores de a y b antes del intercambio\n");
    printf("a: %d, b: %d\n", a, b);

    intercambiar(&a, &b);
    printf("Valores de a y b despues del intercambio\n");
    printf("a: %d, b: %d\n", a, b);

    return 0;
}

void intercambiar(int *x, int *y)
{

    int z = *x;
    *x = *y;
    *y = z;
    
}
