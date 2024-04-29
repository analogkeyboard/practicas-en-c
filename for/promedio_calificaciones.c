#include <stdio.h>
int main(int argc, char const *argv[])
{
    int calificaciones[] = {10, 9, 10, 8, 7};
    int largo = sizeof(calificaciones) / sizeof(calificaciones[0]);

    float suma = 0;
    float promedio;

    printf("Calificaciones");
    for (int i = 0; i < largo; i++)
    {
        printf("\nMateria #%d = %d ", i + 1, calificaciones[i]);
    }

        for (int i = 0; i < largo; i++)
    {
        suma = suma + calificaciones[i];
    }

    promedio = suma / largo;

    printf("\nPromedio de calificaciones: %.1f", promedio);

    return 0;
}
