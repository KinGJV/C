#include <stdio.h>
#include <stdlib.h>

int main(int argc ,char *argv[]){
int n = 50;
char a[50][100];

for (int i = 0 ;i < n; i++){

	fgets(a[i], 99, stdin);
}

	return EXIT_SUCCESS;
}
