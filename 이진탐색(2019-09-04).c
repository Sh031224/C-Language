#include <stdio.h>


int main() {
	int arr[] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 21, 24};
	int idx;
	int input;

	scanf("%d", &input);
	idx = search(arr, 0, sizeof(arr) / sizeof(int) - 1, input);
	if (idx == -1) {
		printf("���� �����ϴ�.\n");
	}
	else {
		printf("Ÿ�� ���� �ε��� : %d\n", idx);
	}
	return 0;
}