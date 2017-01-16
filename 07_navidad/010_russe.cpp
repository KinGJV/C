#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

    int num_1, num_2, resultado = 0;

    printf("escribe el primer número\n");
    scanf(" %i", &num_1);

    printf("escribe el segundo número\n");
    scanf(" %i", &num_2);

    while(num_1 >= 1){
    if(num_1 % 2 != 0)
	    resultado += num_2;
    num_1 = num_1 / 2;
    num_2 = num_2 * 2;
    }

    printf(" el resultado es %i", resultado);
	return EXIT_SUCCESS;
}
