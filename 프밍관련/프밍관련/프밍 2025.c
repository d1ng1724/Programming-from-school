#include <stdio.h>

int num13() {
	printf_s("\n*****13번*****\n"); // 13
	int a = 1234;
	float b = 1.235;
	printf("%d\n", a);
	printf("%10d\n", a);
	printf("%f\n", b);
	printf("%9f\n", b);
	printf("%9.2f\n", b);
}

int num14() {
	printf_s("\n*****14번*****\n"); // 14
	putchar('H');
	putchar('a');
	putchar('p');
	putchar('p');
	putchar('y');

	putchar('\a');
	printf_s("h\n");
	putchar('h');
	putchar(98);
}

int num15() {
	printf_s("\n*****15번*****\n"); // 15
	puts("Happy");
	puts("Happy\n");
	puts("X-mas\a");
	puts("\tGood friend");
}

int num16() {
	printf_s("\n*****16번*****\n"); // 16
	int x, y;

	x = 3; //scanf_s("%d", &x);
	y = 5; //scanf_s("%d", &y);
	printf("%d+%d=%d", x, y, x + y);
}

int num17() {
	printf_s("\n*****17번*****\n"); // 17
	char ch;

	printf_s("1개의 영문자를 입력 : ");
	ch = 'd'; //ch = getchar();
	printf("Typed : %c\n", ch);
}

int num18() {
	printf_s("\n*****18번*****\n"); // 18
	char ch[20];
	printf_s("이름을 영문으로 적으세요 : ");
	//gets_s(ch);
	printf_s("ch = %s\n", ch);
}

int extra_3_17() {
	printf_s("\n*****extra*****\n"); // 몇학년몇반번호
	int grade, clas2, num;

	scanf_s("%d %d %d", &grade, &clas2, &num);
	printf_s("%d학년 %d반 %d번 홍길동", grade, clas2, num);
}

int num19() {
	printf_s("\n*****19번*****\n"); //19
	int x, y, z;
	x = 2;
	y = x;
	z = 5 - x;
	printf_s("%d\n%d\n%d\n", x, y, z);
}

int num20() {
	printf_s("\n*****20번*****\n"); //20
	int a, b, c = 0;
	a = ++c;
	printf_s("%d\n", c);
	b = c++;
	printf_s("%d\n", c);
	printf_s("%d %d %d\n", a, b, ++c);
}

int num21() {
	printf_s("\n*****21번*****\n"); //21
	int a = 2, b = 3, c = 3, d = 4;
	a += d; printf_s("%d\n", a);
	b *= d; printf_s("%d\n", b);
	c %= d; printf_s("%d\n", c);
}

int num22() {
	printf_s("\n*****22번*****\n"); //22
	int a = 1, b = 2, c = 3;
	if (a < b) printf_s("b가 크다.\n");
	if (b == c) printf_s("b와 c는 같다.\n");
	if (b != c) printf_s("b와 c는 다르다.\n");
}

int num23() {
	printf_s("\n*****23번*****\n"); //23
	int a = 1, b = 2, max;
	max = (a > b) ? a : b;
	printf_s("%d\n", max);
}

int num24() {
	printf_s("\n*****24번*****\n"); //24
	int a = 3, b = 1;
	int x, y;
	x = !(a > b);
	y = (a == b) && (a < b) == (a > b || a == b);
	printf_s("x=%d\n", x);
	printf_s("y=%d\n", y);
}

int num25() {
	printf_s("\n*****25번*****\n"); //25
	int a = 7, b = 2, c = 5, x, y, z;
	x = b & c;
	y = a ^ b;
	z = a | c;
	printf_s("x=%d\n", x);
	printf_s("y=%d\n", y);
	printf_s("z=%d\n", z);
}

int num26() {
	printf_s("\n*****26번*****\n"); //26
	int s1 = 2;
	int s2 = 8;
	printf_s("s1 << 1 = %d\n", s1 << 1);
	printf_s("s2 >> 1 = %d\n", s2 >> 1);
}

int num27() {
	printf_s("\n*****27번*****\n"); //27
	int a = 3, x;
	float y, z;
	x = a / 2;
	y = a / 2;
	z = (float)a / 2;
	printf_s("x=%2d\ny=%f\nz=%f\n", x, y, z);
}
int main() {
	int ans;
	while (1) {
		printf_s("문제 답 출력 (13~27)\n-> ");
		scanf_s("%d", &ans);
		printf_s("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
		switch (ans) {
		case 13: num13(); break;
		case 14: num14(); break;
		case 15: num15(); break;
		case 16: num16(); break;
		case 17: num17(); break;
		case 18: num18(); break;
		case 19: num19(); break;
		case 20: num20(); break;
		case 21: num21(); break;
		case 22: num22(); break;
		case 23: num23(); break;
		case 24: num24(); break;
		case 25: num25(); break;
		case 26: num26(); break;
		case 27: num27(); break;
		}
	}
}