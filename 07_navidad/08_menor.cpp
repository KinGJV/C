#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int i,cant = 10, num, menor;

    for(i=0; i<cant; i++){
    
    printf("dime un número;");
    scanf("%i", &num);

    if(i == 0){

    menor = num;
    }
    else{
    if(num < menor)
    menor = num;}

    }
    printf("el numero menor es: %i", menor);
	return EXIT_SUCCESS;
}
