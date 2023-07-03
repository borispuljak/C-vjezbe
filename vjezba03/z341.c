#include <stdio.h>
#include <stdlib.h>

// kod funkcije f sa argumentom - varijablom tipa int, imena a
void f( int a ) {
	printf("nakon ulaska u funkciju:\n\t a = %d\n", a);

	a++;

	printf("u funkciji, nakon povecanja:\n\t a = %d\n", a);
}

int main() {
// deklaracija lokalne varijable a funkcije main
  int a = 1;

  printf("u glavnom programu, prije poziva funkcije:\n\t a = %d\n", a);

// poziv funkcije
  f( a );

  printf("u glavnom programu, nakon povratka iz funkcije:\n\t a = %d\n", a);

  system("pause");

  return(0);
}
