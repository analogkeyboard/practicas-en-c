#include <stdio.h>

#include <stdlib.h>

int main(int argc, char const *argv[])
{
	float a,b;
	
	system("cls");
	printf("\nTecle tu primer numero: ");
	scanf("%f",&a);

	printf("\nTecle tu segundo numero: ");
	scanf("%f",&b);

	printf("\nLos resultdos son: %.2f %.2f %.2f %.2f ",a+b,a-b,a*b,a/b);
	printf("\n");
	system("pause");
	
	


	return 0;
}