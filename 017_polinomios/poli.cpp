
#include <stdio.h>
#include <stdlib.h>

#define N 20
double potencia( double x, double terminos){

    double auxiliar = x;

    for(int i = 0; i<terminos - 1;i ++)
	auxiliar *=x;

    return auxiliar;
}

int main(int argc ,char *argv[]){

    int exponente;
    double array[N];
    double x;
    double terminos;
    double resultado = 0;

    printf(" selecciona el número que quieres multiplicar:\n");
    scanf(" %lf", &x);
    printf(" selecciona el número de términos:\n");
    scanf(" %lf", &terminos);


    for(int i = 0; i< terminos; i++){


    scanf(" %lf", &array[i]);

    }


    for(int i = 0;i<=terminos; i++){
	if(i == terminos -1)
	    resultado += array[i];

	else
	    if(i == terminos - 2)
		resultado += array[i] *x;
	    else
		resultado += array[i] *potencia(x,terminos -1);


    }

	printf("%lf", resultado);

	return EXIT_SUCCESS;
}
