#include <stdio.h>
#pragma warning (disable:4996)

void MaxAndMin(int *arr, int size, int **mxptr, int **mnptr)
{
	int *max, *min;
	int i;

	max = min = &arr[0];
	for (i = 0; i < size; i++)
	{
		if (*max < arr[i])
			max = &arr[i];
		if (*min > arr[i])
			min = &arr[i];
	}

	*mxptr = max;
	*mnptr = min;

}

int main()
{
	int *maxptr;
	int *minptr;
	int arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("insert a number %d: ", i + 1);
		scanf_s("%d", &arr[i]);
	}

	MaxAndMin(arr, sizeof(arr) / sizeof(int), &maxptr, &minptr); // ±Ã±Ý?
	printf("the largest: %d, least: %d\n", *maxptr, *minptr);
	return 0;

}
