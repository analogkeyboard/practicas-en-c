#include <stdio.h>
#include <stdbool.h>
int main(int argc, char const *argv[])
{
    bool encendido = true;
    bool caminar = false;

    printf("Encendido: %d\n", encendido);
    printf("Caminar: %d", caminar);

    printf("\n%d\n", 10 > 9);
    printf("%d", 10 > 11);
    return 0;
}
