#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    const char *s1 = "Feliz anio nuevo";
    const char *s2 = "Feliz anio nuevo";
    const char *s3 = "Felices fiestas";

    printf("\n0 = igual");
    printf("\n-1 = menor que");
    printf("\n1 = mayor que");

    printf("\n\ns1 = %s", s1);
    printf("\ns2 = %s", s2);
    printf("\ns3 = %s", s3);

    printf("\n\nstrcmp(s1,s2) = %d", strcmp(s1, s2));
    printf("\nstrcmp(s1,s3) = %d", strcmp(s1, s3));
    printf("\nstrcmp(s3,s1) = %d", strcmp(s3, s1));

    printf("\n\nstrncmp(s1,s3,6) = %d", strncmp(s1, s3, 6));
    printf("\nstrncmp(s1,s3,7) = %d", strncmp(s1, s3, 7));
    printf("\nstrncmp(s3,s1,7) = %d", strncmp(s3, s1, 7));
    return 0;
}
