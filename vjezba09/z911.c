#include <stdio.h>
#include <stdlib.h>

// deklaracija jednog �vora liste
struct node {
	int elem;
	struct node* next;
};

// stvaram novi tip imena list
typedef struct node* list;

list CreateList( int el ) {
	struct node* p;

// alociram memoriju za prvi �vor liste
	p = (struct node*)malloc( sizeof( struct node ) );
// postavljam vrijednost prvog �vora
	p->elem = el;
// postavljam vrijednost pokaziva�a na slijede�i �vor na 
//  NULL pokaziva�, jer je ovo posljednji �vor
	p->next = NULL;

	return p;
}

void PushBack( list lst, int el ) {
	struct node* nd;
	struct node* p;

// alociram memoriju za novi �vor liste
	p = (struct node*)malloc( sizeof( struct node ) );
// postavljam vrijednost novog �vora
	p->elem = el;
// postavljam vrijednost pokaziva�a na slijede�i �vor na 
//  NULL pokaziva�, jer je ovo posljednji �vor
	p->next = NULL;
// �etam od po�etka do kraja liste
	nd = lst;
	while( nd->next != NULL ) {
		nd = nd->next;
	}
// dodajem novi �vor na kraj liste
	nd->next = p;
}

void PrintList(list lst) {
	while (lst != NULL) {
		printf("%d\n", lst->elem);
		lst = lst->next;
	}
}

void PushFront(list* lst, int el) {
	struct node *n;
	n = (struct node*)malloc(sizeof(struct node));
	n->elem = el;
	n->next = *lst;

	lst = &n;
}

void DeleteList(list lst) {
	struct node* temp;
	while (lst->next != NULL) {
		temp = lst;
		lst = lst->next;
		free(temp);
	}
}

int main(void) {	
// stvaram listu sa prvim �vorom
	list L = CreateList(14);
// dodajem ostale �vorove na kraj liste
	PushBack( L, 28 );
	PushBack( L, 12 );
	PushBack( L, 19 );

	PrintList(L);

	printf("------------\n");

	PushFront(L, 11);
	PrintList(L);

	system("pause");

	return 0;
}
