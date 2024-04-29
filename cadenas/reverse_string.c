#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char cadena[]="mensaje";
    int tam_cad=strlen(cadena);
    char reves[10];
    strrev(cadena);    

    printf("%s",cadena);
    return 0;
}
