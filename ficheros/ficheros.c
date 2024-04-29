#include <STDIO.H>

int main(int argc, char const *argv[])
{
    FILE *fptr;
    fptr = fopen("hehe.txt","w");
    fclose(fptr);
    return 0;
}
