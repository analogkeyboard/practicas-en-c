#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int articulos = 50;
    float precio_articulo = 9.99;
    float costo_total = articulos * precio_articulo;
    char tipo_moneda = '$';

    printf("Numero de articulos: %d\n", articulos);
    printf("Costo por articulo: %c%.2f\n", tipo_moneda, precio_articulo);
    printf("Costo total = %c%.2f\n", tipo_moneda, costo_total);

    printf("\n");
    system("pause");
    return 0;
}
