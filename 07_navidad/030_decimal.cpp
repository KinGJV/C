#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int numero, base, i;


    printf("que número quieres convertir:\n");

    scanf(" %i", &numero);

    printf("a que base quieres convertirlo:\n");

    scanf(" %i", &base);
 
    numero = numero + (numero - base);


    printf(" %i", numero);
	return EXIT_SUCCESS;
}
