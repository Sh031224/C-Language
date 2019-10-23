#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX] = { 0, };
double stack2[MAX] = { 0, };
int top;

void Init() { //������ ������� �� �ʱ�ȭ���ִ� �Լ�
	top = -1;
}

void push(char input) {
	stack[++top] = input;
}

void push2(double input) {
	stack2[++top] = input;
}

double pop2() {
	return stack2[top--];
}

char pop() {
	return stack[top--];
}

int Prec(char op) { //�켱���� ���ϴ� �Լ�
	switch (op)
	{
	case '*':  // * �� / �϶� 3 ��ȯ
	case '/':
		return 3;
	case '+': // + �� - �϶� 2 ��ȯ
	case '-':
		return 2;
	case '(': // ( �϶� 1 ��ȯ
		return 1;
	}
	return -1; //�� ��ȣ�� �ش����� ���� �� -1 ��ȯ
}

int PrecOp(char op1, char op2) { //�켱���� ���ϴ� �Լ�

	int op1Prec = Prec(op1); //op1 �� �켱���� ����
	int op2Prec = Prec(op2); //op2 �� �켱���� ����

	if (op1Prec > op2Prec) //op1�� �켱������ �� ���ٸ� 1 ��ȯ
		return 1;
	else if (op1Prec < op2Prec) //op2�� �켱������ �� ���ٸ� -1 ��ȯ
		return -1;
	else //op1�� op2�� �켱������ ���ٸ� 0 ��ȯ
		return 0;
}
void infixToPostfix(char infix[], char *postfix) {
	int inlen = strlen(infix);
	int idx = 0;
	char input, Oppop;
	Init();

	for (int i = 0; i < inlen; i++) {
		input = infix[i];
		if (isdigit(input)) {
			postfix[idx++] = input;
		}
		else {
			switch (input)
			{
			case '(':
				push(input);
				break;
			case ')':
				while (1) {
					Oppop = pop();
					if (Oppop == '(')
						break;
					postfix[idx++] = Oppop;
				}
				break;
			default:
				while (1) {
					if (top == -1) {
						push(input);
						break;
					}
					else if (PrecOp(input, stack[top]) == 1) {
						push(input);
						break;
					}
					else {
						postfix[idx++] = pop();
					}
				}
				break;
			}
		}
	}
	while (1) {
		if (top == -1) {
			break;
		}
		postfix[idx++] = pop();
	}
}

void calc(char input) {
	double op2 = pop2();
	double op1 = pop2();
	switch (input)
	{
	case '+':
		push2(op1 + op2);
		break;
	case '-':
		push2(op1 - op2);
		break;
	case '*':
		push2(op1 * op2);
		break;
	case '/':
		push2(op1 / op2);
		break;
	}
}

double ascii(char input) {
	return input - '0';
}

void postcalc(char *postfix) {
	int len = strlen(postfix);
	char input;
	Init();

	for (int i = 0; i < len; i++) {
		input = postfix[i];
		if (isdigit(input)) {
			push2(ascii(input));
		}
		else {
			calc(input);
		}
	}
}


void main() {
	char infix[MAX] = { 0, };
	char postfix[MAX] = { 0, };

	printf("���� �Է�(����ǥ���) : ");
	scanf("%s", infix);

	printf("\n����ǥ������� ��ȯ : ");
	infixToPostfix(infix, postfix);

	printf("%s\n", postfix);

	printf("\n��� ��� : ");
	postcalc(postfix);

	printf("%.3f", stack2[0]);
}