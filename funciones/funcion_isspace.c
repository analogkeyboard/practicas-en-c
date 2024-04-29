#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%s%s\n%s%s%s\n%s%s%s\n",
           "Funcion isspace():",
           "Nueva linea ", isspace('\n') ? "es un " : "no es un","espacio en blanco",
           "Tabulador horizontal ", isspace('\t') ? "es un " : "no es un","espacio en blanco",
           isspace('%') ? "% es un " : "% no es un"," espacio en blanco");
    return 0;
}
