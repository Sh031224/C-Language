#include <stdio.h>
#include <string.h>

void frist(char color1[10]) {
	if (strstr(color1, "black") != NULL) {
		return;
	}
	else if(strstr(color1, "brown") != NULL) {
		printf("1");
	}
	else if (strstr(color1, "red") != NULL) {
		printf("2");
	}
	else if (strstr(color1, "orange") != NULL) {
		printf("3");
	}
	else if (strstr(color1, "yellow") != NULL) {
		printf("4");
	}
	else if (strstr(color1, "green") != NULL) {
		printf("5");
	}
	else if (strstr(color1, "blue") != NULL) {
		printf("6");
	}
	else if (strstr(color1, "purple") != NULL) {
		printf("7");
	}
	else if (strstr(color1, "gray") != NULL) {
		printf("8");
	}
	else if (strstr(color1, "white") != NULL) {
		printf("9");
	}
	else {
		printf("입력값 오류\n");
	}
}

void second(char color1[10]) {
	if (strstr(color1, "black") != NULL) {
		printf("0");
	}
	else if (strstr(color1, "brown") != NULL) {
		printf("1");
	}
	else if (strstr(color1, "red") != NULL) {
		printf("2");
	}
	else if (strstr(color1, "orange") != NULL) {
		printf("3");
	}
	else if (strstr(color1, "yellow") != NULL) {
		printf("4");
	}
	else if (strstr(color1, "green") != NULL) {
		printf("5");
	}
	else if (strstr(color1, "blue") != NULL) {
		printf("6");
	}
	else if (strstr(color1, "purple") != NULL) {
		printf("7");
	}
	else if (strstr(color1, "gray") != NULL) {
		printf("8");
	}
	else if (strstr(color1, "white") != NULL) {
		printf("9");
	}
	else {
		printf("입력값 오류\n");
	}
}

void third(char color1[10]) {
	int color;
	if (strstr(color1, "black") != NULL) {
		color = 0;
	}
	else if (strstr(color1, "brown") != NULL) {
		color = 1;
	}
	else if (strstr(color1, "red") != NULL) {
		color = 2;
	}
	else if (strstr(color1, "orange") != NULL) {
		color = 3;
	}
	else if (strstr(color1, "yellow") != NULL) {
		color = 4;
	}
	else if (strstr(color1, "green") != NULL) {
		color = 5;
	}
	else if (strstr(color1, "blue") != NULL) {
		color = 6;
	}
	else if (strstr(color1, "purple") != NULL) {
		color = 7;
	}
	else if (strstr(color1, "gray") != NULL) {
		color = 8;
	}
	else if (strstr(color1, "white") != NULL) {
		color = 9;
	}
	else {
		printf("입력값 오류\n");
		return;
	}
	for (int i = 1; i <= color; i++) {
		printf("0");
	}
}
void fourth(char color1[10]) {
	if (strstr(color1, "gold") != NULL) {
		printf("±10%%");
	}
	else if (strstr(color1, "silver") != NULL) {
		printf("±5%%");
	}
	else {
		printf("입력값 오류\n");
	}
}
int main() {
	char color1[10], color2[10], color3[10], color4[10];
	scanf("%s", color1);
	scanf("%s", color2);
	scanf("%s", color3);
	scanf("%s", color4);
	frist(color1);
	second(color2);
	third(color3);
	fourth(color4);
	return 0;
}