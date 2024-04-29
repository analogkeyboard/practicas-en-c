#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    printf("%s\n%s%s\n%s%s\n",
           "De acuerdo a isdigit():",
           isalpha('A') ? "A es una " : "8 no es una ",
           "letra",
           isalpha('&') ? "& es una " : "# no es una ",
           "letra");
    return 0;
}
