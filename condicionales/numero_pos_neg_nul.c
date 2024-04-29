#include <stdio.h>

int main(int argc, char const *argv[])
{
    int myNum = 0; // Is this a positive or negative number?

    if (myNum > 0)
    {
        printf("The value is a positive number.");
    }
    else if (myNum < 0)
    {
        printf("The value is a negative number.");
    }
    else
    {
        printf("The value is 0.");
    }
    return 0;
}
