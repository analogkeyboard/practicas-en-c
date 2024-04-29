#include <STDIO.H>
#include <string.h>
// estructura
struct miEstructura
{
    int miNumero; // miembro de tipo entero
    char miLetra; // miembro de tipo caracter
    char cadena[30];
};

int main(int argc, char const *argv[])
{

    // variable struct llamada es1
    struct miEstructura es1;

    // asignando valores a los miembros de la estructura
    es1.miNumero = 10;
    es1.miLetra = 'A';
    strcpy(es1.cadena, "Hola Mundo");

    // valores de los miembros
    printf("miNumero: %d", es1.miNumero);
    printf("\nmiLetra: %c", es1.miLetra);
    printf("\ncadena: %s", es1.cadena);
    return 0;
}
