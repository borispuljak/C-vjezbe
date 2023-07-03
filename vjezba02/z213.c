#include <stdio.h>
#include <stdlib.h>

int main() {
// deklaracija varijabli
	char c;
	unsigned char uc;

// postavljanje vrijednosti varijabli
	c = 127;
	uc = 127;

// inkrement varijabli
	c = c + 1;
	uc = uc + 1;

// ispis vrijednosti nakon inkrementa
	printf( "\nchar          -> 127 + 1 = %d", c);
	printf( "\nunsigned char -> 127 + 1 = %d\n", uc);

	system("pause");
	
	return(0);
}
