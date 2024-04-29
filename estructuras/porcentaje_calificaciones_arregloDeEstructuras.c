#include <stdio.h>
#include <string.h>

struct estudiante
{
    char nombre[10];
    int fisica, quimica, matematicas;
    double porcentaje;
};

int main(int argc, char const *argv[])
{
    struct estudiante estudiantes[3];

    strcpy(estudiantes[0].nombre, "Ravi");
    estudiantes[0].fisica = 50;
    estudiantes[0].quimica = 60;
    estudiantes[0].matematicas = 70;

    strcpy(estudiantes[1].nombre, "Kiran");
    estudiantes[1].fisica = 55;
    estudiantes[1].quimica = 66;
    estudiantes[1].matematicas = 77;

    strcpy(estudiantes[2].nombre, "Anil");
    estudiantes[2].fisica = 45;
    estudiantes[2].quimica = 55;
    estudiantes[2].matematicas = 65;

    printf("\nNombre\tFisica\tQuimica\tMatematicas\t|Porcentaje\n");
    for (int i = 0; i < 3; i++)
    {
        estudiantes[i].porcentaje = (double)(estudiantes[i].fisica + estudiantes[i].matematicas + estudiantes[i].quimica)/3;

        printf("%s\t%d\t%d\t%d\t\t|%5.2lf\n", estudiantes[i].nombre, estudiantes[i].fisica,estudiantes[i].quimica, estudiantes[i].matematicas, estudiantes[i].porcentaje);
    }

    return 0;
}
