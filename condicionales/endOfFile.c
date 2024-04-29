#include <stdio.h>

int main(int argc, char const *argv[])
{
    int r=0;
    float precio=0;

    printf("Precio: ");
    r=scanf("%g",&precio);

    if (r==EOF)
    {
        /* code */
        printf("Fin de la entrada de datos\n");
    }else{
        printf("%g\n",precio);
    }
    
    return 0;
}
