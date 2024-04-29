#include <stdio.h>

int main(int argc, char const *argv[])
{
    int ultra = 0, super = 0;

    while (super < 6)
    {
        super++;
        ++ultra;

        printf("\nsuper = %d , ultra = %d", super, ultra);
    }

    int y = 2, n = 3;

    int proximo = (y + n++) * 6;

    printf("%d",proximo);

    return 0;
}
