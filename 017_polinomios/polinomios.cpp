#include <stdio.h>
#include <stdlib.h>
#define N 20

double multiplicar(double x){

printf(" selecciona el número en el que quieres multiplicar el polinomio:\n");

scanf(" %lf", &x);

return x;
}



int main(int argc ,char *argv[]){
double x;
int array = 0;
double numeros[N];
//double entrada;
//double poli;
double resultado;
double terminos;



//do{

//	printf(" Selecciona los valores del array:(usa 0 para salir)\n");
//	scanf(" %lf", &entrada);
//	numeros = (double*) realloc ( numeros, ++array * sizeof(double));
//	numeros[array] = entrada;

//}
//while(entrada != 0);

printf("selecciona el número de términos\n:");

scanf(" %lf", &terminos);
multiplicar(x);
for(int i = 0; i < terminos; i++){

scanf(" %lf", &numeros[i]);

}

for(int i = 0; i< terminos; i++){

resultado += numeros[i] * x;

}



printf(" %lf", resultado);


return EXIT_SUCCESS;
}
