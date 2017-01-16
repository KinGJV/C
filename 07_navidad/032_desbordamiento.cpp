#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

char nombre [15];


    printf("escribe tu nombre y apellidos:\n");

    fgets(nombre, 15 , stdin);

    printf(" %s", nombre);
	return EXIT_SUCCESS;
}
