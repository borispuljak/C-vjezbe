#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// funkcija odreðuje maksimalni element niza
// argumenti funkcije su:
// niz – niz realnih brojeva (ulazni argument)
// nelem – broj elemenata u nizu (ulazni argument)
// pMax - pokazivac na maksimalnu vrijednost (izlazni argument)
void getMax(double niz[], int nelem, double* pMax) {
// deklaracija brojaèa
	int i = 0;

// postavljam maksimalnu vrijednost na prvi èlan niza
	*pMax = niz[0];
// šetam po nizu pomoæu for petlje
	for(i=1; i < nelem; i++) {
// ako je i-ti èlan niza veæi od trenutne maksimalne vrijednosti
		if( niz[i] > *pMax )
// postavi da je trenutna maksimalna vrijednost jednaka i-tom elementu niza
			*pMax = niz[i];
	}
}

int main() {
	int i;
	double max, data[5];

// sa tastature proèitaj 5 realnih brojeva putem for petlje
	printf("Otkucaj %d realnih brojeva:\n", 5);
	for (i=0; i<5; i++)
		scanf("%lg", &data[i]);

// poziv funkcije za treaženje maksimalne vrijednosti niza
	getMax(data, 5, &max);
// ispisi maksimalnu 
	printf ("max = %lf\n", max);

	system("pause");

	return(0);
}