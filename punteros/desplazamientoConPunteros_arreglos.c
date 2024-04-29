#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int b[] = {10, 20, 30, 40};

    printf("Valores del arreglo: ");
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", b[i]);
    }

    int *pointerB = b; // pinterB apunta al primer valor del arreglo

    printf("\nValor de *pointerB: %d", *pointerB);

    printf("\n\nArreglo B impreso en\nNotacion de subindices:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("b[ %d ] = %d\n", i, b[i]);
    }

    printf("\nNotacion apuntador/desplazamiento\ndonde el apuntador es el nombre del arreglo:\n");

    for (int desplazamiento = 0; desplazamiento < 4; desplazamiento++)
    {
        printf("*(b + %d) = %d\n", desplazamiento, *(b + desplazamiento));
    }

    printf("\nNotacion de subindices\nusando el apuntador como nombre del arreglo:\n");

    for (int i = 0; i < 4; i++)
    {
        printf("pointerB[ %d ] = %d\n", i, pointerB[i]);
    }

    printf("\nNotacion apuntador desplazamiento:\n");

    for (int desplazamiento = 0; desplazamiento < 4; desplazamiento++)
    {
        printf("*(ponterB + %d) = %d\n", desplazamiento, *(pointerB+desplazamiento));
    }

    return 0;
}
