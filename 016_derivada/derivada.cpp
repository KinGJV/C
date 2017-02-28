
#include <stdio.h>
#include <stdlib.h>

#define INC 0.00001

double x_cuand(double x){

return x * x;
}

double derivada(double x ){
	return ((x_cuand(x +INC) - x_cuand(x))/INC); }

int main(int argc ,char *argv[]){
double x;

printf("elije tu primer número:\n");

scanf(" %lf", &x);


printf(" %lf", derivada(x));

	return EXIT_SUCCESS;
}
