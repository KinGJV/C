#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int numero, encender = 0 , i = 7, binario[7] = {00000000};

    printf("Escribe un número:\n");

    scanf(" %i", &numero);


    do{
    binario[i] = numero %2;

    numero /= 2;

    i--;
    }while(numero > 0);

    for(int a = 0; a < 8; a++){
	    printf(" %i", binario[a]);
    }

    printf("Di el bit que quieres encender\n:");

    scanf(" %i", &encender);

    binario[encender] = 1;

    for(int x = 0; x < 8; x++){
	    printf(" %i", binario[x]);
    }
	return EXIT_SUCCESS;
}
