#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int n,a;

    printf("selecciona el número que quieras calcular:\n");

    scanf("%i", &n);

   a= n;

   n = n << 8;
   a = a << 6;

   n = a + n;


    printf("%i", n);


	return EXIT_SUCCESS;
}
