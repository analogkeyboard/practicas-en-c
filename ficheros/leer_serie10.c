#include <stdio.h>

int main(int argc, char const *argv[])
{
    FILE *fichero;

    fichero = fopen("numeros.txt", "r");

    char serie[10];

    while (fgets(serie, 10, fichero))
    {
        printf("%s", serie);
    }
    fclose(fichero);

    return 0;
}
