#include <stdio.h>

struct student {
	char name[100];
	int kor;
	int math;
	int eng;
};

void korean(struct student ko[]){
	int big = 0;
	for (int i = 0; i < 3; i++) {
		if (ko[i].kor > ko[big].kor) {
			big = i;
		}
	}
	printf("\n\n���������� ���� ���� �л��̸� �� ���� : %s %d", ko[big].name, ko[big].kor);
}

int main() {
	struct student dgsw[3];

	for (int i = 0; i < 3; i++) {
		scanf("%s", dgsw[i].name);
		scanf("%d %d %d", &dgsw[i].kor, &dgsw[i].math, &dgsw[i].eng);
	}
	for (int i = 0; i < 3; i++) {
		printf("\n\n�̸�: %s\n", dgsw[i].name);
		printf("����(����, ����, ����): %d %d %d", dgsw[i].kor, dgsw[i].math, dgsw[i].eng);
	}
	korean(dgsw);
}