#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{

    char cadena[] = "Este es un enunciado con 7 tokens";
    char *pointerToken;

    printf("\nLa cadena a dividir en tokens es: %s", cadena);

    printf("\nLos tokens son:\n");

    // inicia la division del enuncioado en tokens
    pointerToken = strtok(cadena, " ");

    printf("pointerToken: %s\n\n", pointerToken);

    // continua la division en tokens hasta que pointerToken hace NULL
    while (pointerToken != NULL)
    {
        printf("%s\n", pointerToken);
        pointerToken = strtok(NULL, " ");
    }

    return 0;
}
