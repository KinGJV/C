

#include <stdio.h>
#include <stdlib.h>

bool es_perf( int n){
int suma= 0;
	for(int i = 1; i< n; i++){

	if(n%i == 0)
	suma += i;


	if(suma == n)
	return 1;
	}
	return 0;
}
int main(int argc ,char *argv[]){

 int n;
	printf(" dime un número:\n");
	scanf(" %i", &n);


	printf(" %i, %s perfecto.\n", n,es_perf(n)? "es ": "no es ");


	return EXIT_SUCCESS;
}
