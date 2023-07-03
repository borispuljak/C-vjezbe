#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// direktiva define koja tekst NOVALINIJA u kodu
//	mijenja sa tekstom printf("\n")
#define NOVALINIJA printf("\n");

int main() {
	double o, p;
	int r;

	printf("Upisite radijus kruga:");
	NOVALINIJA

	scanf("%d", &r);

	o = 2 * r * 3.14159265;
	p = r * r * 3.14159265;

	printf("Opseg kruga iznosi    : %f", o);
	NOVALINIJA

	printf("Povrsina kruga iznosi : %f", p);
	NOVALINIJA

	system("pause");

	return(0);
}