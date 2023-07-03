#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
// deklaracija dvaju stringova
	char string_A[128] = "Alo";
	char string_B[20] = "Zvjezdane staze";

	printf("string_A: %s\n", string_A);
	printf("string_B: %s\n", string_B);

// kopiraj string_A u string_B

	printf("\nNakon strcpy:\n");
	printf("string_A: %s\n", string_A);
	printf("string_B: %s\n", string_B);

	system("pause");

	return(0);
}