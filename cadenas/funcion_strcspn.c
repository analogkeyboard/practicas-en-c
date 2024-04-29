#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    const char *cadena1 = "El valor es 3.1415";
    const char *cadena2 = "1234567890";

    printf("\nCadena1: %s", cadena1);
    printf("\nCadena2: %s", cadena2);
    printf("\n\nLa longitud del segmento incial de cadena1\n que no contiene caracteres de cadena2 es: %d", strcspn(cadena1, cadena2));

    for (int i = 0; i < strlen(cadena1); i++)
    {
        printf("\n%c = %d", cadena1[i], i+1);
    }

    return 0;
}
