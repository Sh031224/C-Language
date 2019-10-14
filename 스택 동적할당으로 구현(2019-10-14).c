#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	int data;
	struct Node* link;
} Node;

Node * top = NULL;

int push(int input) {
	Node *newNode = (Node*)malloc(sizeof(Node));

	newNode->data = input;

	if (top == NULL) {
		top = newNode;
		newNode->link = NULL;
		return;
	}

	newNode->link = top;
	top = newNode;
	return;
}

int pop() {
	Node * temp;
	
	if (top == NULL) {
		printf("Stack underflow\n");
		return -1;
	}
	if (top->link == NULL) {
		temp = top;
		top = NULL;
		free(temp);
		return;
	}

	temp = top;
	top = top->link;
	free(temp);
	return;
}

int main() {
	push(1);
	push(3);
	push(5);
	pop();
	pop();
	pop();
	pop();

	return 0;
}