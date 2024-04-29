#include <STDIO.H>
#include <STRING.H>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 43; i++)
    {
        /* code */
        printf("%d:\t%s\n", i, strerror(i));
    }

    return 0;
}
