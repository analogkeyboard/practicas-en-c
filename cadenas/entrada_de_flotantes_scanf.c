#include <STDIO.H>

int main(int argc, char const *argv[])
{
    double a;
    double b;
    double c;

    printf("Introduzca 3 numeros de punto flotante: \n");
    scanf("%le%lf%lg", &a, &b, &c);

    printf("Los valores introducidos\n");
    printf("En notacion de punto flotante son: \n");
    printf("%f\n%f\n%f", a, b, c);

    return 0;
}
