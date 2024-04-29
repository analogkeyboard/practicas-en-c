#include <stdio.h>

int main(int argc, char const *argv[])
{
   char   cadena[] = "31298 87.375";
   int    x;
   double y;

   sscanf(cadena, "%d%lf", &x, &y);

   printf("%s\n%s%6d\n%s%8.3f\n",
          "Los valores almacenados en el arreglo de caracteres cadena es:",
          "entero x: ", x,
          "double y:", y
          );

   return 0;
}
