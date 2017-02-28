#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <curses.h>

#define DELTA .1

#define XC 20
#define YC 30
#define XC2 100
#define YC2 30

struct TCoordenada {
    double x;
    double y;
};


int main(int argc, char *argv[]){
    double t =   0.;
    struct TCoordenada a = {  0., -10. },
                       v = { 0. , 0. },
                       s ={ 0. , 0. };
    struct TCoordenada a2 = { 0., -10. },
		       v2 = { 0. , 0. },
		       s2 = { 0. , 0. };

    printf(" dime la velocidad en x del primer tanque:\n");
    scanf(" %lf", &v.x);

    printf(" dime la velocidad en y del primer tanque:\n");
    scanf(" %lf", &v.y);

    printf(" dime la velocidad en x del segundo tanque:\n");
    scanf(" %lf", &v2.x);

    printf(" dime la velocidad en y del segundo tanque:\n");
    scanf(" %lf", &v2.y);

    initscr();
    curs_set(0);


    /* Pasen los años */
    for (t=0.; s.y>=0. || s2.y >=0 ; t+= DELTA){

        /* actualizar la fisica */
        v.y += a.y * DELTA;
        s.y += v.y * DELTA;

        v.x += a.x * DELTA;
        s.x += v.x * DELTA;

	v2.y += a2.y * DELTA;
	s2.y += v2.y * DELTA;

	v2.x += a2.x * DELTA;
	s2.x += v2.x * DELTA;
        /* Representar */
        clear();
	mvprintw( YC-2, XC, "==");
	mvprintw( YC-1, XC, "-------");
	mvprintw( YC, XC, "00000");
	mvprintw( YC2-2, XC2+5, "==");
	mvprintw( YC2-1, XC2, "-------");
	mvprintw( YC2, XC2+2, "00000");
        mvprintw(YC-s.y, XC+s.x, "=>");
	mvprintw(YC2-s2.y,XC2-s2.x, "<=");
        refresh();
        usleep(100000);

    }

    usleep(2000000);
    curs_set(1);
    endwin();

    return EXIT_SUCCESS;
}
