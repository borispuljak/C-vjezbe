#include <stdio.h>
#include <stdlib.h>

// deklaracija jednog èvora liste
struct node {
	int elem;
	struct node* next;
};

int main(void) {	
	struct node* n;

// deklariram èetiri èvora 
	struct node* n0 = malloc(sizeof(struct node));
	struct node* n1 = malloc(sizeof(struct node));
	struct node* n2 = malloc(sizeof(struct node));
	struct node* n3 = malloc(sizeof(struct node));

// upisujem podatke u èvorove
	n0->elem = 14;
	n1->elem = 28;
	n2->elem = 12;
	n3->elem = 19;

// povezijem èvorove u listu
	n0->next = n1;
	n1->next = n2;
	n2->next = n3;
	n3->next = NULL;

// ispisujem sadržaj liste petljom 
//	pomoæu pokazivaèa na èvor
	n = n0;
	while( n != NULL ) {
		printf( "%d\n", n->elem );
		n = n->next;
	}

	system("pause");
     
	return 0;
}



