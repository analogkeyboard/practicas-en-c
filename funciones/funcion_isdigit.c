#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    printf("%s\n%s%s\n%s%s\n",
           "De acuerdo a isdigit():",
           isdigit('8') ? "8 es un " : "8 no es un ",
           "digito",
           isdigit('#') ? "# es un " : "# no es un ",
           "digito"
           );
    return 0;
}
