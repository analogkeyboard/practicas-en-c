#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    long d;

    d = atol("1000000");
    printf("%s%ld\n%s%ld\n",
           "La cadena \"1000000\" convertida a long int es: ", d,
           "El valor convertido dividido entre 2 es: ", d / 2);
    return 0;
}
