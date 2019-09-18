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
	printf("\n[System] 입력할 데이터의 개수 : ");
	scanf("%d", &input);
	printf("\n[System] 데이터 입력 : ");
	idx = found(arr, -1);
	for (int i = idx; i < input + idx; i++) {
		scanf("%d", &arr[i]);
	}
	printf("\n[System] 입력이 완료되었습니다.\n\n");
}

void print(int *arr) {
	int i = 0;
	printf("\n[System] 현재 입력한 데이터 목록\n\n");
	while (arr[i] != -1) {
		printf("%d ", arr[i++]);
	}
	printf("\n\n\n");
}

void delete(int *arr) {
	int input;
	int idx = 0;
	int last = 0;
	printf("[System] 삭제할 데이터 입력 : ");
	scanf("%d", &input);
	while (1) {
		last = found(arr, -1);
		idx = found(arr, input);
		if (idx == -1) break;
		for (int i = idx; i < last; i++) {
			arr[i] = arr[i + 1];
		}
	}
	printf("\n[System] 삭제가 완료되었습니다.\n\n");
}


int main() {
	int list[100] = { -1, };
	int input;
	for (int i = 0; i < 100; i++) {
		list[i] = -1;
	}
	while (1) {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		printf("┏━━━━━━ [System]━━━━━━┓\n");
		printf("┃                     ┃\n");
		printf("┃   [0] 데이터 삽입   ┃\n┃   [1] 데이터 출력   ┃\n┃   [2] 데이터 삭제   ┃\n");
		printf("┃                     ┃\n");
		printf("┗━━━━━━━━━━━━━━━━━━━━━┛\n");
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
				printf("[System] 잘못입력하셨습니다.\n");
				break;
		};
	}
	
}