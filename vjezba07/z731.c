#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *f;

	char c;
	char str[50];
	printf("Unesite ime datoteke za citanje:\n");
	scanf("%s", &str);

	printf("Otvaram: %s\n", str);
	f = fopen(str, "r");

	c = fgetc(f);
	while (c != EOF)
	{
		printf("%c", c);
		c = fgetc(f);
	}
	

	fclose(f);
	system("pause");

	return(0);
}