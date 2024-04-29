#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num,numC,cont=1;
	system("cls");
	printf("Dame un numero para buscar sus multiplos: ");
	scanf("%d",&num);
while(cont<=4)
{
	printf("\n\tDame un numero: ");
	scanf("%d",&numC);

	if (numC%num==0)
	{
		/* code */
		printf("%d es multiplo ",numC);
		cont++;
	}
	
}
printf("\n\n");
system("pause");

	return 0;
}