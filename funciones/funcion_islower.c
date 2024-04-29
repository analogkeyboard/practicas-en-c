#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%s\n%s%s\n%s%s\n",
           "De acuerdo con islower():",
           islower('r') ? "r es una " : "r no es una ",
           "letra minuscula",
           islower('R') ? "R es una " : "R no es una ",
           "letra minuscula",
           islower('!') ? "! es una " : "! no es una ",
           "letra minuscula");
    return 0;
}
