#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int a = 11;
    int *puntero1, *puntero2;

    puntero1 = &a;
    puntero2 = puntero1;
    printf("Direccion: %X\nValor *Puntero1: %d\nVariable a: %d", puntero1, *puntero1, a);

    printf("\n\nDireccion: %X\nValor *Puntero2: %d\nVariable a: %d", puntero2, *puntero2 + 4, a);
    return 0;
}
