#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    printf("%s\n%s%s\n%s%s\n%s%s\n",
           "De acuerdo a isdigit():",
           isalnum('A') ? "A es un " : "A no es un ",
           "digito o letra",
           isalnum('8') ? "8 es un " : "8 no es un ",
           "digito o letra",
           isalnum('#') ? "# es un " : "# no es un ",
           "digito o letra"
           );
    return 0;
}
