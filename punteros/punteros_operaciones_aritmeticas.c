#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int arreglo[10] = {0, 10, 22, 35, 4, 53, 66, 7, 8, 90};

    int *puntero1 = NULL, *puntero2 = NULL;

    puntero1 = &arreglo[3];
    puntero2 = &arreglo[9];

    printf("*puntero1: %d", *puntero1);
    printf("\n*puntero2: %d", *puntero2);

    puntero1 = puntero1 + 3; // apunta a [6] = 66

    printf("\n\n*puntero1 += 3: %d", *puntero1);

    puntero2 = puntero2 - 2;
    printf("\n\n*puntero2 -= 2: %d", *puntero2);
    return 0;
}
