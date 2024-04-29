#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int arreglo_enteros[] = {1, 2, 39, 48, 5, 6};
    
    int largo = sizeof(arreglo_enteros) / sizeof(arreglo_enteros[0]);

    printf("Arreglo entero: ");
    for (int i = 0; i < largo; i++)
    {
        printf("%d ", arreglo_enteros[i]);
    }
    printf("\n");

    printf("Bytes del arreglo entero: %d\n", sizeof(arreglo_enteros));
    printf("Bytes del primer elemento entero: %d\n", sizeof(arreglo_enteros[0]));
    printf("Largo del arreglo entero: %d", largo);
    return 0;
}
