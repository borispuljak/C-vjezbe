#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
// deklaracija varijable u koju se upisuje binarni broj
  	unsigned int broj;

	printf(" Upisite jednoznamenkasti binarni broj:\n");
// èitanje jednog broja sa tipkovnice u varijablu broj
	scanf("%d", &broj);

// switch case grananje
	switch (broj) {
		case 0 : printf("\nUpisali ste binarni broj 0!\n");
				 break;

		case 1 : printf("\nUpisali ste binarni broj 1!\n");
				 break;

		default : printf("\nPogresan upis!\n");
	}

	system("pause");

  	return 0;
}  
