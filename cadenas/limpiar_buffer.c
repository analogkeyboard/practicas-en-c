#include <STDIO.H>

int main(int argc, char const *argv[])
{
    char c;
    float precio = 0;

    printf("Ingrese Precio: ");
    scanf("%g", &precio);

    fflush(stdin);

    printf("Pulse <enter> para continuar ");
    scanf("%c", &c);

    printf("Precio: %g\n", precio);

    return 0;
}
