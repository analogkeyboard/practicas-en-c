#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    const char *cadena = "51.2% son admitidos";

    double d; // variable para guardar la secuencia convertida

    char *pointerCadena; // crea un apuntador char

    d = strtod(cadena, &pointerCadena);

    printf("La cadena \"%s\" se convierte en\n", cadena);
    printf("Un valor double %.2f y la cadena \"%s\"", d, pointerCadena);
    return 0;
}
