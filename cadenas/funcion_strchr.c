#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    char *cadena = "Esta es una prueba";

    char caracter1 = 'a';
    char caracter2 = 'z';

    // si caracter1 se encuentra en la cadena
    if (strchr(cadena, caracter1) != NULL)
    {
        printf("\'%c\' se encuentra en \"%s\"\n",caracter1,cadena);
    }
    else
    {

        printf("\'%c\' no se encuentra en \"%s\"\n",caracter1,cadena);

        // si caracter2 se encuentra en la cadena
    }
    if (strchr(cadena, caracter2) != NULL)
    {
        printf("\'%c\' se encuentra en \"%s\"\n",caracter2,cadena);
    }
    else
    {

        printf("\'%c\' no se encuentra en \"%s\"\n",caracter2,cadena);
    }
    return 0;
}
