#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int i = 7;
    char c = 'a';
    char s[] = "hola";
    double f = 1.23;

    printf("\n%10s%10d%10c%10f\n\n", s, i, c, f);
    printf("\n%-10s%-10d%-10c%-10f\n\n", s, i, c, f);

    return 0;
}
