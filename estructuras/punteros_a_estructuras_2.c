#include <stdio.h>
#include <stdlib.h>

struct miEstructura
{
    /* data */
    int a;
    struct miEstructura *b;
};

int main(int argc, char const *argv[])
{
    struct miEstructura *p1, *p2, *p3;

    p1 = (struct miEstructura *)malloc(sizeof(struct miEstructura));
    p2 = (struct miEstructura *)malloc(sizeof(struct miEstructura));
    p3 = (struct miEstructura *)malloc(sizeof(struct miEstructura));

    p1->a = 10;
    p1->b = NULL;

    p2->a = 20;
    p2->b = NULL;

    p3->a = 30;
    p3->b = NULL;

    p1->b = p2;
    p2->b = p3;
    printf("\n");

    printf("Direccion &x: %d\n", p1);
    printf("a: %d\n", p1->a);
    printf("direccion del siguiente valor: %d\n\n", p1->b);

    printf("Direccion &x: %d\n", p2);
    printf("a: %d\n", p2->a);
    printf("direccion del siguiente valor: %d\n\n", p2->b);

    printf("Direccion &x: %d\n", p3);
    printf("a: %d\n", p3->a);
    printf("direccion del siguiente valor: %d\n\n", p3->b);
    return 0;
}
