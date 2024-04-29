#include <STDIO.H>

int absoluto(int);
int main(int argc, char const *argv[])
{
    printf("%d\n",absoluto(10));
    printf("%d",absoluto(-10));
    return 0;
}

int absoluto(int n)
{

    int x = (n < 0) ? -n : n;

    return x;
}
