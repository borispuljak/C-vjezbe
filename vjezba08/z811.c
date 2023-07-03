// definiraj velièinu niza
#define SIZE 50000


// ukljuèi potrebne biblioteke
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

// prototipovi funkcija
void swap(int *a, int *b);
void selectionSort(int A[], int n);
int podijeli(int *A, int d, int g);
void quickSort(int *A, int d, int g);

int A[SIZE];	// deklaracija globalnog niza A

// glavni program
int main() {
	double start, stop, ukupno;		// varijable kojima mjerim vrijeme
	double n=0;
	int i, j;

// poništavam ukupno vrijeme
	ukupno = 0;								
// petlja sa sortiranjem se ponavlja 10 puta
	for( i=0 ; i<10 ; i++ ) {				
// postavljam vrijednosti èlanova niza na sluèajne vrijednosti
		for( j=0 ; j<SIZE ; j++ )			
			A[j] = rand();					
// bilježim poèetno vrijeme
		start = (double)clock()/CLOCKS_PER_SEC; 
// pozivam funkciju za selekcijsko sortiranje
		selectionSort( A, SIZE - 1 );				
// bilježim vrijeme završetka sortiranja
		stop = (double)clock()/CLOCKS_PER_SEC;	
// raèunam vrijeme potrošeno za sortiranje
		ukupno+=(stop-start);					
	}
	printf("SelectionSort se izvrsava %g sekundi\n" , (ukupno) );

// poništavam ukupno vrijeme
	ukupno = 0;								
// petlja sa sortiranjem se ponavlja 10 puta
	for( i=0 ; i<10 ; i++ ) {				
// postavljam vrijednosti èlanova niza na sluèajne vrijednosti
		for( j=0 ; j<SIZE ; j++ )			
			A[j] = rand();					
// bilježim poèetno vrijeme
		start =(double)clock()/CLOCKS_PER_SEC;  
// pozivam quicksort funkciju
		quickSort( A, 0, SIZE - 1 );				
// bilježim vrijeme završetka sortiranja
		stop=(double)clock()/CLOCKS_PER_SEC;	
// raèunam vrijeme potrošeno za sortiranje
		ukupno+=(stop-start);					
	}

	printf("QuickSort se izvrsava %g sekundi\n" , (ukupno) );

	system("pause");

	return(0);
}

// funkcija koja sortira niz A[] sa n znakova, putem selection sort algoritma
void selectionSort(int A[], int n) {
	int i, j;		// brojaèi
	int imin;		// indeks najmanjeg elementa u A[i..n-1]

	for (i = 0; i < n-1; i++) {
// odredi najmanji element u A[i..n-1]

		imin = i;					// pretpostavi da je A[i] najmanji element
		for (j = i+1; j < n; j++)
			if (A[j] < A[imin])		// ako je A[j] manji od dosad najmanjeg
				imin = j;			// zapamti njegov indeks

// Sada je A[imin] najmanji element od A[i..n-1], pa njega zamjenjujemo sa A[i]
		swap(&A[i], &A[imin]);
	}
}

// funkcija zamjenjuje vrijednosti varijabli a i b
//	koristi se za selection sort i quick sort
void swap(int* a, int* b) {
	int t = *a;
	*a = *b;
	*b = t;
}

// funkcija koja sortira niz A[d..g], rekurzivno sa quick sort algoritmom
void quickSort(int *A, int d, int g)
{
	if (d < g) // završava kada podniz ima manje od 2 elementa
	{
// poziv funkcije podjeli 
		int p = podijeli(A, d, g); // p se postavlja na indeks podjele
// rekurzivni poziv funkcije quickSort za sortiranje podniza A[d..p]
		quickSort(A, d, p);
// rekurzivni poziv funkcije quickSort za sortiranje podniza A[p+1..g]
		quickSort(A, p+1, g);
	}
}

// funkcija podjeli koja se koristi u funkciji quickSort
//	prima niz A[d..g], te donji indeks niza d i gornji indeks niza g
//  vraæa indeks niza kojim primljeni niz dijeli u dva podniza i to 
//  takav da je su u prvom dijelu niza elementi manji od vrijednosti pivota
//  a u drugom dijelu niza elementi veæi od vrijednosti pivota
int podijeli(int *A, int d, int g)
{
	int i = d - 1;		// index lijeve strane A[d..g]
	int j = g + 1;		// index desne strane A[d..g] 
	int pivot = A[d];	// izbor pivot-a

	while (1) {
// Nadji sljedeæi manji indeks j za koji je A[j] <= pivot
	while (A[--j] > pivot)
	{}
// Nadji sljedeæi veæi indeks i za koji je A[i] >= pivot
	while (A[++i] < pivot)
	{}
// Ako je i >= j, raspored je OK
	if (i < j)
		swap(&A[i], &A[j]);
// inaèe, zamijeni A[i] sa A[j] i nastavi
	else
		return(j);
	}
}
