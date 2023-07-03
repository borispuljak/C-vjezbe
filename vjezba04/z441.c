#define _CRT_SECURE_NO_WARNINGS
// uklju�i biblioteku standardnih funkcija
#include <stdio.h>
// uklju�i biblioteku matemati�kih funkcija
#include <math.h>
// uklju�i biblioteku koja sadr�i definiciju funkcije system()
#include <stdlib.h>

// funkcija za izra�un kvadrata broja
double Kvadrat (double x) {
	return x*x;
}
double kub(double x) {
	return x * x * x;
}

// funkcija za ispis
// argumenti funkcije:
// pFunc - pokaziva� na funkciju koju koristimo (ulazni)
// x - broj na koji primjenjujemo funkciju pFunc
void PrintVal( double (*pFunc)(double), double x) {
	printf( "\nZa x: %lf dobije se %lf\n", x, pFunc(x) );
}

int main() {
	double val=1;
	int choice;
// deklaracija pokaziva�a na funkciju
	double (*pFunc)(double);

	printf("Upisi broj:");
	scanf("%lf", &val);
// odstranjuje visak znakova s standardnog ulaza
	getchar();
	printf( "\n(1)Kvadrat \n(2)Sinus \n(3)Kosinus \n(4)Kub \n");
	printf( "\nOdaberi 1, 2, 3 ili 4\n");
// �ita jedan znak sa tipkovnice
	choice = getchar();

	switch (choice)
	{
// ovisno o izboru postavljam vrijednost pokaziva�a 
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
// ako ni�ta nije izabrano izlazim iz programa
		default: 
			return 0;
	}

// poziv funkcije PrintVal, sa argumentom pokaziva�em na funkciju
	PrintVal (pFunc, val);

	system("pause");

	return(0);
}
