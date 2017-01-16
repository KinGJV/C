#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int n,i;

double comp, comp2,resultado, escalar;



    printf("Cuantas dimensiones tiene el vector(Máximo 100:)\n");

    scanf(" %i", &n);

    for(i = 0; i < n; i++){

	    printf("selecciona un número del vector:\n");
    	    scanf(" %lf", &comp);
	    printf(" selecciona un número del otro vector:\n");
	    scanf(" %lf", &comp2);

	    resultado += comp * comp2;
}
   printf("el producto escalar de dos vectores de %i dimensiones es: %lf\n",i, resultado);
	return EXIT_SUCCESS;
}
