
#include <stdio.h>
#include <stdlib.h>
/*
0: mi madre esta contenta
1: mi padre esta contento
2: he recibido la paga
3: tengo novia
4: he ganado la ultima partida
5: tengo sueño
6: he aprobado todo
7: me ha salido el ultimo programa
*/
int main(int argc ,char *argv[]){

    unsigned char estado = 0;
    int indice, mascara;

    do{
    do{
    printf(" qué bit quieres conmutar (0 - 7):\n");
    scanf(" %i", &indice);
    } while ( indice >7);

        if (indice >=0){
        mascara = 1 << indice;
        estado = estado ^ mascara;
	printf(" %u\n", estado);
        }
    } while (indice >=0);





	return EXIT_SUCCESS;
}
