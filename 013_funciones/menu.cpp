
#include <stdio.h>
#include <stdlib.h>

char menu(){
char num;
	printf(" selecciona la opción que quieras del 1 al 5:\n");

	scanf(" %c", &num);

	return num;

}
int main(int argc ,char *argv[]){


	char opcion = menu();

	printf(" tu opcion es %c", opcion);

	return EXIT_SUCCESS;
}
