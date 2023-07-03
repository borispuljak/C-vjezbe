#include <stdio.h>
#include <stdlib.h>

// deklaracija globalne varijable
int a;

void f() {
// deklaracija i inicijalizacija lokalne varijable funkcije f()
	int a = 0;

	a++;
	printf("u funkciji:\n\t a = %d\n", a);
}

int main() {
// inicijalizacija globalne varijable a
	a = 10;
	printf( "u glavnom programu:\n\t a = %d\n", a);

	f();
	printf( "u glavnom programu:\n\t a = %d\n", a);
	
	f();
	printf( "u glavnom programu:\n\t a = %d\n", a);

	system("pause");

	return(0);
}