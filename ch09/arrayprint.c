//file: arrayprint.c / 415p 角嚼抗力 9-2
#include <stdio.h>

int main(void)
{
	int a[3][4] = {
		{ 1, 2, 7, 3},
		{ 5, 6, 3, 4},
		{ 9, 7, 1, 8}
	};

	printf("%6s %6s %3s  ",   "盔家", "林家",      "蔼");
	printf("%6s %6s %3s  ",   "盔家", "林家",      "蔼");
	printf("%6s %6s %3s  ",   "盔家", "林家",      "蔼");
	printf("%6s %6s %3s\n  ",   "盔家", "林家",      "蔼");
	printf("--------------------------------------");
	printf("--------------------------------------\n");

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
			printf("a[%d][%d] %d %d  ", i, j, &a[i][j], a[i][j]);
		puts("");
	}

	return 0;
}
