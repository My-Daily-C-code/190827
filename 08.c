// 2���� �迭�� �Լ��� ���ڷ� ����

#include <stdio.h>
#pragma warning (disable: 4996)
void ShowArr2Dstyle(int(*arr)[4], int column) // �迭�� ��� ��ü ���
{
	int i, j;
	for (i = 0; i < column; i++)
	{
		for (j = 0; j < 4; j++)
			printf("%d", arr[i][j]);
		printf("\n");
	}
	printf("\n");
}

int Sum2DArr(int arr[][4], int column) // �迭 ����� �� ��ȯ
{
	int i, j, sum = 0;
	for (i = 0; i < column; i++)
		for (j = 0; j < 4; j++)
			sum += arr[i][j];
	return sum;
}

int main()
{
	int arr1[2][4] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int arr2[3][4] = {1, 1, 1, 1, 3, 3, 3, 3, 5, 5, 5, 5};

	ShowArr2Dstyle(arr1, sizeof(arr1) / sizeof(arr1[0]));
	ShowArr2Dstyle(arr2, sizeof(arr2) / sizeof(arr1[0]));
	printf("the sum of arr1: %d", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0]))); // �迭�� ���α��̸� ����� �ϴ� ��
	// sizeof(arr1)�� sizeof(arr2)�� ��ȯ ���� �迭�� ��üũ�� �̸�, sizeof(arr1[0])�� sizeof(arr2[0])�� ��ȯ ���� �迭�� ���� ũ���̴�. 
	// ���� ���� ���� ������ ���ؼ� �迭�� ���� ���̰� ��� �ȴ�.  03.c�� ���� �κе� ����!
 	printf("the sum of arr2: %d", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));
	return 0;
}
