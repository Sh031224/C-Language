#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * next;
} Node;

void insert(Node ** head, int input) { //앞에서 삽입
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

void delete(Node ** head, Node ** tail) { //앞에서 삭제
	Node * NowNode = *head;
	if (*head == NULL) {
		return;
	}
	if (NowNode->next == NULL) {
		free(NowNode);
		*head = NULL;
		*tail = NULL;
		return;
	}
	*head = NowNode->next;
	free(NowNode);
}


void insertTail(Node ** head, Node ** tail,int input) { //뒤에서 삭제
	Node* newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = input;
	newNode->next = NULL;

	if (*head == NULL) {
		*head = newNode;
	}
	else {
		(*tail)->next = newNode;
	}
	*tail = newNode;
}


void deleteTail(Node ** head, Node ** tail) { //뒤에서 삭제
	Node *NowNode = *head;
	if (*head == NULL) {
		return ;
	}
	if (NowNode->next == NULL) {
		free(*head);
		*head = NULL;
		*tail = NULL;
		return ;
	}
	else {
		NowNode = *head;
		while (NowNode->next != *tail) {
			NowNode = NowNode->next;
		}
		*tail = NowNode;
		NowNode->next = NULL;
		free(NowNode->next);
		return ;
	}
}

int main() {
	Node * tail = NULL;
	Node * head = NULL;
	Node *newNode = NULL;
	int input;

	while (1) { //뒤에서 삽입
		scanf("%d", &input);
		if (input == 0) {
			break;
		}
		insert(&head, input); //앞에서 삽입
		/*insertTail(&head, &tail, input);*/ //뒤에서 삽입
	}
	
	delete(&head, &tail); //앞에서 삭제
	delete(&head, &tail);
	delete(&head, &tail);
	//deleteTail(&head, &tail); //뒤에서 삭제
	//deleteTail(&head, &tail);
	//deleteTail(&head, &tail);
	return 0;
}