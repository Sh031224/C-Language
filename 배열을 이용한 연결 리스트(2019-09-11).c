#include <stdio.h>
#include <windows.h>

int found(int *arr, int num) {
	int i = 0;
	while (arr[i] != num) {
		if (i == 99) {
			return -1;
		}
		i++;
	}
	return i;
}

void insert(int *arr) {
	int idx;
	int input;
	printf("\n[System] �Է��� �������� ���� : ");
	scanf("%d", &input);
	printf("\n[System] ������ �Է� : ");
	idx = found(arr, -1);
	for (int i = idx; i < input + idx; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\n[System] �Է��� �Ϸ�Ǿ����ϴ�.\n\n");
}

void print(int *arr) {
	int i = 0;
	printf("\n[System] ���� �Է��� ������ ���\n\n");
	while (arr[i] != -1) {
		printf("%d ", arr[i++]);
	}
	printf("\n\n\n");
}

void delete(int *arr) {
	int input;
	int idx = 0;
	int last = 0;
	printf("[System] ������ ������ �Է� : ");
	scanf("%d", &input);
	while (1) {
		last = found(arr, -1);
		idx = found(arr, input);
		if (idx == -1) break;
		for (int i = idx; i < last; i++) {
			arr[i] = arr[i + 1];
		}
	}
	printf("\n[System] ������ �Ϸ�Ǿ����ϴ�.\n\n");
}


int main() {
	int list[100] = { -1, };
	int input;
	for (int i = 0; i < 100; i++) {
		list[i] = -1;
	}
	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("�������������� [System]��������������\n");
		printf("��                     ��\n");
		printf("��   [0] ������ ����   ��\n��   [1] ������ ���   ��\n��   [2] ������ ����   ��\n");
		printf("��                     ��\n");
		printf("����������������������������������������������\n");
		scanf("%d", &input);
		switch(input) {
			case 0:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 9);
				system("cls");
				insert(list);
				break;
			case 1:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
				system("cls");
				print(list);
				break;
			case 2:
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
				system("cls");
				delete(list);
				break;
			default:
				printf("[System] �߸��Է��ϼ̽��ϴ�.\n");
				break;
		};
	}
	
}