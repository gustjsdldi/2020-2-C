//file: cowhile.c / 309p 7-6
#define _CRT_SECURE_NO_WARNINGS // scanf() �������� ������� 

#include<stdio.h>

int main(void)
{
	int input;

	do
	{
		printf("���� �Ǵ� 0(����)�� �Է�: ");
		scanf_s("%d", &input);
	} while (input != 0); //while (input);

	puts("�����մϴ�.");

	return 0;
}