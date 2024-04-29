#include <STDIO.H>
#define SALUDO "que gran nombre!"

int main(int argc, char const *argv[])
{
    char nombre[40];
    printf("Cual es tu nombre: \n");
    scanf("%s", &nombre);

    printf("Hola tu nombre es %s. %s", nombre, SALUDO);
    return 0;
}
