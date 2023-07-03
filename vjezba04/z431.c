#include <stdio.h>
#include <stdlib.h>

// prototip funkcije kvadrat
int kvadrat(int);   

// glavni program
int main () {
	int x;

	x = kvadrat(5);
	printf("kvadrat broja 5 je %d.\n", x);

	system("pause");

	return(0);
}

// kod funkcije kvadrat
int kvadrat(int y) {
	return(y*y);
}
