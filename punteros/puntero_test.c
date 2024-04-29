#include <STDIO.H>

int main(int argc, char const *argv[])
{
    double a = 10.33; 
    int *p=NULL;
    double b = 0;

    p = &a;
    b = *p;

    //*p = 20;
    printf("b = %g\n",b);

    
    return 0;
}
