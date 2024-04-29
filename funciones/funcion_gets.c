#include <stdio.h>

void inverso(const char *const pointerString);
int main(int argc, char const *argv[])
{

    char enunciado[15]="hola mundo"; // crea arreglo de caracteres

    printf("Introduzca una linea de texto:\n");

    //gets(enunciado);

    printf("Enunciado: %s", enunciado);
    printf("\nLa linea impresa al reves es:\n");
    inverso(enunciado);
    return 0;
}

void inverso(const char *const pointerString)
{
    if (pointerString[0] == '\0')
    {
        /* code */
        return;
    }
    else
    {
        /* code */
        inverso(&pointerString[1]);
        putchar(pointerString[0]);
    }
}
