#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

char nombre[100];

    printf("¿como te llamas?:\n");

    gets(nombre);

    printf("tu nombre es %s\n", nombre);
	return EXIT_SUCCESS;
}
