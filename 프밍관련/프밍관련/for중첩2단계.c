#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int stack_for1() {
	int n, sum=0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i / 2 == 1)
			sum+=n;
	}
	printf("%d", sum);
}
int stack_for2() {
	int n, f=1;
	scanf("%d", &n);
	for (int i =1; i <= n; i++) {
		f*=i;
	}
	printf("%d", f);
}
int stack_for3() {
	int a, b;
	scanf("%d %d", &a, &b);
	for (int i = a; i <= b; i++) {
		if (i % 3 == 0)
			printf("%d ", i);
	}
}
int steak_for4() {
	for (int i = 2; i <= 8; i += 2) {
		for (int j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i , j , i*j);
		printf("\n");
	}
}
int stack_for5() {
	for (int i = 5; i > 0; i--) {
		for (int j=0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
int stack_for6() {
	int count=1, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%2d ", count);
			count++;
		}
		printf("\n");
	}
}
int stack_for7() {
	int count = 0, n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			count++;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%2d ", count);
			count--;
		}
		printf("\n");
	}
}
int stack_for8() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - i; j++)
			printf(" ");
		for (int k = 0; k < i * 2 + 1; k++)
			printf("*");
			printf("\n");
	}
}
void stack_for9() {
	int a;
	char b = 65;
	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%c ", b);
			b++;
		}
		printf("\n");
	}
}
void stack_for10() {
	for (int i = 1; i < 10; i++) {
		for (int j = 1; j < 10; j++) {
			printf("%d * %d = %2d | ", j, i, i * j);
		}
		printf("\n");
	}
}
int main() {
	stack_for9();
}