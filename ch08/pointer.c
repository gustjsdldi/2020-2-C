//file: pointer.c / 363p 실습예제 8-2
#include <stdio.h>

int main(void)
{
	int data = 100;
	int *ptrint;
	ptrint = &data;

	printf("변수명  주소값        저장값\n");
	printf("--------------------------------\n");
	printf("  data  %p  %8d\n", &data, data);
	printf("ptrint  %p  %p\n", &ptrint, ptrint);

		
		return 0;
}
