#include <STDIO.H>
#include <MATH.H>

int main(int argc, char const *argv[])
{
    double *puntero = NULL;
    double d = 0;
    double x = 100;

    puntero = &x;
    d = sqrt(x) + *puntero;

    printf("x: %.2lf\n", x);
    printf("Raiz x: %2.lf\n", sqrt(x));
    printf("puntero direccion: %p\n", puntero);
    printf("raiz + *puntero: %.2lf\n", d);
    printf("valor de puntero: %.2lf", *puntero);

    return 0;
}
