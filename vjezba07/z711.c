#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// prototipovi funkcija
int potencija(int, int);
int potencijaR(int, int);

int main() {
	int p;		// deklaracija potencije
	int b;		// deklaracija baze
    
	printf("Upisite bazu:\n");
	scanf("%d", &b);
	printf("Upisite potenciju:\n");
	scanf("%d", &p);
    	
// poziv funkcije s petljom
	printf("%d na %d iznosi %d\n", b, p, potencija(b,p));

// poziv rekurzivne funkcije
	printf("%d na %d iznosi %d\n", b, p, potencijaR(b,p));

	system("pause");

	return(0);
}

// kod funkcije s petljom
int potencija(int b, int p) {
	int i, r;

	r = b;		// inicijaliziram vrijednost rezultata na vrijednost baze

	for( i = 0 ; i < p-1 ; i++ ) { // p-1 puta potenciram bazu
		r = r * b;
	}

	return(r);
}

// kod rekurzine funkcije
int potencijaR(int b, int p) {

// granièni uvjet
	if( p == 0 ) {
// završetak rekurzije
		return (1);		
	} else {
// rekurzivni poziv
		return( b * potencijaR(b,p-1) );		
	}
}