/*
valores de un arreglo usando punteros
*/
#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int lista[] = {1, 2, 3, 4, 5};

    int *puntero = &lista[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(puntero + 1));
    }

    return 0;
}
