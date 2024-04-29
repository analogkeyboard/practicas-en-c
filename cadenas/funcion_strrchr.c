#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{

    const char *cadena = "Un zoologico tienen muchos animales, inclusos zorros";

    int c = 'z';
    printf("El resto de cadena que comienza con la\n");
    printf("ultima ocurrencia del caracter %c es: %s", c, strrchr(cadena, c));
    return 0;
}
