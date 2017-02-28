
#include <stdio.h>
#include <stdlib.h>
int suma(int primero, int segundo){

    int resultado = 0;
    resultado = primero + segundo;

    return resultado;

}
int main(int argc ,char *argv[]){

    int resultado;

    resultado = suma(2,3);

    printf(" %i", resultado);




	return EXIT_SUCCESS;
}
