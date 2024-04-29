#include <STDIO.H>

int main(int argc, char const *argv[])
{
    FILE *fptr;

    //abre el fichero en modo agregar
    fptr = fopen("fichero1.txt","a");

    //agrega texto
    fprintf(fptr,"\ntexto agregado en una linea nueva");
    fclose(fptr);
    return 0;
}
