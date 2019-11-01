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

// 1차원 배열 이름의 포인터 형은 배열의 이름이 가리키는 대상을 기준으로 결정 된다.