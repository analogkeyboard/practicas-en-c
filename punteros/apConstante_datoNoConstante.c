#include <stdio.h>

int main(int argc, char const *argv[])
{
	int x; //define x
	int y;  //define y

	/*
	*pointer es un apuntador constante a un entero
	que se puede modificar a travez de pointer,
	pero pointer siempre apunta a la misma
	direccion
	*/

	int * const pointer=&x;

	*pointer=7;

	//pointer = &y;

	return 0;
}