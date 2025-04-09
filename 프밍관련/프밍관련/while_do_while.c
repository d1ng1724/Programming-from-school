#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void q1() {
	int n;
	scanf("%d", &n);
	while (n > 0) {
		printf("%d ", n);
		n--;
	}
}
void q2() {
	int password, a=0;
	printf("비밀번호 설정 : ");
	scanf("%d", &password);
	
	printf("\n\n\n\n\n");

	while (a != password) {
		printf("비밀번호 입력 : ");
		scanf("%d", &a);
		if (a != password)
			printf("틀렸습니다\n");
	}
	printf("접근허용;;\n");
}
void q3() {
	int ans, sum = 0;
	do {
		printf("정수를 입력;; : ");
		scanf("%d", &ans);
		sum += ans;
	} while (sum <= 100);
	printf("총합 ; %d\n", sum);
}
void q4() {
	int count=0, a;
	while (1) {
		scanf("%d", &a);
		if (a > 0)
			count++;
		else
			break;
	}
	printf("입력한 양수의 개수 : %d\n", count);
}
void q5() {
	int a, i=0, b, count=0;
	scanf("%d", &a);
	b = a;
	while (a != 0) {
		a /= 10;
		count++;
	}
	while (i < count) {
		printf("%d\n", b % 10);
		b /= 10;
		i++;
	}
}
void q6() {
	int password, ans, count = 0, i = 0;
	printf("비밀번호 설정 : ");
	scanf("%d", &password);
	printf("\n\n\n\n\n\n\n\n\n\n");
	do {
		if (count == 3) {
			printf("접근 차단;;");
			return 0;
		}
		printf("비밀번호 입력 : ");
		scanf("%d", &ans);
		count++;
	} while (ans != password);
	printf("접근 허용;;");
}
void q7() {
	srand(time(NULL));
	int ans, tans = rand()%100;
	printf("UP % DOWN GAME (0~99)\n");
	while (1) {
		printf("답 입력 : "); scanf("%d", &ans);
		if (tans > ans)
			printf("UP\n");
		else if (ans > tans)
			printf("DOWN\n");
		else {
			printf("정답! YOU WIN!\n");
			break;
		}
	}
}
int main() {
	q7();
}