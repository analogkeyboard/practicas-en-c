#include <stdio.h>

int main(int argc, char const *argv[])
{
	char cadena[80];
	int x;
	double y;

	printf("Introduzca un entero y un double:\n");
	scanf("%d%lf",&x,&y);

	sprintf(cadena,"entero:%6d\ndouble:%8.2f",x,y);
	printf("%s\n%s\n","La salida con formato, almacenada en arreglo cadena es: ",cadena);
	return 0;
}