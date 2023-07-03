#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>


int main() {
	int size;
	scanf("%i", &size);
	int *x, i=0, s=0;

	x = (int *)malloc(size * sizeof(int));

	if (x == NULL) {
		return 1;
	}
	
	while ( i < size ) {
		scanf("%d", &x[i]);	
		s += x[i++];
	}
	printf("Suma je %d\n", s);

	system("pause");

	return(0) ;
}
