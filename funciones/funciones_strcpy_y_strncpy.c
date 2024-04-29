#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{

	char x[] = "Feliz cumpleanos a ti";

	char y[25];
	char z[15];

	printf("Largo de x: %d", strlen(x));
	printf("\n\nLa cadena en el arreglo x es: %s\nLa cadena en el arreglo y es: %s", x, strcpy(y, x));

	/*copia los primeros 17 caracteres de x dentro de z, no copia el caracter nulo*/

	strncpy(z, x, 17);
	z[15] = '\0';
	printf("\nLa cadena en el arreglo z es: %s", z);

	// for (int i = 0; i < strlen(x); i++)
	// {
	// 	/* code */
	// 	printf("\n%c = %d", x[i], i);
	// }

	return 0;
}