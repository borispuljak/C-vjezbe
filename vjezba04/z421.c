#include <stdio.h>
#include <stdlib.h>

// funkcija s prijenosom argumenta po vrijednosti
void Funkcija(int a, int b) {
	b  = a + 1; 
}

// funkcija s prijenosom argumenta po pokazivaèu
void FunkcijaPokazivac(int c, int* pd) {
	*pd = c + 1; 
}

int main() {
	int i, j;

	i = 0;
	j = 0;
	printf("prije poziva funkcije po vrijednosti: j = %d\n", j);

	Funkcija(i, j);
	printf("nakon poziva funkcije po vrijednosti: j = %d\n\n", j);

	i = 0;
	j = 0;
	printf("prije poziva funkcije s pointerom: j = %d\n", j);

	FunkcijaPokazivac(i, &j);
	printf("nakon poziva funkcije s pointerom: j = %d\n\n", j);

	system("pause");

	return(0);
}