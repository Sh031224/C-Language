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
	printf("\n\n국어점수가 가장 높은 학생이름 및 점수 : %s %d", ko[big].name, ko[big].kor);
}

int main() {
	struct student dgsw[3];

	for (int i = 0; i < 3; i++) {
		scanf("%s", dgsw[i].name);
		scanf("%d %d %d", &dgsw[i].kor, &dgsw[i].math, &dgsw[i].eng);
	}
	for (int i = 0; i < 3; i++) {
		printf("\n\n이름: %s\n", dgsw[i].name);
		printf("점수(국어, 수학, 영어): %d %d %d", dgsw[i].kor, dgsw[i].math, dgsw[i].eng);
	}
	korean(dgsw);
}