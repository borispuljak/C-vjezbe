/* Primjer definiraja strukture i koristenja */
/* strukture kao argumenta funkcije */
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"



void display( struct student st );

int main() {
	struct student student1;

	strcpy( student1.ime, "Marko Matic" );
	student1.ocjena = 4;
	display( student1 );

	system("pause");

	return 0;
}

