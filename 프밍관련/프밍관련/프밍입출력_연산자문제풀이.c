#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int q1() {
	printf("\"welcome\"\a\n"); //1
}
int q2() {
	printf("#%%$&*^*^*\n"); //2
}
int q3() {
	int a;
	a = 4; //scanf("%d", &a);
	printf("%d\n", a); //3
}
int q4() {
	char a[3], p;
	/*for (int i = 0; i < 3; i++) {
		scanf("%c", &a[i]);
		p = getchar();
	}*/
	a[0] = 'a', a[1] = 'b', a[2] = 'c';
	for (int i = 0; i < 3; i++)
		printf_s("%c ", a[i]); //4
}
int q5() {
	float a = 1.25;
	printf("%0.1f\n", a); //5
}
int q6() {
	int year, month, day;
	printf("태어난 연 : 2009\n"); year = 2009; //scanf("%d", &year);
	printf("태어난 월 : 1\n"); month = 1; //scanf("%d", &month);
	printf("태어난 일 : 14\n"); day = 14; //scanf("%d", &day);
	printf("%4d. %2d. %2d.", year, month, day);
}
int q7() {
	char a;
	a = 'a'; //scanf("%c", &a);
	printf("%d", a);
}
int q8() {
	int a;
	a = 10; //scanf("%d", &a);
	printf("%x", a);
}
int q9() {
	int a;
	a = 17; //scanf("%o", &a);
	printf("%x", a);
}
int q10() {
	int a, b;
	printf("a = 10\n"); a = 10; //scanf("%d", &a);
	printf("b = 3\n"); b = 3; //scanf("%d", &b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d mod %d = %d\n", a, b, a % b);
}
int q11() {
	double a, b;
	printf("a = 5.12\n"); a = 5.12; //scanf("%lf", &a);
	printf("b = 3.24\n"); b = 3.24;//scanf("%lf", &b);
	printf("%lf + %lf = %lf\n", a, b, a + b);
	printf("%lf - %lf = %lf\n", a, b, a - b);
	printf("%lf * %lf = %lf\n", a, b, a * b);
	printf("%lf / %lf = %lf\n", a, b, a / b);
}
int q12() {
	int a, b, c;
	printf("a = 3\n"); a = 3; //scanf("%d", &a);
	printf("b = 10\n"); b = 10; //scanf("%d", &b);
	printf("c = 7\n"); c = 7; //scanf("%d", &c);
	printf("max = %d", a > b ? (a > c ? a : c) : (b > c ? b : c));
}
int q13() {
	int a;
	printf("100미만의 수 입력 : 81\n"); a = 81; //scanf("%d", &a);
	printf("%d, %d", a/10, a%10);
}
int q14() {
	int a;
	printf("a = 14\n"); a = 14; //scanf("%d", &a);
	a = ~a;
	a += 1;
	printf("%d", a);
}
int main() {
	int a;
	while (1) {
		printf("\n원하는 번호 답 출력 (1~14)\n-> "); scanf("%d", &a);
		printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		printf("*****%d번*****\n", a);
		switch (a) {
		case 1: q1(); break;
		case 2: q2(); break;
		case 3: q3(); break;
		case 4: q4(); break;
		case 5: q5(); break;
		case 6: q6(); break;
		case 7: q7(); break;
		case 8: q8(); break;
		case 9: q9(); break;
		case 10: q10(); break;
		case 11: q11(); break;
		case 12: q12(); break;
		case 13: q13(); break;
		case 14: q14(); break;
		}
	}
}