#include <stdio.h>
#include <stdlib.h>
int multiplica(int op1, int op2){

    return op1*op2;



}




int main(int argc ,char *argv[]){

    int a,
       	 b;

    printf(" %ix%i=%i", a,b, multiplica(a=getchar()-'0',b=getchar()-'0'));
	return EXIT_SUCCESS;
}
