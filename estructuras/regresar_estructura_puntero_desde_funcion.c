#include <stdio.h>

struct rectangulo
{
    float altura, ancho;
    double area;
};
//pasa una estructura a una funcion por referencia
struct rectangulo * area(float x , float y);
int main(int argc, char const *argv[])
{
    struct rectangulo *r;
    float x,y;
    printf("Ingresa la altura del rectangulo: ");
    scanf("%f", &x);
    printf("Ingresa el ancho del rectangulo: ");
    scanf("%f", &y);

    r=area(x,y);
    
    printf("\nAltura: %.2f\n", r->altura);
    printf("Ancho: %.2f\n", r->ancho);
    printf("Area: %.2lf\n", r->area);
    return 0;
}

struct rectangulo * area(float x , float y)
{
    double area = (double)(x*y);
    static struct rectangulo r;
    r.altura=x;
    r.ancho=y;
    r.area=area;

    return &r;
}
