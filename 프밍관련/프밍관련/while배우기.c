#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int q6() {
	int i = 1;
	while (i <= 10) {
		printf("%d\n", i);
		i++;
	}
}
int q7() {
	int i = 0;
	while (i <= 100) {
		//if(i%2==0)
		printf("%d\n", i);
		i += 2;
	}
}
int q8() {
	int a;
	do {
		scanf("%d", &a);
		printf("%d\n", a);
	} while (a!=0);
}
int q9_while() {
	int n, i = 1, sum = 0;
	scanf("%d", &n);
	while (i <= n) {
		sum += i;
		i++;
	}
	printf("%d\n", sum);
}
int q9_dowhile() {
	int n, i = 1, sum = 0;
	scanf("%d", &n);
	do {
		sum += i;
		i++;
	} while (i <= n);
	printf("%d\n", sum);
}
int q9_for() {
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		sum += i;
	printf("%d\n", sum);
}
int q10() {
	char ans;
	do {
		scanf("%c", &ans);
		printf("반복중입니다\n");
	} while (ans != 'n');
}
int q11() {
	int n;
	scanf("%d", &n);
	for (; n > 0; n--)
		printf("%d\n", n);
}
int q12() {
	int ans;
	do {
		scanf("%d", &ans);
		printf("%d\n", ans);
	} while (!(ans > 100 || ans <= 0));
	printf("끝\n");
}
int q13_while() {
	int ans, sum = 0;
	scanf("%d", &ans);
	while (ans!=0) {
		sum += ans;
		scanf("%d", &ans);
	}
	printf("%d\n", sum);
}
int q13_dowhile() {
	int ans, sum = 0;
	do {
		scanf("%d", &ans);
		sum += ans;
	} while (ans != 0);
	printf("%d\n", sum);
}
int q13_while_inf() {
	int ans, sum = 0;
	while (1) {
		scanf("%d", &ans);
		if (ans == 0)
			break;
		sum += ans;
	}
	printf("%d\n", sum);
}
int q14_while() {
	int ans, i=1;
	scanf("%d", &ans);
	while (i <= 9) {
		printf("%d * %d = %d\n", ans, i, ans * i);
		i++;
	}
}
int q14_for() {
	int ans;
	scanf("%d", &ans);
	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", ans, i, ans * i);
}
int q14_dowhile() {
	int ans, i = 1;
	scanf("%d", &ans);
	do {
		printf("%d * %d = %d\n", ans, i, ans * i);
		i++;
	} while (i<=9);
}
int main() {
	q14_dowhile();

}