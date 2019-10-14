#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	struct Node* llink;
	int data;
	struct Node* rlink;
} Node;


void insert(Node **node, Node **newNode) {
	(*newNode)->llink = (*node);
	(*newNode)->rlink = (*node)->rlink;
	(*node)->rlink = (*newNode);
	(*node)->rlink->llink = (*newNode);
}


void insertSearch(Node ** head, int input) {
	Node* newNode;
	Node* first;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = input;
	newNode->llink = NULL;
	newNode->rlink = NULL;

	first = *head;
	while (newNode->data == first->rlink->data)
	{
		if (first->rlink == *head)
			break;
		first = first->rlink;
	}
	insert(&first, &newNode);
}



int main() {
	Node * tail = NULL;
	Node *head = (Node*)malloc(sizeof(Node));

	head->llink = head;
	head->rlink = head;
	head->data = 0;

	int input;

	while (1) {
		scanf("%d", &input);
		if (input == 0)
			break;
		insertSearch(&head, input);
	}

	return 0;
}