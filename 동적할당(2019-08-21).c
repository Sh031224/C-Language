#include <stdio.h>
#include <stdlib.h>

int main() {
	int *a;
	int input;
	scanf("%d", &input);
	a = (int *)malloc((sizeof(int)) * input);
	for (int i = 0; i < input; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < input; i++) {
		printf("%d ", a[i]);
	}
	free(a);
}