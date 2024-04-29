#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char cadena[] = "Hola Mundo";
    char cadena2[]=" desde C";
    char copia_cadena[20];
    int largo = strlen(cadena);

    printf("%s", cadena);

    printf("\nlargo cadena: %d", strlen(cadena));

    printf("\n");

    for (int i = 0; i < largo; i++)
    {
        printf("%c\n", cadena[i]);
    }
    strcat(cadena,cadena2);
    printf("\nCadena concatenada: %s",cadena);

    strcpy(copia_cadena,cadena);
    printf("\nCopia de Cadena: %s",copia_cadena);
    

    return 0;
}
