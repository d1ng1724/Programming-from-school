#include <stdio.h>

int steak_for1() {
	int n, sum=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i / 2 == 1)
			sum+=n;
	}
	printf("%d", sum);
}
int steak_for2() {
	int n, f=1;
	scanf_s("%d", &n);
	for (int i =1; i <= n; i++) {
		f*=i;
	}
	printf("%d", f);
}
int steak_for3() {
	int a, b;
	scanf_s("%d %d", &a, &b);
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
int steak_for5() {
	for (int i = 5; i > 0; i--) {
		for (int j=0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
int steak_for6() {
	int count=1;
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("%2d ", count);
			count++;
		}
		printf("\n");
	}
}
int steak_for7() {
	int count = 15;
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++) {
			printf("%2d ", count);
			count--;
		}
		printf("\n");
	}
}
int steak_for8() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4 - i; j++)
			printf(" ");
		for (int k = 0; k < i * 2 + 1; k++)
			printf("*");
			printf("\n");
	}
}
int main() {
	steak_for8();
}