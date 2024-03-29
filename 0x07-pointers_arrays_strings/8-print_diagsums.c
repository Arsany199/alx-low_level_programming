#include "main.h"

/**
 * print_diagsums - the sum of the two diagonals of a square matrix of integers
 * @a: 2d array of chars
 *@size: number matrix
 *Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = *(a + (size + 1) * i) + sum1;
		sum2 = *(a + (size - 1) * (i + 1)) + sum2;
	}
	printf("%d, %d\n", sum1, sum2);
}
