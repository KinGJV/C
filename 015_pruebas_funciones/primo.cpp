
#include <stdio.h>
#include <stdlib.h>

bool es_primo( int n){

	for(int i = 2; i< n; i++){

	if(n%i == 0)
	   return 0;
	}
return true;
}

int main(int argc ,char *argv[]){

int n;
	printf(" dime un número:\n");
	scanf(" %i", &n);


	printf(" %i, %s primo.\n", n,es_primo(n)? "es ": "no es ");


	return EXIT_SUCCESS;
}
