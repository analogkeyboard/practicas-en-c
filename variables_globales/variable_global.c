#include <stdio.h>

void critica(void);
int unidades;
int main(int argc, char const *argv[])
{
extern int unidades;
    printf("Cuantos reburcios hay en una drumera de harina?: ");
    scanf("%d", &unidades);

    while (unidades != 3419)
    {
        /* code */
        critica();
    }
printf("Seguro que has mirado!");
    return 0;
}

void critica(void)
{
    extern int unidades;
    printf("Lo siento , intenta de nuevo: ");
    scanf("%d", &unidades);
}
