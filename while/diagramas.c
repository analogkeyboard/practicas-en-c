#include <stdio.h>
#define EOF (-1)
int main(int argc, char const *argv[])
{
    int caracter;
    int indice;
    int num_caracter;

    while ((caracter = getchar()) != EOF)
    {
        num_caracter = caracter % 26;
        indice = 0;

        while (indice++ < (30 - num_caracter))
        {
            /* code */
            putchar(' ');
        }

        indice = 0;
        while (indice++ < (2 * num_caracter + 1))
        {
            putchar(caracter);
        }
       // putchar('\n');
       printf("\n");
    }
    //printf("\nnumero_caracter: %d", num_caracter);
    //printf("\n(30-numero_caracter) : %d", 30 - num_caracter);
    //printf("\n(2*numero_caracter+1) : %d", 2 * num_caracter + 1);

    return 0;
}
