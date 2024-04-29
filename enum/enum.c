#include <STDIO.H>
enum Nivel
{
    BAJO=25,
    MEDIANO=50,
    ALTO=75,
    EXTREMO=100
};

int main(int argc, char const *argv[])
{
    enum Nivel nivel0 = BAJO;
    enum Nivel nivel2 = EXTREMO;

    printf("nivel bajo: %d", nivel0);
    printf("\nnivel extremo: %d", nivel2);
    return 0;
}
