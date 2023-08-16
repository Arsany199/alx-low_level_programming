#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: 0
 */
int main(void)
{
	int i, prev = 1, curr = 2, next;

	for (i = 0; i < 50; i++)
	{
		next = prev + curr;
		printf("%d, ", next);
		prev = curr;
		curr = next;
	}

	printf("\n");

	return (0);
}
