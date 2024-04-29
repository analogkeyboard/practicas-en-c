#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int entero = 873;
    double flotante = 123.94536;
    char cadena[] = "Feliz Cumpleanios";

    printf("Uso de la precision en enteros\n");
    printf("\t%04d\n\t%09d", entero, entero);

    printf("\n\nUso de la precision en flotantes\n");

    printf("\t%3f\n\t%3e\n\t%3g\n", flotante, flotante, flotante);

    printf("\n\nUso de la precision en cadenas\n");
    printf("\t%11s", cadena);

    printf("\n\nValores definidos de precision\n");
    printf("%*.*f", 11, 2, 12.3456);

    return 0;
}
