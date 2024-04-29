#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%s\n%s%s%s",
           "De acuerdo con isgraph():",
           isgraph('Q') ? "Q es una " : "Q no es una ",
           "caracter de impresion diferente a un espacio",
           "Espacio ", isgraph(' ') ? " es una " : " no es una ",
           "caracter de impresion diferente a un espacio");
    return 0;
}
