#include <stdio.h>
#include <stdlib.h>

struct student {
	int number;
	double ki;
	double weight;
	double bmi;
};

double bm(double ki, double weight){
	return (weight) / (ki * ki);
}

int main() {
	struct student *dgsw;
	int input;
	scanf("%d", &input);
	dgsw = (struct student *)malloc((sizeof(struct student) * input));
	for (int i = 0; i < input; i++) {
		scanf("%d %lf %lf", &dgsw[i].number, &dgsw[i].ki, &dgsw[i].weight);
		dgsw[i].bmi = bm(dgsw[i].ki, dgsw[i].weight);
	}
	for (int i = 0; i < input; i++) {
		printf("%d번: 키:%g, 몸무게:%g, BMI지수:%.2lf\n", dgsw[i].number, dgsw[i].ki, dgsw[i].weight, dgsw[i].bmi);
	}
	free(dgsw);
}