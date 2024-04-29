#include <STDIO.H>

int main(int argc, char const *argv[])
{
    int i = 1427;
    double f = 1427.0;
    printf("\t%#o\n", i);
    printf("\t%#x\n", i);
    printf("\t%#X\n", i);
    printf("\t%g\n", f);
    printf("\t%#g\n", f);
    printf("\?");
    return 0;
}
