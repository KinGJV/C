#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

    int num, i, suma = 0;

    printf("escriba un número:\n");
    scanf(" %i", &num);

    for(i = 1; i < num; i++){

	    if(num % i == 0)
	    suma = suma + i;
    }
    if (suma==num)
	    printf("es perfecto");
    else
	    printf("no es perfecto");

	return EXIT_SUCCESS;
}
