//file: address.c / 360p 실습예제 8-1
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
	int input;

	printf("정수 입력: ");
	scanf_s("%d", &input);
	printf("입력값: %d\n", input);
	printf("주소값: %d(10진수), %p(16진수)\n", (int)&input, &input);
	printf("주소값: %u(10진수), %#X(16진수)\n", (unsigned)&input, (int)&input);
	printf("주소값 크기: %d\n", sizeof(&input));

	return 0;
}