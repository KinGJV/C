#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX 100
#define N 3
#define CANTIDAD(x) (sizeof( (x) ) / sizeof(char *) - 1)


const char *palabra[] = {
    "amalgama",
    "narcolepsia",
    "alcorque",
    "suricato",
    "amapola",
    "parguela",
    "bonita",
    "shuriken",
    "hermoso",
    "panenteismo",
    "nemesis",
    "anabasis",
    "antítesis",
    "origen",
    "artropodo",
    NULL
};

int main(int argc, char *argv[]){

    const char *elegida;
    char adivinado[MAX], letra;
    int aleatoria;

    srand(time(NULL));
    aleatoria = rand() % CANTIDAD(palabra);
    elegida = palabra[aleatoria];

   bzero(adivinado, MAX);

   for( int i = 0; i<(int) strlen(elegida); i++){

	   adivinado[i] = '-';
   }
   for( int i = 0; i<MAX; i++){
   printf("Selecciona una letra:\n");
   scanf(" %c", &letra);
   
   if(adivinado[i] == letra[i]);

   printf(" %s",adivinado);
   }
  

    printf("\t%s\n", adivinado);
    printf("\t%s\n", elegida);

    return EXIT_SUCCESS;
}
