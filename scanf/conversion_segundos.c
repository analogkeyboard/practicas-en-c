#include <stdio.h>
#define SEGUNDOS_MINUTOS 60
int main(int argc, char const *argv[])
{

    int min, seg, resto;
    printf("Conversor de segundos a minutos");
    printf("\nIngresa una cantidad de segundos: ");
    scanf("%d", &seg);

    min = seg / SEGUNDOS_MINUTOS;
    resto = seg % SEGUNDOS_MINUTOS;

    printf("\n\n%d segundos son %d minutos con %d  segundos", seg, min, resto);
    return 0;
}
