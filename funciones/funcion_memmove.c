#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char x[] = "Hogar Dulce Hogar";
    printf("\nLa cadena antes de memmove() es: %s", x);
    printf("\nLa cadena despues de memmove() es: %s", memmove(x, &x[11], 0));

    return 0;
}
