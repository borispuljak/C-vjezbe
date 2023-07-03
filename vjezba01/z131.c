#include <stdio.h>

// funkcija kvadrat ra�una i vra�a kvadrat vrijednosti
// argumenta funX
double kvadrat( double funX ) {
	double funX2;

	funX2 = funX * funX;

	return funX2;
}

void main()
{
// deklaracija lokalnih varijabli
	double x;
	double x2;
	double x4;
	
// postavljanje vrijednosti varijable x
	x = 5.5;

// postavlja vrijednost x2 na kvadrat x 
// prvi poziv funkcije za ra�unanje kvadrata
	x2 = kvadrat( x );

// postavlja vrijednost x4 na kvadrat x2
	x4 = kvadrat( x2 );
}
