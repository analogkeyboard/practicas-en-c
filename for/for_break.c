#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ciclo_detenido;
    for (int i = 0; i < 10; ++i)
    {
        /* code */
        if (i == 5)
        {
            /* code */
            ciclo_detenido = i;
            break;
        }
        printf("%d\n", i);
    }
    printf("Bucle termina en el elemento: %d\n", ciclo_detenido);
    return 0;
}