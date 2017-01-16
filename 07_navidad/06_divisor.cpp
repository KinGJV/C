#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int numero,i;

	printf("elije el número que quieres comprobar:\n");
	scanf(" %i", &numero);


	for(i=1;i<=numero;i++){

		if(numero % i == 0){
		printf("%i, es divisor de %i \n", i, numero);
		}
	}
	if( numero % i != 0)
		printf(" no tiene divisores\n");
	return EXIT_SUCCESS;
}
