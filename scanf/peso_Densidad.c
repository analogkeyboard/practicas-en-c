#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define DENSIDAD 0.97

int main(int argc, char const *argv[])
{
  float peso,volumen;
  int sitio,letras;

  char nombre[40];
  printf("¿Hola!, como te llamas?: \n");
  scanf("%s",&nombre);

  printf("%s, ¿Cual es tu peso?: \n");
  scanf("%f",&peso);

  sitio=sizeof(nombre);
  letras=strlen(nombre);
  volumen=peso/DENSIDAD;

  printf("Bien, %s, tu volumen es %2.2f litros. \n",nombre,volumen);

  printf("Ademas tu nombre tiene %d letras. \n",letras);

  printf("y desponemos de %d bytes para guardarlo. \n",sitio);

  printf("\n");
  system("pause");
  /* code */
  return 0;
}
