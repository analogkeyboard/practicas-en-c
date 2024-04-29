#include <STDIO.H>
#include <CONIO.H>
int main(int argc, char const *argv[])
{
    char byte1, byte2;
    printf("Pulse la combinacion de teclas\ncuyo codigo extendido desea conocer\n\n");

    byte1 = _getch();
    byte2 = _getch();

    printf("%d\t%d\n");

    _getche();

    printf("\nPrograma Finalizado");

    return 0;
}
