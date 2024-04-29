#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */
    int i,n;
    printf("Dame el numero de la tabla de multiplicar: ");
    scanf("%d",&n);
    i=1;
    do
    {
        /* code */
        printf("\n %d x %d = %d",n,i,n*i);
        i=i+1;
    } while (i<=10);
    printf("\n");
    system("pause");
    return 0;
}
