#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    char s1[20] = "Feliz ";
    char s2[] = "Anio Nuevo ";
    char s3[40] = "";

    printf("s1: %s\ns2: %s", s1, s2);

    // concatena 2 cadenas
    printf("\nstrcat(s1,s2) = %s", strcat(s1, s2));

    // concatena los primeros 6 caracteres de s3 a s1

    printf("\nstrncat(s3,s1,6) = %s", strncat(s3, s1, 6));

    //concatena s1 con ese s3
    printf("\nstrcat(s3,s1) = %s",strcat(s3,s1));
    return 0;
}
