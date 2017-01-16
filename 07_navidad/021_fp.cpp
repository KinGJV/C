#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int clase, fil, colum;

    printf("Selecciona el número de clase\n");

    scanf(" %i", &clase);

    if(clase > 170)

    printf("selecciona un número entre 0 y 170");

    if(clase / 17 <= 1)
	    fil = 1;

    if(clase == 170)
	    fil = 10;
    else
	    fil= (clase / 17) + 1;
    if(clase %17 == 0)
	    colum = 17;

    else
	    colum = clase % 17;

    printf("la fila es %i y la columna %i", fil, colum);



	return EXIT_SUCCESS;
}
