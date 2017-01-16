#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

double a, b,resultado;

    printf("selecciona el número que quieres:\n");

    scanf(" %lf", &a);

    printf("selecciona el bit que quieres apagar:\n");

    scanf(" %lf", &b);

    resultado = a || !b;

    printf(" %lf", resultado);
	return EXIT_SUCCESS;
}
