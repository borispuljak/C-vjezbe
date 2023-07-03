#include <stdio.h>
#include <stdlib.h>

int main() {
// deklaracija varijable izbora
  	char ch;

// ispis pitanja
  	printf(" Predsjednik SAD je:\n");
  	printf(" (1) Barack Obama\n (2) Bill Gates\n (3) Bill Third\n");
  	printf("\nOtipkaj broj.\n");

// èitanje jednog znaka sa tipkovnice
	ch=getchar();

// if grananje
  	if      (ch =='1') printf ("Tocno!\n");
  	else if (ch =='2') printf ("Nije tocno!\n");
  	else if (ch =='3') printf ("Nije tocno!\n");
  	else    printf("Otipkali ste pogresan broj!");

	system("pause");

  	return(0);
}  
