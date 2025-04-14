#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int q1_max(int a, int b) {
	if (a >= b)
		return a;
	else
		return b;
}
int q1_min(int a, int b) {
	if (a <= b)
		return a;
	else
		return b;
}
void q1_main() {
	int a, b;
	scanf("%d %d", &a, &b);
	printf("max : %d\nmin : %d\n", q1_max(a, b), q1_min(a, b));
}

void q2_multiplication(int n) {
	for (int i = 1; i <= 9; i++)
		printf("%d * %d = %d\n", n, i, n*i);
}
void q2_main() {
	int n;
	scanf("%d", &n);
	q2_multiplication(n);
}

void q3_change(int * a, int * b) { // 3, 1
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	printf("%d %d\n", *a, *b);
}
void q3_main() {
	int a, b;
	scanf("%d %d", &a, &b);
	q3_change(&a, &b);
	printf("%d %d\n", a, b);
}

int q4_factorial(int n) {
	int a=1;
	for (int i = 1; i <= n; i++)
		a *= i;
	return a;
}
void q4_main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", q4_factorial(n));
}

int q5_112358(int n) {
	int a = 0, b = 1, c;
	for (int i = 0; i <= n; i++) {
		if (i <= 1)
			c = i;
		else {
			c = a + b;
			a = b;
			b = c;
		}
	}
	return c;
}
void q5_main() {
	int n;
	scanf("%d", &n);
	printf("%d\n", q5_112358(n));
}

char q6_grade(float avg) {
	if (avg >= 90 && avg <= 100)
		return 'A';
	else if (avg >= 80)
		return 'B';
	else if (avg >= 70)
		return 'C';
	else
		return 'F';
}
char q6_average(int k, int e, int m) {
	char grade = q6_grade((k + e + m) / 3.0);
	return grade;
}
int q6_main() {
	int k, e, m;
	scanf("%d %d %d", &k, &e, &m);
	printf("%c", q6_average(k, e, m));
	
}

int main() {
	q6_main();
}