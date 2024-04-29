#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%s\n%s%s\n%s%s\n",
           "De acuerdo con ispunct():",
           ispunct(':') ? ": es una " : ": no es una ",
           "caracter de puntuacion",
           ispunct('Y') ? "Y es una " : "Y no es una ",
           "caracter de puntuacion",
           ispunct('#') ? "# es una " : "# no es una ",
           "caracter de puntuacion");
    return 0;
}
