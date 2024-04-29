#include <STDIO.H>
#define NOMBRE "ORDENATAS, S.A."
#define DIRECCION "Plaza del Byte 12"
#define CIUDAD "Villabits, E- 60006"
#define LIMITE 65

char asteriscos();
int main(int argc, char const *argv[])
{
    asteriscos();
    printf("%s\n", NOMBRE);
    printf("%s\n", DIRECCION);
    printf("%s\n", CIUDAD);
    asteriscos();
    return 0;
}

char asteriscos()
{
    for (int i = 1; i <= LIMITE; i++)
    {
        /* code */
        putchar('*');
    }
    putchar('\n');
}