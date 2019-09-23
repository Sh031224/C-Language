#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * next;
} Node;


void insert(Node ** head, int input) {
	Node* newNode;
	newNode = (Node *)malloc(sizeof(Node));
	newNode->data = input;
	newNode->next = NULL;

	if (*head == NULL) {
		*head = newNode;
	}
	else {
		newNode->next = *head;
		*head = newNode;
	}
}

void delete(Node ** head) {
	Node * delNode, *delNextNode;
	delNode = NULL, delNextNode = NULL;
	if (*head) {
		delNode = *head;
		delNextNode = delNode->next;
		*head = delNextNode;
		free(delNode);

		while (delNextNode != NULL) {
			delNode = delNextNode;
			*head = delNextNode;
			delNextNode = delNextNode->next;
			free(delNode);
		}
	}

}

int main() {
	int cnt = 0;
	Node * head = NULL;
	Node *newNode = NULL;
	int input;

	while (1) {
		scanf("%d", &input);
		if (input == 0) {
			break;
		}
		insert(&head, input);
	}

	delete(&head);

	return 0;
}