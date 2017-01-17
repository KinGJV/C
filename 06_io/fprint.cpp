#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *tubo; //sirve para crear una variable stream o de tubo.

    tubo = fopen("iberos.txt", "a"); //conecta la variable declarada en FILE * en algo. Los modos de lectura son write(w) read(r) append(a).

    printf("hola\n");

    fprintf(stdout, "hola\n");
    fprintf(tubo, "hola\n");

    fclose(tubo);
	return EXIT_SUCCESS;
}
