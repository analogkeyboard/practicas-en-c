#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    char s1[17];
    char s2[] = "Copia esta cadena";

    memcpy(s1, s2, 18);
    printf("Despues de la copia de s2 en s1 con memcpy(s1,s2,18)\ns1 contiene: \"%s\"", s1);
    return 0;
}
