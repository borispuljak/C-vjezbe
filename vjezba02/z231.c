#include <stdio.h>
#include <stdlib.h>

// prototip funkcije
int kvadrat(int);   

int main () {
// deklaracija varijable x
	int x;
// poziv funkcije
	x = kvadrat(5);
// ispis vrijednosti varijable x
	printf("%d  ", x);

	system("pause");

	return(0);
}

// funkcija kvadrat
int kvadrat(int y)
{
// pomo�na varijable
	int tmp;
// kvadriranje argumenta	
	tmp = y*y;
// vra�anje vrijednosti	
	return(tmp);
}
