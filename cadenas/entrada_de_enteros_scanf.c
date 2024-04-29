#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    printf("Introduce 7 enteros: ");
    scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g);

    printf("La entrada desplegada como valores decimales es:\n");
    printf("%d %d %d %d %d %d %d", a, b, c, d, e, f, g);
    return 0;
}
