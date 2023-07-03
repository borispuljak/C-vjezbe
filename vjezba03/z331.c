#include <stdio.h>
#include <stdlib.h> 

int main() {
// deklaracija polja A i varijable i
	int A[10];
	int i;

// for petlja sa inicijalizacijom èlanova polja
	for (i = 0; i<10; i++)
		A[i] = 2 * i;

// ispis vrijednosti iz polja A
	for( i=0; i<10 ; i++ ) 
		printf( "A[%d]= %d\n", i, A[i]);

	system("pause");

	return(0);
}
