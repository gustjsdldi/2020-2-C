//file: array.c / 418p �ǽ����� 9-7
#include <stdio.h>
#define SIZE 3

int main(void)
{
	int score[] = { 89, 98, 76 };

	printf("score: %p, &score[0]: %p\n", score, &score[0]);

	printf("*score: %d, score[0]: %d\n\n", *score, score[0]);
	printf("÷��   �ּ�    ���尪\n");

	for (int i = 0; i < SIZE; i++)
		printf("%2d %10p %6d\n", i, (score + i), *(score + i));

	return 0;
}