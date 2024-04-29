#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int a;
    float b;
    char c;

    printf("Ingresa 0,1,2 o 3 datos correctamente\n");

    int r=scanf("%d %f %c",&a,&b,&c);

    printf("Datos validos ingresados: %d",r);    
    return 0;
}
