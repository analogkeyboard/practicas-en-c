#include <STDIO.H>

int main(int argc, char const *argv[])
{

    int x = 10;
    {
        int x = 5;
        printf("Variable X local: %d", x);
    }

    printf("\nVariable X global: %d", x);
    return 0;
}
