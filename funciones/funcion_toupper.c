#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{

    printf("%s\n%s%c\n%s%c\n%s%c\n%s%c\n",
    "Funcion toupper():",
    "u convertida a mayuscula es: ",toupper('u'),
    "6 convertida a mayuscula es: ",toupper('6'),
    "d convertida a mayuscula es: ",toupper('d'),
    "% convertida a mayuscula es: ",toupper('%')
    );
    return 0;
}
