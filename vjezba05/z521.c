#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// uklju�i biblioteku u kojoj se nalaze funkcije za 
//	dinami�ku alokaciju memorije
#include <stdlib.h>

int main( void ) {
	int* pa ; /* pokaziva� na niz cijelih brojeva */
	long maxsize = 5; /* po�etna maksimalna veli�ina niza */
	int i,data;

// alokacija memorije, te pridru�ivanje pokaziva�a na alociranu memoriju
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
// i-tom �lanu dinami�ki alociranog niza pristupa se isto
//	kao i stati�ki alociranom nizu
		pa[i] = data; 
	}

// ispis podataka iz dinami�ki alociranog niza
	for(i = 0; i < maxsize; i ++ )
		printf("%d \n", pa[i]);

// osloba�anje dinami�ki alociranog niza
//	odnosno vra�anje memorije na heap koriste�i free()
	free( pa ) ;

	system("pause");

	return(0) ;
}
