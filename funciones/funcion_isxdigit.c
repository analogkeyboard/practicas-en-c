#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    printf("%s\n%s%s\n%s%s\n%s%s\n%s%s\n",
           "De acuerdo a isdigit():",
           isxdigit('F') ? "F es un " : "F no es un ",
           "digito hexadecimal",
           isxdigit('J') ? "J es un " : "J no es un ",
           "digito hexadecimal",
           isxdigit('7') ? "7 es un " : "7 no es un ",
           "digito hexadecimal",
           isxdigit('$') ? "$ es un " : "$ no es un ",
           "digito hexadecimal");
    return 0;
}
