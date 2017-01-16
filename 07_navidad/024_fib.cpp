#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int fibo[20];
int i, n = 20;

    fibo[0] = 1;

    fibo[1] = 1;


    printf("\n\n Número de fibonacci\n\n");

    for(i = 2; i< n; i++)
	    
	    fibo[i] = fibo[i-1] + fibo[i-2];

    for(i = 0; i < n; i++)
	    printf("%3i %6i\n", i, fibo[i]);

	return EXIT_SUCCESS;
}
