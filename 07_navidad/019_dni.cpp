#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

char dni[10];

     int dni_ent;

     sscanf("03206488n", " %s", dni);
     dni_ent = atoi(dni);

     printf(" %i\n", dni_ent);
	return EXIT_SUCCESS;
}
