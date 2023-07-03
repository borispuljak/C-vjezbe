#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ukljuèi biblioteku u kojoj se nalaze funkcije za 
//	dinamièku alokaciju memorije
#include <stdlib.h>

int main( void ) {
	int* pa ; /* pokazivaè na niz cijelih brojeva */
	long maxsize = 5; /* poèetna maksimalna velièina niza */
	int i,data;

// alokacija memorije, te pridruživanje pokazivaèa na alociranu memoriju
	pa = (int *) malloc(maxsize * sizeof( int ));

// provjera je li alokacija uspjela
	if(pa == NULL )	{
		printf("Nema slobodne memorije za malloc.\n");
		return(1);
	}

// upisivanje brojeva u niz
	printf("Upisite pet proizvoljnih brojeva:\n");
	for( i = 0; i < maxsize ; i++) 	{
		scanf("%d", &data);
// i-tom èlanu dinamièki alociranog niza pristupa se isto
//	kao i statièki alociranom nizu
		pa[i] = data; 
	}

// ispis podataka iz dinamièki alociranog niza
	for(i = 0; i < maxsize; i ++ )
		printf("%d \n", pa[i]);

// oslobaðanje dinamièki alociranog niza
//	odnosno vraæanje memorije na heap koristeæi free()
	free( pa ) ;

	system("pause");

	return(0) ;
}
