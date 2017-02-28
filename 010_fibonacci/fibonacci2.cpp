
#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(int argc ,char *argv[]){

    int hoy, ayer = 1, anteayer = 1;

    printf(" %i %i", anteayer, ayer);

    for(int i = 0; i< N; i++){

    hoy = ayer + anteayer;

    printf(" % i", hoy);

    anteayer = ayer;

    ayer = hoy;
    }

	return EXIT_SUCCESS;
}
