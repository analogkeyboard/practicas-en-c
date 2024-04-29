#include <stdio.h>

//define la estructura carta

struct carta
{
    char *cara;
    char *palo;
};


int main(int argc, char const *argv[])
{
    struct carta unaCarta; //estructura variable carta
    struct carta *ptrCarta; //apuntador a una estructura carta

    //coloca caenas dentro de unaCarta
    unaCarta.cara="As";
    unaCarta.palo="Espadas";

    ptrCarta=&unaCarta;//asigna la direccion de unaCarta a ptrCarta

    printf("%s de %s\n", unaCarta.cara, unaCarta.palo);
    printf("%s de %s\n", ptrCarta->cara, ptrCarta->palo);
    printf("%s de %s\n", (*ptrCarta).cara, (*ptrCarta).palo);

    return 0;
}
