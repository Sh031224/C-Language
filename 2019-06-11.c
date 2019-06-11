#include <stdio.h>

int first(int num) {  //#11 앞1 함수
	return num * 2;
}

void second(int *num1, int *num2) { //#11 앞2 함수
	(*num1) *= 2;
	(*num2) /= 2;
}

void third(int *arr) { //#11 앞3 함수
	for (int i = 0; i < 5; i++) {
		*(arr + i) *= 2;
	}
}

int GCD(int num1, int num2) { //#11 뒤2 함수1
	if (num2 == 0)
		return num1;
	else
		GCD(num2, num1%num2);
}

int LCM(int num1, int num2) { //#11 뒤2 함수2
	int lcm = GCD(num1, num2);
	return (num1*num2)/lcm;
}

int main(void) {
	//#9 포인터
	/*int input;
	int *ptr1 = &input;
	int *ptr2 = &input;
	scanf("%d", &input);
	printf("input : %d\n", input);
	*(ptr1) *= 2;
	printf("ptr1 : %d\n", *ptr1);
	*(ptr2) /= 2;
	printf("ptr2 : %d", *ptr2);*/


	//#11 앞1
	/*int input;
	scanf("%d", &input);
	printf("%d", first(input));*/

	//#11 앞2
	/*int input1, input2;
	scanf("%d %d", &input1, &input2);
	second(&input1, &input2);
	printf("%d %d", input1, input2);*/

	//#11 앞3
	/*int array[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}

	third(array);

	for (int i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}*/

	//#11 뒤1
	/*int num1, num2;
	scanf("%d %d", &num1, &num2);
	for (int i = 1; i < 10; i++) {
		for (int j = num1; j <= num2; j++) {
			printf("%d x %d = %2d    ", j, i, i*j);
		}
		printf("\n");
	}*/

	//#11 뒤2
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d %d", GCD(num1, num2), LCM(num1, num2));
}