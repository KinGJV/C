#include <stdio.h>
#include <stdlib.h>

#define x 0
#define y 1
#define INC 0.1
#define g -10

int main(int argc ,char *argv[]){

    double v[2];
    double z;

    printf("indica el valor de vx:\n");

    scanf(" %lf", &v[x]);

    printf(" indica el valor de vy:\n");

    scanf(" %lf", &v[y]);

    

    for( double i = v[y] ; i > 0 ;i--){

	i = v[y];

    v[y] = v[y]+(INC)*g;

    z += v[x]* v[y];

    
    printf(" %lf", v[x]);
    printf(" %lf", v[y]);
    printf(" %lf\n", z);
    }


	//s(3.01) = v(3)*i + S(2.99)

	return EXIT_SUCCESS;
}
