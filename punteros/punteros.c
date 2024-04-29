#include <STDIO.H>
int main(int argc, char const *argv[])
{
    int miEdad = 43; // variable entera

    int *ptr = &miEdad; // variable puntero, con el nombre ptr que guarda la direccion de memoria de miEdad

    // valor de la variable miEdad (43)
    printf("\n\nvariable entera miEdad: %d", miEdad);

    // direccion de memoria de miEdad(hex)
    printf("\nDireccion de miEdad: %p", &miEdad);

    // salida de la direccion de memoria de miEdad con el puntero
    printf("\nPuntero con el valor de la direccion de memoria: %p\n", ptr);

    // desreferenciar el puntero
    // en lugar de apuntar a la direccion de memoria de miEdad
    // apunta al valor asignado (43)
    printf("\nPuntero con el valor de la variable miEdad: %d\n", *ptr);

    int arreglo[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("%d = %p\n", arreglo[i], &arreglo[i]);
    }

    return 0;
}
