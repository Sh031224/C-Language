#include <stdio.h>

int SquareByValue(int num) { //���� 1�� CallbyValue �Լ�
	return num * num;
}

void SquareByReference(int *ptr) { //���� 1�� CallbyReferece �Լ�
	*ptr *= *ptr;
}

void Swap3(int *n1, int *n2, int *n3) { //���� 2�� �Լ�
	int temp = *n1, temp2 = *n2;
	*n1 = *n3;
	*n2 = temp;
	*n3 = temp2;
}

void odd(int num) { //���� 1�� ¦�� �Լ�
	if (num % 2 == 0) {
		printf("%d ", num);
	}
}

void even(int num) { //���� 1�� Ȧ�� �Լ�
	if (num % 2 != 0) {
		printf("%d ", num);
	}
}

int main() {
	//���� 1
	/*int num1 = 10;
	printf("%d\n", SquareByValue(num1));
	SquareByReference(&num1);
	printf("%d", num1);
	return 0;*/

	//����2
	/*int n1 = 10, n2 = 20, n3 = 30;
	Swap3(&n1, &n2, &n3);
	printf("%d %d %d", n1, n2, n3);*/

	//���� 1
	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		printf("�Է�:");
		scanf("%d", &arr[i]);
	}
	printf("Ȧ�� ���: ");
	for (int i = 0; i < 10; i++) {
		even(arr[i]);
	}
	printf("\n¦�� ���: ");
	for (int i = 0; i < 10; i++) {
		odd(arr[i]);
	}*/
	
}