#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float numero;
    float cuenta=0;
    float suma=0;

    do
    {
        printf("\nDame un nmero (para detener -1): ");
        scanf("%f",&numero);
        suma=suma+numero;
        cuenta=cuenta+1;
    } while (numero!=-1);
    printf("\nEl promedio de los %.0f numeros es %.2f ",cuenta-1,suma-numero/(cuenta-1));
    
    printf("\n");
    return 0;
}
