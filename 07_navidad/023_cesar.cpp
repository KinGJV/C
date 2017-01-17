#include <stdio.h>
#include <stdlib.h>

#define MAX 0x10000

char codigo(char letra, int cod){
    char respuesta = letra;

    if (letra >= 'a' && letra <= 'z'){
        respuesta += cod;
        if (respuesta > 'z')
            respuesta -= ('z' - 'a' + 1);

    }

    if (letra >= 'A' && letra <= 'Z'){
        respuesta += cod;
        if (respuesta > 'Z')
            respuesta -= ('Z' - 'A' + 1);
    }

    return respuesta;
}


int main(int argc, char *argv[]){


    int cod = 3;
    char mensaje[MAX];

    printf(" Escribe la palabra que quieras cifrar:");

   gets(mensaje);
    for(char *letra = mensaje ; *letra != '\0'; letra++)
        printf("%c", codigo(*letra, cod) );

    printf("\n");

    return EXIT_SUCCESS;
}

