#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int matriz[4][4];
    int tamano = sizeof(matriz) / sizeof(matriz[0][0]);
    int i, j, cont = 0;
    printf("bytes matriz: %d", sizeof(matriz));
    printf("\nbytes elemento: %d", sizeof(matriz[0][0]));
    printf("\nLargo matriz: %d", tamano);
    printf("\nraiz tamano: %d", (int)sqrt(tamano));
    printf("\n\n");

    for (i = 0; i < sqrt(tamano); i++)
    {
        for (j = 0; j < sqrt(tamano); j++)
        {
            cont++;
            matriz[i][j] = cont;
            printf("%d\t", matriz[i][j]);
        }

        printf("\n\n");
    }

    return 0;
}
