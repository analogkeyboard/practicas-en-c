#include <stdio.h>
int main(int argc, char const *argv[])
{

    int numero = 5;
    int factorial = 1;
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        // printf("%d\n",i);
        factorial = factorial * i;
        printf("%d x %d = %d\n", factorial, numero, i);
    }

    return 0;
}
