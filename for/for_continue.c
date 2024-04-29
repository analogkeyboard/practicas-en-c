#include <stdio.h>

int main(int argc, char const *argv[])
{
	int elemento_saltado;
	for (int i = 0; i <10; ++i)
	{
		/* code */
		if (i==5)
		{
			/* code */
			elemento_saltado=i;
			continue;
		}
		printf("%d\n",i );
	}
			printf("Bucle salta en el elemento: %d\n",elemento_saltado );
	return 0;
}