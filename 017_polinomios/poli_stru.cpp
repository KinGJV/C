
#include <stdio.h>
#include <stdlib.h>

#define N 20

struct TPolinomio{
    double coeficiente[N];
    int grado;

};

int main(int argc ,char *argv[]){

    struct TPolinomio polinomio;
    double x;
    double potencia = 1;
    double resultado = 0;


    printf(" indica el grado :\n");
    scanf(" %i", &polinomio.grado);

    printf(" indica los coeficientes:\n");
    for(int i = 0; i<polinomio.grado;i++){  

    scanf(" %lf", &polinomio.coeficiente[i]);

    }

    printf(" dime el valor de x:\n");
    scanf(" %lf", &x);
    for(int i = 0; i<polinomio.grado;i++,potencia*=x){
    
    resultado += polinomio.coeficiente[i] * potencia;
    }
    printf(" tu resultado es %lf", resultado);
	return EXIT_SUCCESS;
}
