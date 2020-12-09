//file: triangle.c / 338p 7-18
#include<stdio.h>

int main(void)
{
	const int MAX = 5;
	int i, j;

	for (i = 1; i <= MAX; i++)
	{
		for (j = 1; j <= i; j++)
		
			printf("*");
			puts("");
		
	}

	return 0;
}