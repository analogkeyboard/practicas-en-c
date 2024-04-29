#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int d;

    d = atoi("2593");
    printf("%s%d\n%s%d\n",
           "La cadena \"2593\" convertida a int es: ", d,
           "El valor convertido menos 593 es: ", d-593);
    return 0;
}
