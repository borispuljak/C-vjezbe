#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// uklju�i biblioteku funkcija za rad sa stringovima
#include <string.h>

#include <stdlib.h>

// struktura student
struct student {
	char ime[30];
	int ocjena;
};

// prototip funkcije za ispis studenta
void display( struct student st );

int main() {
// deklaracija varijable student1 tipa strukture student
	struct student studenti[10];

	for (int i = 0; i < 10; i++) {
		scanf("%s", &studenti[i].ime);
	}
// postavi ocjenu studenta1 na 4
	printf("Unesite ocjene:");
	for (int i = 0; i < 10; i++) {
		studenti[i].ocjena = scanf("%i", &studenti[i].ocjena);
	}
// ispi�i studenta1
	for (int i = 0; i < 10; i++) {
		display(studenti[i]);
	}
	system("pause");

	return 0;
}

// kod funkcije za ispis studenta
void display(struct student st) {
	printf( "Ime: %s ", st.ime );
	printf( "\tocjena: %d\n", st.ocjena );
}