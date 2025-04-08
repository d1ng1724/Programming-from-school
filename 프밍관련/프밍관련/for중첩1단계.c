#include <stdio.h>

int steak_for_1() {
	for (int i = 1; i <= 10; i++)
		printf("%d ", i);
}
int steak_for_2() {
	for (int i = 10; i > 0; i--)
		printf("%d ", i);
}
int steak_for_3() {
	for (int i = 1; i <= 100; i++) {
		if (i % 2 == 0)
			printf("%d\n", i);
	}
}
int steak_for_4() {
	for (int i = 1; i < 10; i++)
		printf("2 * %d = %d\n", i, i*2);
}
int steak_for_5() {
	int n, sum=0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
		sum += i;
	printf("%d", sum);
}
int steak_for_6() {
	for (int i = 0; i < 5; i++)
		printf("*\n");
}
int steak_for_7() {
	for (int i = 0; i < 5; i++)
		printf("*");
}
int steak_for_8() {
	for (int i = 1; i <= 5; i++) {
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
}
int steak_for_9() {
	for (int i = 2; i <= 9; i++) {
		for (int j = 1; j <= 9; j++)
			printf("%d * %d = %d\n", i, j, i*j);
		printf("\n");
	}
}
int steak_for_10() {
	for (int i = 0; i < 3; i++) {
		for (int j = 1; j <= 3; j++)
			printf("%d ", j);
		printf("\n");
	}
}
int steak_for_add1() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			if (i == j)
				printf("#");
			else
				printf("*");
		}
		printf("\n");
	}
}
//int main() {
//	steak_for_add1();
//}