#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorial(int n) {
	if (n == 1)
		return n;
	return n * factorial(n - 1);
}
int main_factorial() {
	int n;
	printf("���� �Է� : "); scanf("%d", &n);
	printf("%d! : %d\n", n, factorial(n));
}
////////////////////////////////////////////////////////////////////////////////
int reverse(int n) {
	if (n == 0)
		return 0;
	printf("%d\n", n % 10);
	return reverse(n / 10);
}
int main_reverse() {
	int n;
	printf("���ڸ��� ���� �Է� : "); scanf("%d", &n);
	reverse(n);
}



int main() {
	main_reverse();
}