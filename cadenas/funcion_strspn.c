#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    const char *cadena1 = "El valor es 3.14159";
    const char *cadena2 = "aelv lsEro";

    printf("Cadena1: %s", cadena1);
    printf("\nCadena2: %s", cadena2);
    printf("\nLa longitud del segmento inicial de cadena1");
    printf("\nque contiene solamente caracteres de cadena2 es: %d\n", strspn(cadena1, cadena2));

    for (int i = 0; i < strlen(cadena1); i++)
    {
        printf("%c = %d", cadena1[i], i);
    }

    return 0;
}
