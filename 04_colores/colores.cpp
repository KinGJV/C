#include <stdio.h>
#include <stdlib.h>
#define no 0
#define si 1


int  main(){

int color_1, color_2, color_3;

	system("clear");

	printf("¿Hay amarillo?\n"
	"0.no\n"
	"1.si\n");
	scanf(" %i", &color_1);

	system("clear");

	printf("¿Hay azul?\n"
	"0.no\n"
	"1.si\n");
	scanf(" %i", &color_2);

	system("clear");

	printf("¿Hay rojo?\n"
	"0.no\n"
	"1.si\n");
	scanf(" %i", &color_3);

	system("clear");

	if(color_1 == si and color_2 == si and color_3 == si)

		printf("tu color es el negro\n");

	if(color_1 == si and color_2 == no and color_3 == no)

		printf("tu color es el amarillo\n");

	if(color_1 == no and color_2 == si and color_3 == no)

		printf("tu color es el azul\n");

	if(color_1 == no and color_2 == no and color_3 == si)

		printf("tu color es el rojo\n");

	if(color_1 == no and color_2 == si and color_3 == si)

		printf("tu color es el morado\n");

	if( color_1 == si and color_2 == si and color_3 == no)

		printf("tu color es el verde\n");

	if( color_1 == si and color_2 == no and color_3 ==si)

		printf("tu color es el naranja\n");

<<<<<<< HEAD
	if( color_1 == no and color_2 == no and color_3 == no)
=======
	if(color_1 == no and color_2 == no and color_3 == no)
		
>>>>>>> 05f490e1a9b3c4a1c189906a187c845f674ed3cb
		printf("tu color es el blanco\n");
return EXIT_SUCCESS;
}
