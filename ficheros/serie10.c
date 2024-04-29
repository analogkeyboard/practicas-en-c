#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE *fichero;
	fichero =fopen("numeros.txt","w");
	for (int i = 0; i <10; ++i)
	{
		fprintf(fichero, "%d\n",i );
	}

	fclose(fichero);
	return 0;
}