#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#define MAXERRORES 6

const char *lista[] = {
    "hidroavion",
    "grefusa",
    NULL

};
const char *elegir(){

    int n_palabras;
    int aleatorio;

    for(n_palabras = 0; lista[n_palabras] != NULL; n_palabras++);
    aleatorio = aleatorio % n_palabras;

    return lista[aleatorio];
}

char usuario(){

    char car;

    printf(" elije una letra:\n");
    scanf(" %c", &car);

    return tolower(car);
}

bool distinta(const char* palabra1, const char* palabra2){

    return !!strcmp(palabra1, palabra2);
}
void titulo(){

    system("clear");
    system("toilet -fpagga AHORCADO");
    printf("\n");

}
void muestra(const char* frase){
    char imprimir[100];

    sprintf(imprimir," toilet -fpagga \" %s\"", frase);
    titulo();
    system(imprimir);


}
int main(int argc ,char *argv[]){

    int vidas = MAXERRORES;

    const char* palabra = elegir();
    int longitud = strlen(palabra);
    srand(time(NULL));

    char* adivinando = (char*) malloc(longitud + 1);


    memset(adivinando, '-', longitud);

    adivinando[longitud] = '\0';
    do{
    char letra = usuario();


    for(int n= 0;palabra[n] != '\0' ;n++)
    if(letra == palabra[n])
        adivinando[n] = letra;
    muestra(adivinando);
    }while(distinta(palabra, adivinando) && vidas);

    free(adivinando);

    return EXIT_SUCCESS;

}
/*
 *    AHORCADO
*/

/*****************************************************************
 * INSTRUCCIONES
******************************************************************

1- ELEGIR UNA PALABRA
2- PONER UNA CELDA VACÍA POR CADA LETRA
3- PREGUNTAR UNA LETRA AL USUARIO
4- COMPARAR LA LETRA DEL USUARIO CON LA N LETRA DE LA PALABRA DE REFERENCIA Y SI SON IGUALES LO PONES EN LA CELDA N DE LA BUSCADA
5-n++ => paso 4( hasta última letra)
6 => paso 3 hasta que la palabra esté adivinada o se llegue al tope de fallos*/
