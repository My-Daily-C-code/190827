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

// ���� �����͸� ����Ű�� ���� ������
// ���� �����ʹ� ���� ����ϴ� ������ �ƴϹǷ� ���� ���� ��� �ǽ��� ������ �ƴ� ���� �ǽ��� �� ��