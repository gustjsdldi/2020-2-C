//file: break.c / 328p 7-13
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int input;
	while (1)
	{
		printf("����[����, 0(����), ���]�� �Է� �� [Enter] : ");
		scanf_s("%d", &input);
		printf("�Է��� ���� %d\n", input);
		if (input == 0)
			break;
	 }
	puts("�����մϴ�.");

	return 0;
}