#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    const char *cadena1 = "abcdefabcdef";
    const char *cadena2 = "def";

    printf("\nCadena1: %s", cadena1);
    printf("\nCadena2: %s", cadena2);
    printf("\nEl resto de cadena1 que comienza con");
    printf("\nla primera ocurrencia de cadena2 es: %s", strstr(cadena1, cadena2));
    return 0;
}
