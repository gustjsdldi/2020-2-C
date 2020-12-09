// file : repetition.c / 298p 실습예제 7-1
#include <stdio.h>

int main(void)
{
	//모두 동일한 문자열의 단순한 반복
	printf("C 언어 재미 있네요!\n");
	printf("C 언어 재미 있네요!\n");
	printf("C 언어 재미 있네요!\n");

	int n = 1;
	//정수값을 1씩 증가시키면서 출력 반복
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);
	printf("%d\n", n++);

	return 0;
}