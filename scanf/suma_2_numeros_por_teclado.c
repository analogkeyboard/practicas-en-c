#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int n1=0,n2=0,suma=0;

    printf("Valores de a y b: ");
    scanf("%d %d",&n1,&n2);

    suma=n1+n2;

    printf("La suma de %d y %d es %d",n1,n2,suma);    
    return 0;
}
