#include <stdio.h>

int SquareByValue(int num) { //문제 1번 CallbyValue 함수
	return num * num;
}

void SquareByReference(int *ptr) { //문제 1번 CallbyReferece 함수
	*ptr *= *ptr;
}

void Swap3(int *n1, int *n2, int *n3) { //문제 2번 함수
	int temp = *n1, temp2 = *n2;
	*n1 = *n3;
	*n2 = temp;
	*n3 = temp2;
}

void odd(int num) { //도전 1번 짝수 함수
	if (num % 2 == 0) {
		printf("%d ", num);
	}
}

void even(int num) { //도전 1번 홀수 함수
	if (num % 2 != 0) {
		printf("%d ", num);
	}
}

int main() {
	//문제 1
	/*int num1 = 10;
	printf("%d\n", SquareByValue(num1));
	SquareByReference(&num1);
	printf("%d", num1);
	return 0;*/

	//문제2
	/*int n1 = 10, n2 = 20, n3 = 30;
	Swap3(&n1, &n2, &n3);
	printf("%d %d %d", n1, n2, n3);*/

	//도전 1
	/*int arr[10];
	for (int i = 0; i < 10; i++) {
		printf("입력:");
		scanf("%d", &arr[i]);
	}
	printf("홀수 출력: ");
	for (int i = 0; i < 10; i++) {
		even(arr[i]);
	}
	printf("\n짝수 출력: ");
	for (int i = 0; i < 10; i++) {
		odd(arr[i]);
	}*/
	
}