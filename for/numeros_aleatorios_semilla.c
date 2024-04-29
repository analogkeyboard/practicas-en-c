#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[])
{
    srand(time(NULL));
     for (int i = 1; i <= 20; i++)
    {
        printf("%d\t", 1 + (rand() % 6));
        if (i % 5 == 0)
        {
            /* code */

            printf("\n");
        }
    }

    return 0;
}
