#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc ,char *argv[]){

long decimal, decimaltemp;

char binario [65];

int indice = 0, resultado = 0, bit = 1, binarioint;

binarioint = atoi(binario);


    printf("Selecciona el número que quieras:\n");

    scanf(" %ld", &decimal);

    // printf("Selecciona la posición del bit que quieres apagar:\n");

    //scanf(" %i", &bit);

    decimaltemp = decimal;

    while(decimaltemp !=0){

    binario[indice] = (decimaltemp % 2) + '0';

    decimaltemp /=2;

    indice++;
    }
    binario[indice] = '\0';

    resultado = binarioint && bit;

    printf("su número es: %i\n", binarioint);
	return EXIT_SUCCESS;
}
