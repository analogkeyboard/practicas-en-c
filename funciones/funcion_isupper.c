#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%s\n%s%s\n%s%s\n",
           "De acuerdo con islower():",
           isupper('T') ? "T es una " : "T no es una ",
           "letra mayuscula",
           isupper('t') ? "t es una " : "t no es una ",
           "letra mayuscula",
           isupper('4') ? "4 es una " : "4 no es una ",
           "letra mayuscula");
    return 0;
}
