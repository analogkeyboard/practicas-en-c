#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define PI 3.14153

int main(int argc, char const *argv[])
{
  float area,circunferencia,radio;
  printf("Cual es el radio de su pizza?: \n");
  scanf("%f",&radio);
  
  // area=PI*radio*radio;
  area=PI*pow(radio,2);
  circunferencia=2.0*PI*radio;

  printf("Los parametros basicos de su pizza son: \n");
  printf("circunferencia= %1.2f, area=%1.2f\n",circunferencia,area);
  
  printf("\n");
  system("pause");
  return 0;
}
