#include <STDIO.H>

int main(int argc, char const *argv[])
{
    char x;
    char y[9];

    printf("Introduzca una cadena: ");
    scanf("%c%s",&x,y);

    printf("La entrada fue:\n");
    printf("el caracter \"%c\"\n",x);
    printf("y la cadena \"%s\"\n", y);
    return 0;
}
