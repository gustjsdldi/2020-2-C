//file: arrayparam.c / 465p �ǽ����� 10-3
#include <stdio.h>

int sumary(int* ary, int SIZE);

int main(void)
{
	int point[] = { 95, 88, 76, 54, 85, 33, 65, 78, 99, 82 };
	int* address = point;
	int aryLength = sizeof(point) / sizeof(int);

	int sum = 0;
	for (int i = 0; i < aryLength; i++)
		sum += *(point + i);

	printf("���ο��� ���� ���� %d\n", sum);
	address = point;
	printf("�ռ� sumary() ȣ��� ���� ���� %d\n", sumary(point, aryLength));
	printf("�ռ� sumary() ȣ��� ���� ���� %d\n", sumary(&point[0], aryLength));
	printf("�ռ� sumary() ȣ��� ���� ���� %d\n", sumary(address, aryLength));

	return 0;
}

int sumary(int* ary, int SIZE)
{
	int sum = 0;

	for (int i = 0; i < SIZE; i++)
	{
		//sum += ary[i];
		//sum += *(ary + i);
		sum += *ary++;
		//sum += *(ary++);

	}

	return sum;
}
