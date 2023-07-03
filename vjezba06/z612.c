#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct tocka {
	int x;
	int y;
};

struct trokut {
	struct tocka a;
	struct tocka b;
	struct tocka c;
};


int main() {
	struct trokut Tr;

	scanf("%d%d%d%d%d%d", &Tr.a.x, &Tr.a.y, &Tr.b.x, &Tr.b.y, &Tr.c.x, &Tr.c.y);


	system("pause");

	return 0;
}
