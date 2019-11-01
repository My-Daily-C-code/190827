// 2차원 배열에서도 arr[i]와 *(arr+i)는 같다.

#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int a[3][2] = { { 1, 2 }, { 3, 4 }, { 5, 6 } };

	printf("a[0]: %p\n", a[0]);
	printf("*(a+0): %p\n", *(a + 0));

	printf("a[0]: %p\n", a[1]);
	printf("*(a+0): %p\n", *(a + 1));

	printf("a[0]: %p\n", a[2]);
	printf("*(a+0): %p\n", *(a + 2));

	printf("%d, %d\n", a[2][1], (*(a + 2))[1]);
	printf("%d, %d\n", a[2][1], (*(a[2] + 1)));
	printf("%d, %d\n", a[2][1], *(*(a + 2))+1);

	return 0;   
}

