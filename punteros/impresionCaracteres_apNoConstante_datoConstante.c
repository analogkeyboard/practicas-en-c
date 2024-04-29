#include <STDIO.H>

void impresion_de_caracteres(const char *);
int main(int argc, char const *argv[])
{
    char cadena[] = "imprime los caracteres de una cadena";
    printf("La cadena es: %s\n", cadena);

    impresion_de_caracteres(cadena);
    return 0;
}

void impresion_de_caracteres(const char *pointerString)
{
    for (; *pointerString != '\0'; *pointerString++)
    {
        printf("%c", *pointerString);
    }
}
