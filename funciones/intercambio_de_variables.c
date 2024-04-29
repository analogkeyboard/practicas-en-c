#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int a,b,temp;

    a=10,b=20;

    printf("a: %d, b: %d",a,b);

    temp=a; //10
    a=b; //20
    b=temp;//10
    printf("\na: %d, b: %d",a,b);
    return 0;
}
