#include <STDIO.H>
#include <STRING.H>
#define NOMBRE "ORDENATAS, S.A."
#define DIRECCION "Plaza del Byte 12"
#define CIUDAD "Villabits, E- 60006"
#define LIMITE 65

char asteriscos();
char espacios(int numero);
int main(int argc, char const *argv[])
{

    int salta = (65 - strlen(DIRECCION)) / 2;

    asteriscos();

    espacios(salta);
    printf("%s\n", NOMBRE);

    espacios(salta);
    printf("%s\n", DIRECCION);

    espacios(salta);
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

char espacios(int numero)
{
    for (int cont = 0; cont <= numero; cont++)
    {
        /* code */
        putchar(' ');
    }
}