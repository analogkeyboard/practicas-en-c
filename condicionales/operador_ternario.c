#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int a = 30, b = 20;

    int c = (a < b) ? a : b;

    printf("%d", c);
    return 0;
}
