#include <stdio.h>
#define EOF (-1)
int main(int argc, char const *argv[])
{
    int caracter;
    int num_linea = 0;
    int num_caracteres = 0;
    
    while ((caracter = getchar()) != EOF)
    {
        num_caracteres++;
        //  printf("\ndebug caracter: %d\n", num_caracteres);
        if (caracter == '\n')
        {

            num_linea++;
            //    printf("\ndebug linea: %d\n", num_linea);
        }
    }

    printf("\nCaracteres: %d\nLineas: %d", num_caracteres - num_linea, num_linea);

    return 0;
}
