#include <stdio.h>

struct libro
{
    char titulo[10];
    double precio;
    int paginas;
};

int main(int argc, char const *argv[])
{
    struct libro arr_libros[3] = {
        {"Learn C", 650.5, 325},
        {"pointers", 630.5, 225},
        {"C data", 620.5, 25}};

    struct libro *puntero_libro = arr_libros;

    for (int i = 0; i < 3; i++)
    {
        /* code */
        printf("Titulo: %s\n", puntero_libro->titulo);
        printf("Precio: %.2lf\n", puntero_libro->precio);
        printf("Paginas: %d\n\n", puntero_libro->paginas);
        //puntero_libro++;
        puntero_libro=puntero_libro+1;
    }

    printf("arr_libros: %d\n",sizeof(arr_libros));
    printf("*puntero_libro: %d",sizeof(puntero_libro));

    return 0;
}
