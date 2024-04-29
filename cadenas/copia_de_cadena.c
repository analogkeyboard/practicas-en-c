#include <STDIO.H>

char copia1(char[], char[]);
int main(int argc, char const *argv[])
{
    char cadena1[10];
    char cadena2[] = "hola mundo";

    printf("Antes de copiar:\n");
    printf("cadena1: %s\n", cadena1);
    printf("cadena2: %s\n", cadena2);

    copia1(cadena1, cadena2);

    printf("\nDespues de copiar:\n");
    printf("cadena1: %s\n", cadena1);
    printf("cadena2: %s\n", cadena2);
    return 0;
}
char copia1(char s1[], char s2[])
{
    int i = 0;
    while (s2[i] != '\0' || s1[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
}