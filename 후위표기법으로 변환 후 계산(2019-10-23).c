#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX] = { 0, };
double stack2[MAX] = { 0, };
int top;

void Init() { //스택이 비어있을 때 초기화해주는 함수
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

int Prec(char op) { //우선순위 구하는 함수
	switch (op)
	{
	case '*':  // * 와 / 일때 3 반환
	case '/':
		return 3;
	case '+': // + 와 - 일때 2 반환
	case '-':
		return 2;
	case '(': // ( 일때 1 반환
		return 1;
	}
	return -1; //위 기호에 해당하지 않을 때 -1 반환
}

int PrecOp(char op1, char op2) { //우선순위 비교하는 함수

	int op1Prec = Prec(op1); //op1 의 우선순위 저장
	int op2Prec = Prec(op2); //op2 의 우선순위 저장

	if (op1Prec > op2Prec) //op1의 우선순위가 더 높다면 1 반환
		return 1;
	else if (op1Prec < op2Prec) //op2의 우선순위가 더 높다면 -1 반환
		return -1;
	else //op1과 op2의 우선순위가 같다면 0 반환
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

	printf("계산식 입력(중위표기법) : ");
	scanf("%s", infix);

	printf("\n후위표기법으로 변환 : ");
	infixToPostfix(infix, postfix);

	printf("%s\n", postfix);

	printf("\n계산 결과 : ");
	postcalc(postfix);

	printf("%.3f", stack2[0]);
}