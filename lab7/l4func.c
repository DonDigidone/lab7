#include <stdio.h>

//task2
void writeArray(int *arr, int n)
{

	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

//task2
void readArray(int *arr, int n)
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &arr[i]);
	}
}
//task4
void sort(int *arr, int n) 
{
	{
		for (int s = n / 2; s > 0; s /= 2) {
			for (int i = 0; i < n; i++) {
				for (int j = i + s; j < n; j += s) {
					if (arr[i] > arr[j]) {
						int temp = arr[j];
						arr[j] = arr[i];
						arr[i] = temp;
					}
				}
			}
		}
	}
}
