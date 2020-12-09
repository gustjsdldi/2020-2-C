//file: dowhilenumber.c / 310p 7-7
#include<stdio.h>
#define MAX 5
int main(void)
{
	int n = 1;

	do
	{
		printf("%d\n", n++);
	} while (n <= MAX);

	printf("\n제어변수 n => %d\n", n);

	return 0;
}