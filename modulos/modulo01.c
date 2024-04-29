#include <STDIO.H>

int max(int, int);
int main(int argc, char const *argv[])
{
    int a = 0, b = 0, c = 0;
    int mayor = 0;
    printf("Valores a, b y c: ");
    scanf("%d %d %d", &a, &b, &c);

    mayor = max(a, b);
    mayor = max(mayor, c);

    printf("Mayor: %d",mayor);

    return 0;
}
