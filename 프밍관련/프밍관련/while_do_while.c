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
	printf("��й�ȣ ���� : ");
	scanf("%d", &password);
	
	printf("\n\n\n\n\n");

	while (a != password) {
		printf("��й�ȣ �Է� : ");
		scanf("%d", &a);
		if (a != password)
			printf("Ʋ�Ƚ��ϴ�\n");
	}
	printf("�������;;\n");
}
void q3() {
	int ans, sum = 0;
	do {
		printf("������ �Է�;; : ");
		scanf("%d", &ans);
		sum += ans;
	} while (sum <= 100);
	printf("���� ; %d\n", sum);
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
	printf("�Է��� ����� ���� : %d\n", count);
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
	printf("��й�ȣ ���� : ");
	scanf("%d", &password);
	printf("\n\n\n\n\n\n\n\n\n\n");
	do {
		if (count == 3) {
			printf("���� ����;;");
			return 0;
		}
		printf("��й�ȣ �Է� : ");
		scanf("%d", &ans);
		count++;
	} while (ans != password);
	printf("���� ���;;");
}
void q7() {
	srand(time(NULL));
	int ans, tans = rand()%100;
	printf("UP % DOWN GAME (0~99)\n");
	while (1) {
		printf("�� �Է� : "); scanf("%d", &ans);
		if (tans > ans)
			printf("UP\n");
		else if (ans > tans)
			printf("DOWN\n");
		else {
			printf("����! YOU WIN!\n");
			break;
		}
	}
}
int main() {
	q7();
}