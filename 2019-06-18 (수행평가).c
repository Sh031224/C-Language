#include <string.h>
#include <stdio.h>

int Scan() {
	int num;
	scanf("%d", &num);
    return num;
}

void pri() {
	printf("\n\n[1] 이순동\n");
	printf("[2] 신희송\n");
	printf("[3] 권태현\n");
	printf("[4] 장호태\n");
	printf("[5] 박정열\n");
	printf("[6] 안영세\n");
	printf("[7] 김정숙\n");
	printf("[8] 김보연\n");
	printf("[9] 나요섭\n");
	printf("[10] 김상희\n");
	printf("[11] 이진의\n");
	printf("[12] 이혜인\n");
	printf("[13] 김동균\n");
	printf("[14] 배명호\n");
}

int sign() {
	int j;
	printf("\n\n   [System]");
	printf("\n[0] 프로그램 종료");
	printf("\n[1] 관리자 로그인");
	printf("\n[2] 출/퇴근 현황\n\n");
	j = Scan();
	return j;
}


int main() {
	char id[100];
	char ps[100];
	int num1 = 1, num2, num3;
	int input = 1, k;
	char now2[14] = { 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x', 'x' };
	char now[14] = { '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?', '?' };

start:
	k = 0;
	while (k != 1) {
		input = sign();
		switch (input)
		{
		case 0:
			return 0;
		case 1:
			printf("[Login] ID : ");
			scanf("%s", id);
			printf("[Login] PASSWORD : ");
			scanf("%s", ps);
			if (strcmp(id, "admin") == 0 && strcmp(ps, "1234") == 0) {
				printf("\n[System] 관리자 로그인에 성공하였습니다.");
				k++;
			}
			else {
				printf("\n[System] 아이디 또는 비밀번호가 틀렸습니다.");
			}
			break;
		case 2:
			printf("\n\n┍  성함        전화번호     출(O)/퇴근(X)   출장(o,x) ┑\n");
			printf("│                                                     │\n");
			printf("│                                                     │\n");
			printf("│ 이순동 010 - xxxx - xxxx        %c            %c      │\n", now[0], now2[0]);
			printf("│ 신희송 010 - xxxx - xxxx        %c            %c      │\n", now[1], now2[1]);
			printf("│ 권태현 010 - xxxx - xxxx        %c            %c      │\n", now[2], now2[2]);
			printf("│ 장호태 010 - xxxx - xxxx        %c            %c      │\n", now[3], now2[3]);
			printf("│ 박정열 010 - xxxx - xxxx        %c            %c      │\n", now[4], now2[4]);
			printf("│ 안영세 010 - xxxx - xxxx        %c            %c      │\n", now[5], now2[5]);
			printf("│ 김정숙 010 - xxxx - xxxx        %c            %c      │\n", now[6], now2[6]);
			printf("│ 김보연 010 - xxxx - xxxx        %c            %c      │\n", now[7], now2[7]);
			printf("│ 나요섭 010 - xxxx - xxxx        %c            %c      │\n", now[8], now2[8]);
			printf("│ 김상희 010 - xxxx - xxxx        %c            %c      │\n", now[9], now2[9]);
			printf("│ 이진의 010 - xxxx - xxxx        %c            %c      │\n", now[10], now2[10]);
			printf("│ 이혜인 010 - xxxx - xxxx        %c            %c      │\n", now[11], now2[11]);
			printf("│ 김동균 010 - xxxx - xxxx        %c            %c      │\n", now[12], now2[12]);
			printf("│ 배명호 010 - xxxx - xxxx        %c            %c      │\n", now[13], now2[13]);
			printf("│                                                     │\n");
			printf("┕━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙");
			break;
		default:
			printf("[System] 잘못 입력하셨습니다.");
			break;
		}
	}
	while (num1 != 0) {
		printf("\n\n     [System]\n[0] 프로그램 종료\n[1] 출/퇴근 현황\n[2] 출퇴근 수정\n[3] 출장 수정\n[4] 로그아웃\n");
		num1 = Scan();
		switch (num1)
		{
		case 0: //2 입력
			return 0;
			break;
		case 1: //1 입력
			//목록 출력
			printf("\n\n┍  성함        전화번호     출(O)/퇴근(X)   출장(o,x) ┑\n");
			printf("│                                                     │\n");
			printf("│                                                     │\n");
			printf("│ 이순동 010 - xxxx - xxxx        %c            %c      │\n", now[0], now2[0]);
			printf("│ 신희송 010 - xxxx - xxxx        %c            %c      │\n", now[1], now2[1]);
			printf("│ 권태현 010 - xxxx - xxxx        %c            %c      │\n", now[2], now2[2]);
			printf("│ 장호태 010 - xxxx - xxxx        %c            %c      │\n", now[3], now2[3]);
			printf("│ 박정열 010 - xxxx - xxxx        %c            %c      │\n", now[4], now2[4]);
			printf("│ 안영세 010 - xxxx - xxxx        %c            %c      │\n", now[5], now2[5]);
			printf("│ 김정숙 010 - xxxx - xxxx        %c            %c      │\n", now[6], now2[6]);
			printf("│ 김보연 010 - xxxx - xxxx        %c            %c      │\n", now[7], now2[7]);
			printf("│ 나요섭 010 - xxxx - xxxx        %c            %c      │\n", now[8], now2[8]);
			printf("│ 김상희 010 - xxxx - xxxx        %c            %c      │\n", now[9], now2[9]);
			printf("│ 이진의 010 - xxxx - xxxx        %c            %c      │\n", now[10], now2[10]);
			printf("│ 이혜인 010 - xxxx - xxxx        %c            %c      │\n", now[11], now2[11]);
			printf("│ 김동균 010 - xxxx - xxxx        %c            %c      │\n", now[12], now2[12]);
			printf("│ 배명호 010 - xxxx - xxxx        %c            %c      │\n", now[13], now2[13]);
			printf("│                                                     │\n");
			printf("┕━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┙");
			break;
		case 2: //2 입력
			//선생님 선택
			pri(); //선생님 목록 출력
			num2 = Scan();
         	printf("\n[1] 출근\n[2] 퇴근\n");
			num3 = Scan();
			if (num3 == 2 && now[num2 - 1] == 'X') { //퇴근 중일 때 퇴근을 입력 할시
				printf("\n\n[System] 이미 퇴근 하셨습니다.\n");
			}
			else if (num3 == 1 && now[num2 - 1] == 'O') { //출근 중일 때 출근을 입력 할시
				printf("\n\n[System] 이미 출근 하셨습니다.\n");
			}
			else if (num3 == 1 && num2 > 0 && num2 < 15) {
				now[num2 - 1] = 'O';
				printf("\n\n[System] 성공적으로 수정하였습니다.\n");
			}
			else if (num3 == 2 && num2 > 0 && num2 < 15) {
				now[num2 - 1] = 'X';
				printf("\n\n[System] 성공적으로 수정하였습니다.\n");
			}
			else
				printf("\n\n[System] 올바른 값을 입력하십시오.\n");
			break;

		case 3: //3 입력
			//선생님 선택
			pri(); //선생님 목록 출력
			num2 = Scan();
			printf("\n[1] 복귀\n[2] 출장\n");
			num3 = Scan();
			if (num3 == 2 && now2[num2 - 1] == 'o') {
				printf("\n\n[System] 이미 출장 중입니다.\n");
			}
			else if (num3 == 1 && now2[num2 - 1] == 'x') {
				printf("\n\n[System] 이미 출장 중이 아닙니다.\n");
			}
			else if (num3 == 1 && num2 > 0 && num2 < 15) {
				now2[num2 - 1] = 'x';
				printf("\n\n[System] 성공적으로 수정하였습니다.\n");
			}
			else if (num3 == 2 && num2 > 0 && num2 < 15) {
				now2[num2 - 1] = 'o';
				printf("\n\n[System] 성공적으로 수정하였습니다.\n");
			}
			else
				printf("\n\n[System] 올바른 값을 입력하십시오.\n");
			break;
		case 4:
			printf("\n[System] 로그아웃 되었습니다.\n\n");
			goto start;
			break;
		default:
			printf("\n\n[System] 잘못 입력하셨습니다.\n");
			break;
		}
	}
}