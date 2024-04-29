#include <stdio.h>

struct rectangulo
{
    float altura, ancho;
    double area;
};
//pasa una estructura a una funcion por referencia
void area(struct rectangulo *r);
int main(int argc, char const *argv[])
{
    struct rectangulo r;
    printf("Ingresa la altura del rectangulo: ");
    scanf("%f", &r.altura);
    printf("Ingresa el ancho del rectangulo: ");
    scanf("%f", &r.ancho);

    area(&r);
    
    return 0;
}

void area(struct rectangulo *r)
{
    r->area = (double)(r->altura * r->ancho);
    printf("\nAltura: %.2f\n", r->altura);
    printf("Ancho: %.2f\n", r->ancho);
    printf("Area: %.2lf\n", r->area);
}
