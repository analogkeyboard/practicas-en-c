#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tiroDados(void);
int main(int argc, char const *argv[])
{
		
		int suma,estadoJuego,miPunto;
		srand(time(NULL));

		suma=tiroDados();

		switch(suma){
		case 7: case 11:
			estadoJuego=1;
			break;

		case 2:case 3:case 12:

			estadoJuego=2;
			break;
		default:
			estadoJuego=0;
			miPunto=suma;
			printf("mi punto: %d\n",miPunto);
			break;
		}

		while(estadoJuego==0){
			suma=tiroDados();
			if (suma==miPunto)
			{
				/* code */
				estadoJuego=1;
			}else if(suma==7){
				estadoJuego=2;
			}
		}
		if (estadoJuego==1)
		{
			/* code */
			printf("El jugador gana!\n");
		}else{
			printf("El jugador pierde!\n");
		}

	return 0;
}

int tiroDados(void){

	int dado1,dado2,sumaDados;

	dado1= 1+ (rand() %6);
	dado2= 1+ (rand() %6);
	sumaDados = dado1 +  dado2;

	printf("El jugador tiro %d + %d = %d\n",dado1,dado2,sumaDados );

	return sumaDados;
}