#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    double d;

    d = atof("99.0");
    printf("%s%.3f\n%s%.3f\n",
           "La cadena \"99.0\" convertida a double es: ", d,
           "El valor convertido dividido entre 2 es: ", d / 2.0);
    return 0;
}
