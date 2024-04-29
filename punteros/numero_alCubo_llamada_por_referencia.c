#include <stdio.h>

int cuboPorReferencia(int *);

int main(int argc, char const *argv[])
{

	int numero=5;
	printf("valor original de numero: %d\n",numero );
	cuboPorReferencia(&numero);

	printf("El nuevo valor de numero es: %d\n",numero );

	return 0;
}

int cuboPorReferencia(int *numPointer){
	*numPointer = *numPointer * *numPointer * *numPointer;
}