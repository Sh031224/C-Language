#include <stdio.h>

int first(int num) {  //#11 ��1 �Լ�
	return num * 2;
}

void second(int *num1, int *num2) { //#11 ��2 �Լ�
	(*num1) *= 2;
	(*num2) /= 2;
}

void third(int *arr) { //#11 ��3 �Լ�
	for (int i = 0; i < 5; i++) {
		*(arr + i) *= 2;
	}
}

int GCD(int num1, int num2) { //#11 ��2 �Լ�1
	if (num2 == 0)
		return num1;
	else
		GCD(num2, num1%num2);
}

int LCM(int num1, int num2) { //#11 ��2 �Լ�2
	int lcm = GCD(num1, num2);
	return (num1*num2)/lcm;
}

int main(void) {
	//#9 ������
	/*int input;
	int *ptr1 = &input;
	int *ptr2 = &input;
	scanf("%d", &input);
	printf("input : %d\n", input);
	*(ptr1) *= 2;
	printf("ptr1 : %d\n", *ptr1);
	*(ptr2) /= 2;
	printf("ptr2 : %d", *ptr2);*/


	//#11 ��1
	/*int input;
	scanf("%d", &input);
	printf("%d", first(input));*/

	//#11 ��2
	/*int input1, input2;
	scanf("%d %d", &input1, &input2);
	second(&input1, &input2);
	printf("%d %d", input1, input2);*/

	//#11 ��3
	/*int array[5];
	for (int i = 0; i < 5; i++) {
		scanf("%d", &array[i]);
	}

	third(array);

	for (int i = 0; i < 5; i++) {
		printf("%d ", array[i]);
	}*/

	//#11 ��1
	/*int num1, num2;
	scanf("%d %d", &num1, &num2);
	for (int i = 1; i < 10; i++) {
		for (int j = num1; j <= num2; j++) {
			printf("%d x %d = %2d    ", j, i, i*j);
		}
		printf("\n");
	}*/

	//#11 ��2
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	printf("%d %d", GCD(num1, num2), LCM(num1, num2));
}