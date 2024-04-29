#include <STDIO.H>

int main(int argc, char const *argv[])
{
    FILE *fptr;

    // abre un fichero en modo escritura
    fptr = fopen("fichero1.txt", "w");

    // escribe texto en el archivo
    fprintf(fptr, "texto de prueba");

    fclose(fptr);
    return 0;
}
