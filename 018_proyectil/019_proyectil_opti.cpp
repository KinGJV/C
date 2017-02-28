#include <stdio.h>
#include <stdlib.h>


#define DELTA .1

struct TCoordenada{

    double x;
    double y;


};

struct TFisica{

    struct TCoordenada r;
    struct TCoordenada v;
    struct TCoordenada a;
};

struct TNave{

    double vida;
    int ammo;
    struct TFisica fisica;


};

int main(int argc ,char *argv[]){

    double t = 0.;
    struct TCoordenada a = { 0., -10.},
	               v = {20.,  40.},
	               s = { 0.,  0. };

    for(t = 0; s.y>=0; t+= DELTA){

    printf(" t[%.2lfs] =>"
	     "v: (%.2lf, %.2lf)m/s =>"
	     "s: (%.2lf, %.2lf)m\n", t, v.x, v.y, s.x, s.y);

    v.y += a.y * DELTA;
    s.y += v.y * DELTA;

    v.x += a.x * DELTA;
    s.x += v.x * DELTA;

    }

	return EXIT_SUCCESS;
}

