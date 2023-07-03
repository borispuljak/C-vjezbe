// NAPOMENA! Ovaj program ima gresku!
#include <stdio.h>
#include <stdlib.h>

int main() {
	char numbers[6] = {'1', '2', '3', '4', '5', '\0'};
	char alpha[6] = {'a', 'b', 'c', 'd', 'e', '\0'};
	char tabloid[50] = "Playboy";

	printf("%s\n", numbers);
	printf("%s\n", alpha);
	printf("%s\n", tabloid);

	system("pause");

	return(0);
}
