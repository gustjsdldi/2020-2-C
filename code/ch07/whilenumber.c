//file: whilenumber.c / 306p 7-5
#include<stdio.h>
#define MAX 5
int main(void)
{
	int n = 1;

	while (n <= MAX)
		printf("%d\n", n++);

	printf("\n����� count => %d\n", n);

	return 0;
}