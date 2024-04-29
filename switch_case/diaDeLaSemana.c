#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    
    char dia;

    printf("Selecciona el dia");
    printf("(l)unes , (m)artes, (M)iercoles: ");
    scanf("%c",&dia);

    switch (dia)
    {
    case 'l':
        printf("Lunes");
        break;
    
    case 'm':
        printf("Martes");
        break;

    case 'M':
        printf("Miercoles");
        break;
    default:
        break;
    }
    printf("\n");
    system("pause");


    return 0;
}
