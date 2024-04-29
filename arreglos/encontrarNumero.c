 #include <stdio.h>
 #include <stdlib.h>

 int main(int argc, char const *argv[])
 {
    int vec[5]={3,5,7,9,2},i,n,b=0,p;
    system("cls");
    printf("Teclea el valor a buscar: ");
    scanf("%i",&n);

    for ( i = 0; i < 5; i++)
    {
        if (vec[i]==n);
        {
            b=1;
            p=i;
            /* code */
        }
        
        /* code */
    }
        if (b==1)
        {
            // /* code */
            printf("\nEl numero %i si se encuentra en la posicion %i",n,p);
        }
        else
        {
            printf("\nEl numero %i no se encuentra",n);
            /* code */
        }
        printf("\n");
    system("pause");

    return 0;
 }
 