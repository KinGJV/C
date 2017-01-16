#include <stdio.h>
#include <stdlib.h>

int main(){
	int decimal;

	printf("Decimal: ");
	scanf(" %i", &decimal); //& significa la direccion de , el espacio %i significa números y sólo números enteros que entran por el pipe

	// Hacer
	//imprimir decimal % 2
	//decimal = decimal / 2
	// Mientras decimal>0

	do {
		printf("%i", decimal % 2);
		decimal /= 2;
	} while (decimal>0);

printf( "\n");
	return EXIT_SUCCESS;
}
