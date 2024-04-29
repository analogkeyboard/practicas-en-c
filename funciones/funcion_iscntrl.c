#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%s%s\n%s%s\n",
           "Funcion iscntrl():",
           "Nueva linea ", iscntrl('\n') ? "es un " : "no es un", "caracter de control",

           iscntrl('$') ? "$ es un " : "$ no es un ", "caracter de control");
    return 0;
}
