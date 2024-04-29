#include <stdio.h>

int main(int argc, char const *argv[])
{
    char caracter;
    printf("Deme una letra y respondere con ");
    printf("un nombre de animal\nque comience por ella\n");
    printf("Pulse una letra , para terminar pulse #.\n");
    while ((caracter = getchar()) != '#')
    {
        /* code */
        if (caracter != '\n')
        {
            /* code */
            if (caracter >= 'a' && caracter <= 'z')
            {
                /* code */
                switch (caracter)
                {
                case 'a':
                    printf("aranillo,oveja salvaje del caribe\n");
                    break;

                case 'b':
                    printf("babirusa, cerdo salvaje de malasia\n");
                    break;

                case 'c':
                    printf("chascolote, ballena gigante del amazonas\n");
                    break;

                case 'd':
                    printf("destemplado,pinguino rojo de kenia\n");
                    break;

                case 'e':
                    printf("equigobo,camello siberiano\n");
                    break;
                default:
                    printf("ese no lo se\n");
                    break;
                }
            }
            else
            {
                printf("solo me trato con letras minusculas.\n");
                printf("introduzca otra letra o un #.\n\n");
            }
        }
    }
    printf("Programa Terminado");

    return 0;
}
