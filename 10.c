#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int arr1[3] = { 1, 2, 3 };
	double arr2[3] = { 1.1, 2.2, 3.3 };

	printf("%d %g\n", *arr1, *arr2);
	*arr1 += 100;
	*arr2 += 120.5;
	printf("%d %g\n", arr1[0], arr2[0]);
	return 0;
}

// 1���� �迭 �̸��� ������ ���� �迭�� �̸��� ����Ű�� ����� �������� ���� �ȴ�.