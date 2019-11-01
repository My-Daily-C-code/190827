#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num1 = 10, num2 = 20, num3 = 30;
	int *ptr1 = &num1;
	int *ptr2 = &num2;
	int *ptr3 = &num3;

	int *ptrArr[] = { ptr1, ptr2, ptr3 };
	int **dptr = ptrArr; // 이러한 대입 연산이 허용 된다는 것은 ptrArr과 dptr의 포인터 형이 일치함을 뜻한다. 

	printf("%d %d %d\n", *(ptrArr[0]), *(ptrArr[1]), *(ptrArr[2]));
	printf("%d %d %d \n", *(dptr[0]), *(dptr[1]), *(dptr[2]));// 포인터 변수도 배열의 이름처럼 사용이 가능함을 이미 chapter 13에서도 확인을 하였다. 
	                                                          // 그리고 이는 배열을 정상적으로 가리키는 포인터라면 어떠한 경우에도 성립이 된다. 

	return 0;
}