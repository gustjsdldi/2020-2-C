//file: nullpointer.c / 368p �ǽ����� 8-3
#include <stdio.h>

int main(void)
{
	int* ptr1, * ptr2, data = 10;
	ptr1 = NULL;

	printf("%p\n", ptr1);
	printf("%d\n", data);


	return 0;
}
