#include <STDIO.H>
#include <string.h>

int numero(int a);

void mensaje(char saludo[])
{
    /*
    for (int i = 0; i < strlen(saludo); i++)
    {
        printf("%c ", saludo[i]);
    }
    */
    printf("%s", saludo);
}

int main(int argc, char const *argv[])
{
    char cadena[] = "hola mundo";
    printf("%d\n\n", strlen(cadena));
    mensaje("hola mundo desde una funcion");

    printf("\n%d", numero(100));
    return 0;
}

int numero(int a)
{
    return a;
}