#include <stdio.h>

size_t obtenerTamano(float *);
int main(int argc, char const *argv[])
{
    float arreglo[20]; // crea arreglo

    printf("El numero de bytes en el arreglo es: %d", sizeof(arreglo));
    printf("\nEl numero de bytes devueltos por obtenerTamaño(): %d", obtenerTamano(arreglo));

    return 0;
}

size_t obtenerTamano(float *pointer)
{
    return sizeof(pointer);
}
