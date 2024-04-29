#include <STDIO.H>

int main(int argc, char const *argv[])
{
    char caracter='A';
    char cadena[]="Esta es una cadena";
    const char *ptrCadena="Esta tambien es una cadena";

    printf("%c\n",caracter);
    printf("%s\n","Esta es una cadena");
    printf("%s\n",cadena);
    printf("%s\n",ptrCadena);
    return 0;
}
