#include <stdio.h>

int cuadrado(int);
int main(int argc, char const *argv[])
{
    

    for (int i = 1; i <=10; i++)
    {
        printf("%d = %d\n",i,cuadrado(i) );
    }

    return 0;
}

//definicion de la funcion
int cuadrado(int x){
    return x*x;
}
