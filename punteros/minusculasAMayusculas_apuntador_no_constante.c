#include <STDIO.H>
#include <CTYPE.H>

void convertir_a_mayusculas(char *);
int main(int argc, char const *argv[])
{
    char cadena[] = "caracteres";
    printf("Cadena antes de modificarse: %s\n", cadena);
    convertir_a_mayusculas(cadena);
    printf("Cadena despues de modificarse: %s", cadena);
    return 0;
}

void convertir_a_mayusculas(char *pointerString)
{
    while (*pointerString != '\0')
    {

        if (islower(*pointerString))
        {
            *pointerString = toupper(*pointerString);
        }

        pointerString = pointerString + 1;
    }
}
