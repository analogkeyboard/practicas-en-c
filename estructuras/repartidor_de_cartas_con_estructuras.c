#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// se define la estructura carta
struct carta
{
    /* data */
    const char *cara;
    const char *palo;
};

typedef struct carta Carta;
void llenaMazo(Carta *const wMazo, const char *wCara[], const char *wPalo[]);
void barajar(Carta *const wMazo);
void repartir(const Carta *const wMazo);

int main(int argc, char const *argv[])
{
    Carta mazo[52]; // define un arreglo de 52 elementos de estructura Carta

    // inicializa el arreglo de apuntadores *cara

    const char *cara[] = {"As", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve", "Diez", "Jota", "Quina", "Rey"};

    // inicializa el arreglo de apuntadores *palo
    const char *palo[] = {"Corazones", "Diamantes", "Treboles", "Espadas"};

    // se crea la semilla aleatoria
    srand(time(NULL));

    llenaMazo(mazo, cara, palo);
    barajar(mazo);
    repartir(mazo);

    return 0;
}

void llenaMazo(Carta *const wMazo, const char *wCara[], const char *wPalo[])
{
    for (int i = 0; i <= 51; i++)
    {
        wMazo[i].cara = wCara[i % 13];
        wMazo[i].palo = wPalo[i / 13];
    }
}
void barajar(Carta *const wMazo)
{
    int j;
    Carta temp;
    for (int i = 0; i <= 51; i++)
    {
        j = rand() % 52;
        temp = wMazo[i];
        wMazo[i] = wMazo[j];
        wMazo[j] = wMazo[i];
    }
}

void repartir(const Carta *const wMazo)
{
    for (int i = 0; i <= 51; i++)
    {
        printf("%5s de %-8s%c", wMazo[i].cara, wMazo[i].palo, (i + 1) % 2 ? '\t' : '\n');
    }
}
