#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%s\n%s%s%s",
           "De acuerdo con isprint():",
           isprint('$') ? "$ es una " : "$ no es una ",
           "caracter de impresion",
           "Alerta ", isprint('\a') ? " es una " : " no es una ",
           "caracter de impresion");
    return 0;
}
