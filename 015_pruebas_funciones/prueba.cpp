
#include <stdio.h>
#include <stdlib.h>

void leer(double &base, double &exponente){

	printf(" Selecciona tu base:\n");

	scanf(" %lf" , &base);

	printf(" selecciona tu exponente:\n");
	scanf(" %lf", &exponente);
}

int main(int argc ,char *argv[]){

double base,exponente;

leer(base,exponente);

printf(" tu base es :%2lf,y tu exponente es: %2lf", base,exponente);


	return EXIT_SUCCESS;
}
