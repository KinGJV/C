#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int num;

    printf(" selecciona el número:\n");

    scanf(" %i", &num);
    printf(" El número invertido es:\n");
    do{
    	printf(" %i", num % 10);
	num /= 10;
    }while(num != 0);

	return EXIT_SUCCESS;
}
