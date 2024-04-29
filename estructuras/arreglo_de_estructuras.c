#include <stdio.h>
#include <string.h>
struct book
{
    char title[10];
    double price;
    int pages;
};

int main(int argc, char const *argv[])
{
    struct book b[3] =
        {
            {"Learn C", 650.50, 365},
            {"C pointers", 1.50, 265}
        };

    strcpy(b[2].title, "C pearls");
    b[2].price = 400.5;
    b[2].pages = 400;

    printf("\nList of books\n");

    for (int i = 0; i < 3; i++)
    {
        printf("\nTitle: %s\n", b[i].title);
        printf("Price: %.2lf\n", b[i].price);
        printf("Pages: %d\n", b[i].pages);
    }

    return 0;
}
