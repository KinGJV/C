#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int num_1;
int num_2;
	printf("elije el primer número:\n");

	scanf(" %i", &num_1);


	printf("elije el segundo número:\n");
	scanf(" %i", &num_2);

	system ("clear");
	printf("%i\n", num_2);
	printf("%i\n", num_1);
	return EXIT_SUCCESS;
}
