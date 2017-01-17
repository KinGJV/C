#include <stdio.h>
#include <stdlib.h>




int main(){

    int dni, pos;
    char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";

    printf("dni: ");
    scanf(" %i", &dni);

    printf("%c\n", letras[dni % 23]);

    return EXIT_SUCCESS;
}
