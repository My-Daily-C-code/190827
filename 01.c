#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;

	int *ptrArr[] = { ptr1, ptr2, ptr3 };
	int **dptr = ptrArr; // �̷��� ���� ������ ��� �ȴٴ� ���� ptrArr�� dptr�� ������ ���� ��ġ���� ���Ѵ�. 

	printf("%d %d %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));// ������ ������ �迭�� �̸�ó�� ����� �������� �̹� chapter 13������ Ȯ���� �Ͽ���. 
	                                                          // �׸��� �̴� �迭�� ���������� ����Ű�� �����Ͷ�� ��� ��쿡�� ������ �ȴ�. 

	return 0;
}