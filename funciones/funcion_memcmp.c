#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    char s1[] = "ABCDEFG";
    char s2[] = "ABCDXYZ";

    printf("s1 = %s",s1);
    printf("\ns2 = %s",s2);
    printf("\nmemcmp(s1,s2,4) = %d",memcmp(s1,s2,4));
    printf("\nmemcmp(s1,s2,7) = %d",memcmp(s1,s2,7));
    printf("\nmemcmp(s2,s1,7) = %d",memcmp(s2,s1,7));
    return 0;
}
