#include <stdio.h>

int main()
{
	//1
	//0�� �Է��Ҷ����� ��� ���ڸ� �Է¹ް� 5�� ����� ������ 5�� ����� ��, ����� ���Ͽ� ���
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
	//���� �ϳ��� �Է¹ް� �� ���ڰ� arr�� ������ ���ڿ����� �� ���ڸ� �ҹ��ڷ� ���
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


	//#10 �� 1
	//�����͸� �̿��Ͽ� height�� ���� 2.5 ������Ų �� ���
	/*double height = 172.5;
	double *pheight = &height;
	*(pheight) += 2.5;
	printf("%lf", height);*/

	//#10 �� 2
	//�����͸� �̿��Ͽ� �迭�� �� ���ϱ�
	/*int point[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int *pi = point, sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += *(pi + i);
	}
	printf("%d", sum);*/

	//#10 ��1
	// 0���� 9������ ���� �߿��� 20���� ���� �Է¹޾� ���� ���� �Է¹޴� ���ڿ� �󵵼��� ���
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


	//#10 ��2
	//10���� ������ �Է¹޾� 100�̸��� �� �� ���� ū ���� 100 �̻��� �� �� ���� ���� �� ���
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
		printf("����   ");
	}
	else {
		printf("%d   ", big);
	}
	if (k2 == 0) {
		printf("����");
	}
	else {
		printf("%d", small);
	}*/
}