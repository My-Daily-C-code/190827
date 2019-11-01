#include <stdio.h>
#pragma warning (disable: 4996)

int main()
{
	int num = 100;
	int *ptr = &num;
	int **dptr = &ptr;
	int ***tdpr = &dptr;

	printf("%d %d\n", **dptr, ***tdpr);

	return 0;
}

// 이중 포인터를 가르키는 삼중 포인터
// 삼중 포인터는 자주 사용하는 문법이 아니므로 만약 보일 경우 의심을 오류가 아닌 지는 의심을 할 것