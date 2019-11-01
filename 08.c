// 2차원 배열을 함수의 인자로 전달

#include <stdio.h>
#pragma warning (disable: 4996)
void ShowArr2Dstyle(int(*arr)[4], int column) // 배열의 요소 전체 출력
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

int Sum2DArr(int arr[][4], int column) // 배열 요소의 합 반환
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
	printf("the sum of arr1: %d", Sum2DArr(arr1, sizeof(arr1) / sizeof(arr1[0]))); // 배열의 세로길이를 계산을 하는 것
	// sizeof(arr1)과 sizeof(arr2)의 반환 값은 배열의 전체크기 이며, sizeof(arr1[0])와 sizeof(arr2[0])의 반환 값은 배열의 가로 크기이다. 
	// 따라서 위의 연산 과정을 통해서 배열의 세로 길이가 계산 된다.  03.c의 질문 부분도 동일!
 	printf("the sum of arr2: %d", Sum2DArr(arr2, sizeof(arr2) / sizeof(arr2[0])));
	return 0;
}
