#include <STDIO.H>
#include <STDLIB.H>

int main(int argc, char const *argv[])
{
char c;
    printf("Ingresa un caracter: ");
    c=getchar();

    system("cls");
    printf("Pantalla limpiada\n\n");
    printf("\nCaracter Ingresado: ");
    putchar(c);

    return 0;
}
