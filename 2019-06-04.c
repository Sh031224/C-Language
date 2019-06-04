#include <stdio.h>

int main()
{
	//1
	//0을 입력할때까지 계속 숫자를 입력받고 5의 배수의 개수와 5의 배수의 합, 평균을 구하여 출력
	/*int arr[100];
	int sum = 0, k = 0;

	for (int i = 0; i < 100; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 0) {
			break;
		}
		if (arr[i] % 5 == 0) {
			k++;
			sum += arr[i];
		}
	}
	printf("%d  %d  %.1f", k, sum, (float)sum / k);*/


	//2
	//문자 하나를 입력받고 그 문자가 arr에 있으면 문자열에서 그 문자만 소문자로 출력
	/*char arr[] = { "SHIN HEE SONG" };
	char input;
	int k = 0;
	scanf("%c", &input);

	for (int i = 0; i < 14; i++) {
		if (arr[i] == input) {
			arr[i] += 32;
			k++;
		}
	}
	if (k == 0) {
		printf("ERROR");
	}
	else {
		printf("%s", arr);
	}*/


	//#10 앞 1
	//포인터를 이용하여 height의 값을 2.5 증가시킨 후 출력
	/*double height = 172.5;
	double *pheight = &height;
	*(pheight) += 2.5;
	printf("%lf", height);*/

	//#10 앞 2
	//포인터를 이용하여 배열의 합 구하기
	/*int point[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *pi = point, sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += *(pi + i);
	}
	printf("%d", sum);*/

	//#10 뒤1
	// 0에서 9까지의 정수 중에서 20개의 수를 입력받아 가장 많이 입력받는 숫자와 빈도수를 출력
	/*int input;
	int arr[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int big = 0, k = 0;

	for (int i = 0; i < 20; i++) {
		scanf("%d", &input);
		arr[input]++;
	}

	for (int i = 0; i < 10; i++) {
		if (big < arr[i]) {
			big = i;
			k = arr[i];
		}
	}
	printf("%d   %d", big, k);*/


	//#10 뒤2
	//10개의 정수를 입력받아 100미만의 수 중 가장 큰 수와 100 이상의 수 중 가장 작은 수 출력
	/*int arr[10];
	int big, small;
	int k1 = 0, k2 = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	big = arr[0], small = 999;
	for (int i = 0; i < 10; i++) {
		if (arr[i] < 100) {
			k1++;
			if (big < arr[i]) {
				big = arr[i];
			}
		}
		if (arr[i] >= 100) {
			k2++;
			if (small > arr[i]) {
				small = arr[i];
			}
		}

	}
	if (k1 == 0) {
		printf("없음   ");
	}
	else {
		printf("%d   ", big);
	}
	if (k2 == 0) {
		printf("없음");
	}
	else {
		printf("%d", small);
	}*/
}