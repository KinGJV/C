#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

char cadena[100];

int apoyo = 0;

    printf("Escribe una cadena de carcteres:\n");

    scanf(" %s", cadena);

    apoyo = sizeof(cadena);

    for( int i= 0; i< apoyo; i++)
	    printf(" %c\r", cadena[i]);
	return EXIT_SUCCESS;
}
