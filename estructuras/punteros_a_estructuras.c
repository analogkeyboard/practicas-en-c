#include <stdio.h>

struct mi_estructura
{
    int variable_a;
    struct mi_estructura *variable_b;
};

int main(int argc, char const *argv[])
{
    struct mi_estructura x={10,NULL};
    struct mi_estructura y={20,NULL};
    struct mi_estructura z={30,NULL};

    struct mi_estructura *p1,*p2,*p3;

    p1=&x;
    p2=&y;
    p3=&z;

    x.variable_b=p2;
    y.variable_b=p3;
    printf("\n");

    printf("Direccion &x: %d\n",p1);
    printf("variable_a: %d\n",x.variable_a);
    printf("direccion del siguiente valor: %d\n\n",x.variable_b);

    printf("Direccion &y: %d\n",p2);
    printf("variable_a: %d\n",y.variable_a);
    printf("direccion del siguiente valor: %d\n\n",y.variable_b);

    printf("Direccion &y: %d\n",p3);
    printf("variable_a: %d\n",z.variable_a);
    printf("direccion del siguiente valor: %d\n\n",z.variable_b);
    return 0;
}

