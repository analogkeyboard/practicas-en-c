#include <stdio.h>

void f(const int *);
int main(int argc, char const *argv[])
{	
	int y;
	f(&y);
	
	return 0;
}

void f(const int *pointerX){
	*pointerX=100;
}