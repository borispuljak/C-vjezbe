#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// prototip funkcije
int faktorijel(int f);
int faktorijelR(int f);

int main() {
	int f;			// broj za koji se raèuna faktorijel
	int i;			// brojaè
    
	printf("Upisite broj za koji zelite izracunati faktorijel:\n");
	scanf("%d", &f);

// poziv funkcije
	printf("Faktorijel iznosi: %d\n", faktorijelR(f));

	system("pause");

	return(0);
}

// kod funkcije
int faktorijel(int f) {
	int i, temp;

	temp = 1;		// inicijaliziram vrijednost faktorijela

	for( i = 1 ; i <= f ; i++ ) // mnozenje faktorijela
		temp *= i;

	return(temp);
}

int faktorijelR(int f)
{
	if (f == 0) {
		return 1;
	}
	else {
		return(f*faktorijel(f - 1));
	}
}

