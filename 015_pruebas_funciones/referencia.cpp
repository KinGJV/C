
#include <stdio.h>
#include <stdlib.h>

void incrementa( int* a, int numero){


	*a += numero;
}

int main(int argc ,char *argv[]){

	int a = 2,b = 5 ;

	incrementa(&a, 5);
	incrementa(&b, 3);
	incrementa(&a, -2);


	printf(" %i", a);
	return EXIT_SUCCESS;
}
