#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    const char *cadena1 = "abcdefghijklmnopqrstuvwxyz";
    const char *cadena2 = "cuatro";
    const char *cadena3 = "Mexico";

    printf("Longitud de cadena1: %d\n", strlen(cadena1));
    printf("Longitud de cadena2: %d\n", strlen(cadena2));
    printf("Longitud de cadena3: %d\n", strlen(cadena3));
    return 0;
}
