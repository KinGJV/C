#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){

int i,cant = 10 ;
double n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, media;

    printf("introduce un número:\n");
    scanf(" %lf", &n1);

    printf(" introduce un número:\n");
    scanf(" %lf", &n2);

    printf(" introduce un número:\n");
    scanf(" %lf", &n3);

    printf(" introduce un número:\n");
    scanf(" %lf", &n4);

    printf(" introduce un número:\n");
    scanf(" %lf", &n5);

    printf(" introduce un número:\n");
    scanf(" %lf", &n6);

    printf(" introduce un número:\n");
    scanf(" %lf", &n7);

    printf(" introduce un número:\n");
    scanf(" %lf", &n8);

    printf(" introduce un número:\n");
    scanf(" %lf", &n9);

    printf(" introduce un número:\n");
    scanf(" %lf", &n10);

    media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / cant;

    printf(" la media es: %lf", media);

    return EXIT_SUCCESS;

   }
