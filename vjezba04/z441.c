#define _CRT_SECURE_NO_WARNINGS
// ukljuèi biblioteku standardnih funkcija
#include <stdio.h>
// ukljuèi biblioteku matematièkih funkcija
#include <math.h>
// ukljuèi biblioteku koja sadrži definiciju funkcije system()
#include <stdlib.h>

// funkcija za izraèun kvadrata broja
double Kvadrat (double x) {
	return x*x;
}
double kub(double x) {
	return x * x * x;
}

// funkcija za ispis
// argumenti funkcije:
// pFunc - pokazivaè na funkciju koju koristimo (ulazni)
// x - broj na koji primjenjujemo funkciju pFunc
void PrintVal( double (*pFunc)(double), double x) {
	printf( "\nZa x: %lf dobije se %lf\n", x, pFunc(x) );
}

int main() {
	double val=1;
	int choice;
// deklaracija pokazivaèa na funkciju
	double (*pFunc)(double);

	printf("Upisi broj:");
	scanf("%lf", &val);
// odstranjuje visak znakova s standardnog ulaza
	getchar();
	printf( "\n(1)Kvadrat \n(2)Sinus \n(3)Kosinus \n(4)Kub \n");
	printf( "\nOdaberi 1, 2, 3 ili 4\n");
// èita jedan znak sa tipkovnice
	choice = getchar();

	switch (choice)
	{
// ovisno o izboru postavljam vrijednost pokazivaèa 
//	na funkciju pFunc na jednu od funkcija
		case '1': 
			pFunc = Kvadrat; 
			break;
		case '2': 
			pFunc = sin; 
			break;
		case '3': 
			pFunc = cos; 
			break;
		case '4':
			pFunc = kub;
			break;
// ako ništa nije izabrano izlazim iz programa
		default: 
			return 0;
	}

// poziv funkcije PrintVal, sa argumentom pokazivaèem na funkciju
	PrintVal (pFunc, val);

	system("pause");

	return(0);
}
