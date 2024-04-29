#include <stdio.h>

int cuboPorValor(int);
int main(int argc, char const *argv[])
{
	int numero=5;
	printf("valor original de numero: %d\n",numero );
	numero =cuboPorValor(numero);

	printf("El nuevo valor de numero es: %d\n",numero );

	return 0;
}

int cuboPorValor(int n){
	return n*n*n;
}