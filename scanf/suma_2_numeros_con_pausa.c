#include <STDIO.H>

int main(int argc, char const *argv[])
{

    int n1, n2, suma;
    char pausa;

    printf("numero 1: ");
    scanf("%d", &n1);

    printf("numero 2: ");
    scanf("%d", &n2);

    suma = n1 + n2;

    printf("Pulse <enter> para continuar");
    scanf("%c", &pausa);

    printf("La suma de %d + %d es %d", n1, n2, suma);
    return 0;
}
