#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    char nombre[10];
    int edad;

    printf("Introduce tu nombre: ");
    scanf("%s",nombre);

    printf("Introduce tu edad: ");
    scanf("%d",&edad);

    printf("Nombre: %s",nombre);
    printf("\nEdad: %d",edad);


    printf("\n");
    system("pause");
    return 0;
}
