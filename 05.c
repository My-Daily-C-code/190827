#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int arr1[3][2];
	int arr2[2][3];

	printf("arr1: %p\n", arr1);
	printf("arr1+1: %p\n", arr1 + 1);
	printf("arr1+2: %p\n", arr1 + 2);

	printf("arr2: %p\n", arr2);
	printf("arr2+1: %p\n", arr2 + 1);
	return 0;
}

// 2���� �迭 �̸��� ������� ���� �� ���� ������ �� ���, ���� ����� �� ���� ù ��° ����� �ּ� ���� �ȴ�. 