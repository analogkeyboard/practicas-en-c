#include <STDIO.H>

int main(int argc, char const *argv[])
{
    FILE *fptr;

    //abre el fichero en modo lectura
    fptr = fopen("fichero1.txt", "r");

    //variable para guardar el contenido del fichero
    char miCadena[100];

    fgets(miCadena,100,fptr);

    printf("%s",miCadena);

    fclose(fptr);
    return 0;
}
