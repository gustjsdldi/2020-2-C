//file: cowhile.c / 309p 7-6
#define _CRT_SECURE_NO_WARNINGS // scanf() 오르방지 상수정의 

#include<stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("정수 또는 0(종료)을 입력: ");
		scanf_s("%d", &input);
	} while (input != 0); //while (input);

	puts("종료합니다.");

	return 0;
}