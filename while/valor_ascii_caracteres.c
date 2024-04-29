#include <STDIO.H>

int main(int argc, char const *argv[])
{

    char c = 0;
    printf("Introduzca una cadena de texto: ");

    while (1)
    {
        c = getchar();
        if (c != '\n')
        {
            printf("El codigo ascii de %c es %d\n", c, c);
        }
        else
        {
            printf("Introduzca una cadena de texto: ");
        }
    }

    return 0;
}
