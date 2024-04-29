#include <STDIO.H>

void copia1(char *, const char *);
int main(int argc, char const *argv[])
{
    char cadena1[10]; // arreglo con 10 espacios donde se copiara la cadena2

    char *cadena2 = "Hola";

    printf("Antes de copiar:\n");
    printf("cadena1: %s\n", cadena1);
    printf("cadena2: %s\n", cadena2);

    copia1(cadena1,cadena2);

    printf("\nDespues de copiar:\n");
    printf("cadena1: %s\n", cadena1);
    printf("cadena2: %s\n", cadena2);

    return 0;
}

void copia1(char *s1, const char *s2)
{
    for (int i = 0; (s1[i] = s2[i]) != '\0'; i++)
    {
        /* code */
    }
}
