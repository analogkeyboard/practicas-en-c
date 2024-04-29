#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{

    const char *cadena = "1234567abc";

    char *pointerResto;

    long x;
    x = strtol(cadena, &pointerResto, 16);
    printf("\n%s\"%s\"\n%s%ld\n%s\"%s\"\n%s%ld",
           "La cadena original es: ", cadena,
           "El valor convertido es: ", x,
           "El resto de la cadena original es: ", pointerResto,
           "El valor convertido mas 567: ", x + 567

    );

    return 0;
}
