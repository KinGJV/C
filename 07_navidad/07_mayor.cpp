#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int i,cant = 10, num, mayor;

    for(i=0; i<cant; i++){
    
    printf("dime un número;");
    scanf("%i", &num);

    if(i == 0){

    mayor = num;
    }
    else{
    if(num > mayor)
    mayor = num;}

    }
    printf("el numero mayor es: %i", mayor);
	return EXIT_SUCCESS;
}
