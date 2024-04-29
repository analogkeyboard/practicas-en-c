#include <stdio.h>
#define LIMITE 8000L

int main(int argc, char const *argv[])
{
    int num1, num2;
    long retraso = 0;
    int cont = 0;

    printf("Furia , el caballo matematica, sumara 2\n");
    printf("enteros no muy grandes para su entretenimiento\n");

    printf("Introduzca el primer entero (¡que sea facil!)\n");
    scanf("%d", &num1);

    printf("Introduzca el segundo entero (¡que sea facil!)\n");
    scanf("%d", &num2);

    printf("Bien, Furia, cuanto suma eso?\n");

    while (retraso++ < LIMITE)
        ;

    while (cont++ < (num1 + num2 - 1))
    {
        putchar('\007');
        retraso = 0;
        while (retraso++ < LIMITE)
            ;
        putchar('\n');
    }

    printf("¿Seguro?\n");
    retraso = 0;
    while (retraso++ < 3 * LIMITE)
        ;
    putchar('\007');
    printf("Muy bien, ¡Furia!\n");

    return 0;
}
