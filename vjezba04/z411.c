#include <stdio.h>
#include <stdlib.h>

int main() {
	int i;
	int* pi;

	i = 0;
	pi = &i;
	++(*pi);
	printf("%d\n", *pi);

	system("pause");

	return 0;
}