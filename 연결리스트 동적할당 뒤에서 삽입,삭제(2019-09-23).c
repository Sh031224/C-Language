#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node * next;
} Node;

void insert(Node ** head, int input) { //�տ��� ����
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

void delete(Node ** head, Node ** tail) { //�տ��� ����
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


void insertTail(Node ** head, Node ** tail,int input) { //�ڿ��� ����
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


void deleteTail(Node ** head, Node ** tail) { //�ڿ��� ����
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

	while (1) { //�ڿ��� ����
		scanf("%d", &input);
		if (input == 0) {
			break;
		}
		insert(&head, input); //�տ��� ����
		/*insertTail(&head, &tail, input);*/ //�ڿ��� ����
	}
	
	delete(&head, &tail); //�տ��� ����
	delete(&head, &tail);
	delete(&head, &tail);
	//deleteTail(&head, &tail); //�ڿ��� ����
	//deleteTail(&head, &tail);
	//deleteTail(&head, &tail);
	return 0;
}