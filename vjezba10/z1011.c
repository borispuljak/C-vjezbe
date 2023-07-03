#include <stdio.h>
#include <stdlib.h>


// struktura kojom je definirano binarno stablo tra�enja
struct _node {
	int i;
	struct _node* left;
	struct _node* right;
};
typedef struct _node  node;
typedef node* BSTREE;

// funkcija stvaranje novoga �vora
node* NewBSTreeNode(int broj) {
	node* n = (node*)malloc(sizeof(node));

	if (n != NULL) {
		n->i = broj;
		n->left = NULL;
		n->right = NULL;
	}

	return n;
}

// funkcija za ubacivanje novoga �vora u stablo
void AddToBSTree(BSTREE* T, node* N) {
	node* n;
// ako je stablo prazno onda �vor N
//  postaje korijen stabla
	if (*T == NULL) {
		*T = N;
		return;
	}

// kreni od korijena stabla i tra�i mjesto gdje treba ubaciti �vor N
// �vor n je pokaziva� kojim �etamo po stablu
	n = *T;
	while (1) {
// ako je element �vora koji se ubacuje manji od elementa �vora n
// idi u livu granu
		if (N->i < n->i) {
// ako je grana prazna, ubaci
			if (n->left == NULL) {
				n->left = N;
				return;
			}
// ako grana nije prazna �etaj dalje
			else {
				n = n->left;
			}
		}
// ako je element �vora koji se ubacuje ve�i od elementa �vora n
// idi u desnu granu
		else if (N->i > n->i) {
// ako je grana prazna, ubaci
			if (n->right == NULL) {
				n->right = N;
				return;
			} else {
				// ako grana nije prazna �etaj dalje
				n = n->right;
			}
		}
	}
}

void PrintBSTree(BSTREE T) {
	if (T == NULL) {
		return;
	}
	// rekurzivni poziv funkcije za livu granu �vora
	PrintBSTree(T->left);
	// ina�e �vor otvori zagrade i ispi�i broj
	printf("%d ", T->i);
	// rekurzivni poziv funkcije za desnu granu �vora
	PrintBSTree(T->right);
}

int SumBSTree(BSTREE T) {
	if (T == NULL) {
		return 0;
	}
	// rekurzivni poziv funkcije za livu granu �vora
	SumBSTree(T->left);
	// rekurzivni poziv funkcije za desnu granu �vora
	SumBSTree(T->right);
}



int main() {

	BSTREE T = NULL;

	node* n = NewBSTreeNode(6);
	AddToBSTree(&T, n);

	n = NewBSTreeNode(9);
	AddToBSTree(&T, n);

	n = NewBSTreeNode(3);
	AddToBSTree(&T, n);

	n = NewBSTreeNode(8);
	AddToBSTree(&T, n);

	n = NewBSTreeNode(5);
	AddToBSTree(&T, n);

	n = NewBSTreeNode(2);
	AddToBSTree(&T, n);

	PrintBSTree(T);

	printf("--------\n");
	printf("%d", SumBSTree(T));

	system("pause");

	return 0;
}
